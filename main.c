
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct alumno
{
    int matricula;
    char nombre[50];
    char carrera[50];
    float promedio;
    char *direccion;
};

struct alumno *Maloc(int cantidad)
{
    return (struct alumno *)malloc(cantidad * sizeof(struct alumno));
}

void agregarAlumno(struct alumno **alumnos, int *cantidad_alumnos)
{
    (*cantidad_alumnos)++;
    *alumnos = realloc(*alumnos, (*cantidad_alumnos) * sizeof(struct alumno));

    int i = (*cantidad_alumnos) - 1;

    printf("\nIngrese la matrícula del nuevo alumno: ");
    scanf("%d", &(*alumnos)[i].matricula);

    // Limpiar el búfer después de scanf
    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    printf("Ingrese el nombre del nuevo alumno: ");
    fgets((*alumnos)[i].nombre, sizeof((*alumnos)[i].nombre), stdin);
    (*alumnos)[i].nombre[strcspn((*alumnos)[i].nombre, "\n")] = '\0';

    printf("Ingrese la carrera del nuevo alumno: ");
    fgets((*alumnos)[i].carrera, sizeof((*alumnos)[i].carrera), stdin);
    (*alumnos)[i].carrera[strcspn((*alumnos)[i].carrera, "\n")] = '\0';

    printf("Ingrese el promedio del nuevo alumno: ");
    scanf("%f", &(*alumnos)[i].promedio);

    (*alumnos)[i].direccion = (char *)malloc(50 * sizeof(char));

    printf("Ingrese la dirección del nuevo alumno: ");
    fgets((*alumnos)[i].direccion, 50, stdin);
    (*alumnos)[i].direccion[strcspn((*alumnos)[i].direccion, "\n")] = '\0';
}

void mostrarDatos(struct alumno *alumnos, int cantidad_alumnos)
{
    printf("\nDatos de los alumnos:\n");
    for (int i = 0; i < cantidad_alumnos; i++)
    {
        printf("Matrícula: %d\n", alumnos[i].matricula);
        printf("Nombre: %s\n", alumnos[i].nombre);
        printf("Carrera: %s\n", alumnos[i].carrera);
        printf("Promedio: %.2f\n", alumnos[i].promedio);
        printf("Dirección: %s\n", alumnos[i].direccion);
        printf("\n");
    }
}

void guardarDatosEnArchivo(struct alumno *alumnos, int cantidad_alumnos)
{
    FILE *archivo = fopen("datos_alumnos.txt", "w");

    if (archivo == NULL)
    {
        printf("Error al abrir el archivo.\n");
        return;
    }

    for (int i = 0; i < cantidad_alumnos; i++)
    {
        fprintf(archivo, "%d;%s;%s;%.2f;%s\n", alumnos[i].matricula, alumnos[i].nombre,
                alumnos[i].carrera, alumnos[i].promedio, alumnos[i].direccion);
    }

    fclose(archivo);

    printf("Datos guardados en el archivo 'datos_alumnos.txt'.\n");
}

int main(void)
{
    int cantidad_alumnos = 0;
    struct alumno *alumnos = NULL;

    char opcion;
    do
    {
        agregarAlumno(&alumnos, &cantidad_alumnos);

        printf("\n¿Desea agregar otro alumno? (s/n): ");
        scanf(" %c", &opcion);

    } while (opcion == 's' || opcion == 'S');

    mostrarDatos(alumnos, cantidad_alumnos);
    guardarDatosEnArchivo(alumnos, cantidad_alumnos);

    for (int i = 0; i < cantidad_alumnos; ++i)
    {
        free(alumnos[i].direccion);
    }
    free(alumnos);

    return 0;
}
