#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Registro /*crear una estructura registro de dos enteros
                numerosaleatorios y variable de tiempo*/

{
    int numerosAleatorios[3];
    int ano, mes, dia, hora, minuto, segundo;
};

void imprimirNumerosConTiempo(struct Registro *registros, int numTiradas);
void tirar(struct Registro *registros, int *numTiradas);
/*funciones utilizadas en el programa que apuntan a la estuctura registro*/

int main()
{
    struct Registro *registros = NULL;
    int numTiradas = 0;

    srand((unsigned int)time(NULL));

    int opcion;

    do  /*Inicia un bucle do que presenta un menú de opciones
           para seleccionar.*/

    {
        printf("\n0. Salir \n");
        printf("1. Realizar tirada \n");
        printf("2. Imprimir tiradas\n");
        printf("\nElige una opcion: ");
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 0:
            printf("\nHas elegido salir. Adios!\n");
            break;
        case 1:
            printf("\nHas elegido realizar una tirada.\n");
            tirar(registros, &numTiradas);
            break;
        case 2:
            printf("\nHas elegido imprimir tiradas.\n\n");
            imprimirNumerosConTiempo(registros, numTiradas);
            break;

        default:
            printf("\nOpcion no valida. Por favor, elige una opcion del 1 al 3.\n");
            break;
        }

    } while (opcion != 0);

    free(registros);

    return 0;
}

void imprimirNumerosConTiempo(struct Registro *registros, int numTiradas)
{
    for (int i = 0; i < numTiradas; i++)
    {
        printf("Tirada %d - N1: %d %d %d\tFecha y hora: %d-%02d-%02d %02d:%02d:%02d\n",
               i + 1, registros[i].numerosAleatorios[0], registros[i].numerosAleatorios[1], registros[i].numerosAleatorios[2],
               registros[i].ano, registros[i].mes, registros[i].dia,
               registros[i].hora, registros[i].minuto, registros[i].segundo);
    }
}

void tirar(struct Registro *registros, int *numTiradas)
{
    time_t tiempoActual;
    time(&tiempoActual);

    struct tm *infoTiempo = localtime(&tiempoActual);

    (*numTiradas)++;

    registros = realloc(registros, sizeof(struct Registro) * (*numTiradas));

    for (int i = 0; i < 3; i++)
    {
        registros[*numTiradas - 1].numerosAleatorios[i] = rand() % 100;
    }

    registros[*numTiradas - 1].ano = infoTiempo->tm_year + 1900;
    registros[*numTiradas - 1].mes = infoTiempo->tm_mon + 1;
    registros[*numTiradas - 1].dia = infoTiempo->tm_mday;
    registros[*numTiradas - 1].hora = infoTiempo->tm_hour;
    registros[*numTiradas - 1].minuto = infoTiempo->tm_min;
    registros[*numTiradas - 1].segundo = infoTiempo->tm_sec;

    printf("Tirada realizada y almacenada.\n");
}
