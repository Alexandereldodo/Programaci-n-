#include <stdio.h>
#include <stdlib.h>

/*7.1
void main(void)
{
    char p1, p2, p3 = '$';
    printf("\ningrese un caracter: ");
    p1=getchar();
    putchar(p1);
    printf("\n");
    fflush(stdin);

    printf("\nel caracter p3 es: ");
    putchar(p3);
    printf("\n");
    printf("\ningrese otro caracter: ");
    fflush(stdin);
    scanf("%c", &p2);
    printf("%c", p2);
}
*/

/*7.2
#include <ctype.h>
void main(void)
{
    char p1;
    printf("\ningrese un caracter para analizar si este es un digito: ");
    p1 = getchar();
    if (isdigit(p1))
        printf("%c es un digito \n", p1);
    else
        printf("%c no es un digito \n", p1);

    fflush(stdin);
    printf("\ningrese un caracter para examinar si este es una letra: ");
    p1 = getchar();
    if (isalpha (p1))
        printf("%c no es una letra \n", p1);
    else
        printf("%c no es una letra \n", p1);

    fflush(stdin);
    printf("\ningrese un caracter para examinar si este es una letra minuscula: ");
    p1 = getchar();
    if (isalpha (p1))
        if (islower (p1))
        printf("%c no es una letra minuscula \n", p1);
    else
        printf("%c no es una letra minuscula \n", p1);
    else
        printf("%c no es una letra \n", p1);

    fflush(stdin);
    printf("\ningrese una letra para convertirla de mayuscula a minuscula: ");
    p1 = getchar();
    if (isalpha (p1))
        if (isupper (p1))
        printf("%c fue convertida de mayuscula a minuscula \n", tolower(p1));
    else
        printf("%c es una letra minuscula \n", p1);
    else
        printf("%c no es una letra \n", p1);

}
*/

/*7.3
void main(void)
{
    char *cad0 = "buenos dias";
    char cad1[20] = "hola";
    char cad2[] = "mexico";
    char cad3[] = {'b', 'i', 'e', 'n', 'v', 'e', 'n', 'i', 'd', 'o', '\0'};

    char cad4[20], cad5[20], cad6[20];

    printf("\nla cadena cad0 es: ");
    puts(cad0);
    printf("\nla cadena cad1 es: ");
    printf("%s", cad1);

    printf("\nla cadena cad2 es: ");
    puts(cad2);
    printf("\nla cadena cad3 es: ");
    puts(cad3);

    printf("\ingrese una linea de texto -se lee con gets-: \n");
    gets(cad4);
    printf("\nla cadena cad4 es: ");
    puts(cad4);
    fflush(stdin);

    printf("\ningrese una linea de texto -se lee con scanf-: \n");
    scanf("%s", cad5);
    printf("\nla cadena cad5 es: ");
    printf("%s", cad5);
    fflush(stdin);

    char p;
    int i = 0;

    printf("\ningrese una linea de texto -se lee cada caracter con getchar-: \n");

    while ((p = getchar())!= '\n')
        cad6[i++] = p;
    cad6[i] = '\0';
    printf("\nla cadena cad6 es: ");
    puts(cad6);
}
*/

/*7.4
void main(void)
{
    char *cad0;
    cad0 = "argentina";
    puts(cad0);

    cad0 = "brasil";
    puts(cad0);

    char *cad1;
    gets(*cad1);  gets(cad1);

    char *cad1 = " ";
    gets(cad1);

    char cad2[20] = "mexico";
    puts(cad2);
    gets(cad2);
    puts(cad2);
    cad2[10] = "guatemala";

}
*/

/*7.5
#include <stdlib.h>

void main(void)
{
    int i;
    double d;
    long l;
    char cad0[20], *cad1;

    printf("\ningrese una cadena de caracteres: ");
    gets(cad0);
    i = atoi(cad0);
    printf("\n%s \t %d", cad0, i+3);

    printf("\ningrese una cadena de caracteres: ");
    gets(cad0);
    d = atof(cad0);
    printf("\n%s \t %.2f ", cad0, d+1.50);

    d = strtod(cad0, &cad1);
    printf("\n%s \t %.2f", cad0, d+1.50);
    puts(cad1);

    l = atol(cad0);
    printf("\n%s \t %1d ", cad0, 1+10);

    l = strtol(cad0, &cad1, 0);
    printf("\n%s \t %1d", cad0, 1+10);
    puts(cad1);

}
*/

/*7.6
#include <string.h>

void main(void)
{
    char *cad0 = "hola mexico";
    char cad1[20], cad2[20], cad3[20] = ", buenos dias!!!";

    strcpy(cad1, cad0);
    printf("\nprueba de la funcion strcpy. se copia la cadena cad0 a cad1: %s\n", cad1);

    strcpy(cad1, cad3);
    printf("\nprueba de la funcion strcpy. se copia la cadena cad3 a cad1: %s\n", cad1);

    strncpy(cad2, cad0, 4);
    cad2[4] = '\0';
    printf("\nprueba de la funcion strncpy. se copian 4 caracteres de cad0 a cad2: %s\n", cad2);

    strncpy(cad2, cad3, 3);
    cad2[3] = '\0';
    printf("\nprueba de la funcion strncpy. se copian 3 caracteres de cad3 a cad2: %s\n", cad2);

    strcat(cad0, cad3);
    printf("\nprueba de la funcion strcat. se incorpora la cadena cad3 a cad0: %s\n", cad0);

    strcat(cad1, "yy");
    printf("\nprueba de la funcion strcat. se incorpora la cadena yy a cad1: %s\n", cad1);

    strcat(cad1, "yy");
    strncat(cad2, cad0, 4);
    printf("\nprueba de la funcion strncat. se incorporan 4 caracteres de cad0 a cad2: %s\n", cad2);

    cad0 = strstr(cad0, "mexico");
    printf("\nprueba de la funcion strstr. se trata de localizar la cadena mexico dentro de cad0: %s\n", cad0);

    cad0 = strstr(cad0, "guatemala");
    printf("\nprueba de la funcion strstr. se trata de localizar la cadena guatemala dentro de cad0: %s\n", cad0);
}
*/

/*7.7
#include <string.h>

void main(void)
{
    int i;
    char cad0[20] = "hola mexico";
    char cad1[20] = "hola guatemala";
    char cad2[20] = "hola venezuela";
    char cad3[20] = "hola mexico";
    char *c, c3;

    i = strcmp(cad0, cad1);
    printf("\nresultado de la comparacion -cad0 y cad1-: %d", i);

    i = strcmp(cad0, cad2);
    printf("\nresultado de la comparacion -cad0 y cad2-: %d", i);

    i = strcmp(cad0, cad3);
    printf("\nresultado de la comparacion -cad0 y cad3-: %d", i);

    i = strlen(cad0);
    printf("\nlongitud cadena cad0: %d", i);

    i = strlen(cad1);
    printf("\nlongitud cadena cad1: %d", i);

    c = strchr(cad1, 'g');
    if (c != null)
    {
        c3 = *c;
        printf("\nel valor de c3 es: %c", c3);
    }
    c = strchr(cad2, 'v');
    if (c != null)
    {
        c3 = *c;
        printf("\nel valor de c3 es: %c", c3);
    }
}
*/

/*7.8
#include <string.h>
#include <ctype.h>

void minymay(char cad);

void main(void)
{
    int i, n;
    char fra[20][50];

    printf("\ningrese el numero de filas del arreglo: ");
    scanf("%d", &n);
    for (i=0; i<n; i++)
    {
        printf("ingrese la linea %d de texto: ", i+1);
        fflush(stdin);
        gets(fra[i]);
    }
    printf("\n\n");
    for (i=0; i<n; i++)
        minymay(fra[i]);
}

void minymay(char *cadena)

{
    int i = 0, mi = 0, ma = 0;
    while(cadena[i] != '\0')
    {
        if (islower(cadena[i]))
            mi++;
        else
            if (isupper(cadena[i]))
            ma++;4
            i++;
    }
    printf("\n\nnumero de letras minusculas: %d", mi);
    printf("\nnumero de letras mayusculas: %d", ma);
}
*/

/*7.9
int cuenta(char *, char);

void main(void)
{
    char car, cad[50];
    int res;
    printf("\ningrese la cadena de caracteres: ");
    gets(cad);
    fflush(stdin);
    printf("\ningrese el caracter: ");
    car = getchar();
    res = cuenta(cad, car);
    printf("\n\n%c se encuentra %d veces en la cadena %s", car, res, cad);

}
int cuenta(char *cad, char car)
{
    int i = 0, r = 0;
    while (cad[i] != '\0')
    {
        if (cad[i] == car)
            r++;
        i++;
    }
    return (r);
}
*/

/*7.10
#include <stdlib.h>

void main(void)
{
    char c, cad[10];
    int i = 0;
    float sum = 0.0;
    printf("\ndesea ingresar una cadena de caracteres (s/n)? ");
    c = getchar();
    while (c == 's')
    {
        printf("\ningrese una cadena de caracteres: ");
        fflush(stdin);
        gets(cad);
        i++,
        sum += atof(cad);
        printf("\ndesea ingresar otra cadena de caracteres (s/n)? ");
        c = getchar();
    }
    printf("\nsuma: %.2f", sum);
    printf("\npromedio: %.2f", sum / i);
}
*/

/*7.11
#include <ctype.h>

void main(void)
{
    char p, cad[50];
    int n;
    printf("\ningrese la cadena de caracteres (maximo 50): ");
    gets(cad);
    printf("\ningrese la posicion en la cadena que desea verificar :");
    scanf("%d", &n);
    if ((n >= 0)&& (n < 50))
    {
        p = cad[n- 1];
        if (islower (p))
            printf("\n%c es una letra minuscula", p);
        else
            printf("\n%c no es una letra minuscula", p);
    }
    else
        printf("\nel valor ingresado de n es incorrecto");
}
*/

/*7.12
#include <ctype.h>

void main(void)
{
    char cad[50];
    int i = 0, mi = 0, ma = 0;
    printf("\ningrese la cadena de caracteres (maximo 50 caracteres):");
    gets(cad);
    while(cad[i]!= '\0')
    {
        if (islower (cad[i]))
            mi++;
        else
            if (isupper (cad[i]))
            ma++;
        i++;
    }
    printf("\n\nnumero de letras minusculas: %d", mi);
    printf("\nnumero de letras mayusculas: %d", ma);
}
*/

/*7.13
int cuenta(char *);

void main(void)
{
    int i;
    char cad[50];
    printf("\ningrese la cadena de caracteres: ");
    gets(cad);
    i = cuenta(cad);
    printf("\nlongitud de la cadena: %d", i);
}
int cuenta(char *cadena)
{
    int c = 0;
    while (!cadena[c] == '\0')
        c++;
    return (c);
}
*/

/*7.14
int cuenta(char *);

void main(void)
{
    int i;
    char cad[50];
    printf("\ningrese la cadena de caracteres: ");
    gets(cad);
    i = cuenta(cad);
    printf("\nlongitud de la cadena: %d", i);
}
int cuenta(char *cadena)
{
    if (cadena[0] == '0')
        return 0;
    else
        return(1 + cuenta (&cadena[1]));
}
*/

/*7.15
#include <ctype.h>

void interpreta(char *);

void main(void)
{
    char cad[50];
    printf("\ningrese la cadena de caracteres: ");
    gets(cad);
    interpreta(cad);
}
void interpreta(char *cadena)
{
    int i = 0, j, k;
    while (cad[i] != '\0')
    {
        if (isalpha (cad[i]))
        {
            k = cad[i - 1] - 48;
            for (j = 0; j < k; j++)
                putchar(cad[i]);
        }
        i++;
    }
*/

/*7.16
#include <string.h>

void main(void)
{
    char cad1[50], cad2[50], *cad0, null = "";
    int i = 0;
    printf("\n ingrese la primera cadena de caracteres: ");
    gets(cad1);
    printf("\n ingrese la cadena a buscar: ");
    gets(cad2);
    strcpy(cad0, cad1);
    cad0 = strstr (cad0, cad2);
    while (cad0 != null)
    {
        i++;
        cad0 = strstr (cad0 + 1, cad2);

    }
    printf("\nel numero de veces que aparece la segunda cadena es: %d", i);
}
*/

#include <string.h>

/*7.17
char * inverso(char *);

void main(void)
{
    char fra[50], aux[50];
    printf("\ningrese la linea de texto: ");
    gets(fra);
    strcpy(aux, inverso(fra));
    printf("\nescribe la linea de texto en forma inversa: ");
    puts(aux);

}
char * inverso(char *cadena)
{
    int i = 0, j, lon;
    char cad;
    lon = strlen(cadena);
    j = lon-1;
    while (i < ((lon - 1)/2))
    {
        cad = cadena[i];
        cadena[i] = cadena[j];
        cadena[j] = cad;
        i++;
        j--;
    }
    return (cadena);
}
*/

/*7.18
void inverso(char *);

void main(void)
{
    char fra[50];
    printf("\ningrese la linea de texto: ");
    gets(fra);
    printf("\nescribe la linea de texto en forma inversa: ");
    inverso(fra);
}
void inverso(char *cadena)
{
    if (cadena[0]!= '\0')
    {
        inverso(&cadena[1]);
        putchar(cadena[0]);
    }
}
*/

#include <ctype.h>

/*7.19
int cuentap(char *);

void main(void)
{
    int i;
    char fra[50];
    printf("\ningrese la linea de texto: ");
    gets(fra);
    strcat(fra, " ");

    i = cuentap(fra);
    printf("\nla linea de texto tiene %d palabras", i);
}
int cuentap(char *cad)
{
    char *cad0 = "";
    int i = 0;
    cad0 = strstr(cad, " ");
    while (strcmp(cad, " "))
    {
        strcpy(cad, cad0);
        i++;
        cad0 = strstr (cad + 1, " ");

    }
    return (i);
}
*/

/*7.20
int longitud(char cad);

void main(void)
{
    int i, n, l = -1, p, t;
    char cad[50], fra[20][50];
    printf("\ningrese el numero de filas del arreglo: ");
    scanf("%d", &n);
    for (i=0; i<n; i++)
    {
        printf("ingrese la linea %d de texto. maximo 50 caracteres: ", i+1);
        fflush(stdin);
        gets(fra[i]);
    }
    printf("\n");
    for (i=0; i<n; i++)
    {
        strcpy(cad, fra[i]);
        t = longitud (cad);
        if (t > 1)
        {
            l = t;
            p = i;
        }
    }
    printf("\nla cadena con mayor longitud es: ");
    puts(fra[p]);
    printf("\nlongitud: %d", l);
}

int longitud(char *cadena)
{
    int cue = 0;
    while (! cadena[cue] == '\0')
        cue++;
    return (cue);
}
*/

/*7.21
void intercambia(char fra[][30], int);

void main(void)
{
    int i, n;
    char fra[20][30];
    printf("\ningrese el numero de filas del arreglo: ");
    scanf("%d", &n);
    for (i=0; i<n; i++)
    {
        printf("ingrese la linea de texto numero %d: ", i+1);
        fflush(stdin);
        gets(fra[i]);
    }
    printf("\n\n");
    intercambia(fra, n);
    for (i=0; i<n; i++)
    {
        printf("imprision de la linea de texto %d: ", i+1);
        puts(fra[i]);
    }
}
void intercambia(char fra[][30], int n)
{
    int i, j;
    j = n - 1;
    char cad[30];
    for (i=0; i < (n/2); i++)
    {
        strcpy(cad, fra[i]);
        strcpy(fra[i], fra[j]);
        strcpy(fra[j], cad);

    }
}

*/


/*Codigos del tema 8

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*struct alumno
{
    int matricula;
    char nombre[20];
    char carrera[20];
    float promedio;
    char direccion[20];
};
void main(void)
{
    char nom[20], car[20], dir[20];
    int mat;
    float pro;
    printf("\nIngrese la matrícula del alumno 2: ");
    scanf("%d", &a2.matricula);
    fflush(stdin);
    printf("Ingrese el nombre del alumno 2:");
    gets(a2.nombre);
    printf("Ingrese la carrera del alumno 2: ");
    gets(a2.carrera);
    printf("Ingrese el promedio del alumno 2: ");
    scanf("%f", &a2.promedio);
    fflush(stdin);
    printf("Ingrese la dirección del alumno 2: ");
    gets(a2.direccion);
    printf("\nIngrese la matrícula del alumno 3: ");
    scanf("%d", &mat);
    a3.matricula = mat;
    fflush(stdin);
    printf("Ingrese el nombre del alumno 3: ");
    gets(nom);
    strcpy(a3.nombre, nom);
    printf("Ingrese la carrera del alumno 3: ");
    gets(car);
    strcpy(a3.carrera, car);
    printf("Ingrese el promedio del alumno 3: ");
    scanf("%f", &pro);
    a3.promedio = pro;
    fflush(stdin);
    printf("Ingrese la dirección del alumno 3: ");
    gets(dir);
    strcpy(a3.direccion, dir);
    printf("\nDatos del alumno 1\n");
    printf("%d\n", a1.matricula);
    puts(a1.nombre);
    puts(a1.carrera);
    printf("%.2f\n", a1.promedio);
    puts(a1.direccion);
    printf("\nDatos del alumno 2\n");
    printf("%d\n", a2.matricula);
    puts(a2.nombre);
    puts(a2.carrera);
    printf("%.2f\n", a2.promedio);
    puts(a2.direccion);
    printf("\nDatos del alumno 3\n");
    printf("%d \t %s \t %s \t %.2f \t %s", a3.matricula, a3.nombre, a3.carrera, a3.promedio, a3.direccion);
}*/

/*Programa 8.2
struct alumno
{
    int matricula;
    char nombre[20];
    char carrera[20];
    float promedio;
    char direccion[20];
};
void Lectura(struct alumno *);
void main(void)
{
    struct alumno a0 = {120, "María", "Contabilidad", 8.9, "Querétaro"};
    struct alumno *a3, *a4, *a5, a6;
    a3 = &a0;
    a4 = new (struct alumno);
    printf("\nIngrese la matrícula del alumno 4: ");
    scanf("%d", &(*a4).matricula);
    fflush(stdin);
    printf("Ingrese el nombre del alumno 4: ");
    gets(a4->nombre);
    printf("Ingrese la carrera del alumno 4: ");
    gets((*a4).carrera);
    printf("Ingrese promedio del alumno 4: ");
    scanf("%f", &a4->promedio);
    fflush(stdin);
    printf("Ingrese la dirección del alumno 4: ");
    gets(a4->direccion);
    a5 = new (struct alumno);
    Lectura(&a6);
    printf("\nDatos del alumno 3\n");
    printf("%d\t%s\t%s\t%.2f\t%s", a3->matricula, a3->nombre, a3->carrera, a3->promedio, a3->direccion);
    printf("\nDatos del alumno 4\n");
    printf("%d\t%s\t%s\t%.2f\t%s", a4->matricula, a4->nombre, a4->carrera, a4->promedio, a4->direccion);
    printf("\nDatos del alumno 5\n");
    printf("%d\t%s\t%s\t%f\t%s", a5->matricula, a5->nombre, a5->carrera, a5->promedio, a5->direccion);
    printf("\nDatos del alumno 6\n");
    printf("%d\t%s\t%s\t%.2f\t%s", a6.matricula, a6.nombre, a6.carrera, a6.promedio, a6.direccion);
}
void Lectura(struct alumno *a)
{
    printf("\nIngrese la matrícula del alumno: ");
    scanf("%d", &(*a).matricula);
    fflush(stdin);
    printf("Ingrese el nombre del alumno: ");
    gets(a->nombre);
    fflush(stdin);
    printf("Ingrese la carrera del alumno: ");
    gets((*a).carrera);
    printf("Ingrese el promedio del alumno: ");
    scanf("%f", &a->promedio);
    fflush(stdin);
    printf("Ingrese la dirección del alumno: ");
    gets(a->direccion);
}*/

/*Programa 8.3
typedef struct
{
    char calle[20];
    int numero;
    int cp;
    char localidad[20];
} domicilio;
struct empleado
{
    char nombre[20];
    char departamento[20];
    float sueldo;
    domicilio direccion;
};
void Lectura(struct empleado *a)
{
    printf("\nIngrese el nombre del empleado: ");
    gets(a->nombre);
    fflush(stdin);
    printf("Ingrese el departamento de la empresa: ");
    gets(a->departamento);
    printf("Ingrese el sueldo del empleado: ");
    scanf("%f", &a->sueldo);
    fflush(stdin);
    printf("—-Ingrese la dirección del empleado—-");
    printf("\n\tCalle: ");
    gets(a->direccion.calle);
    printf("\tNúmero: ");
    scanf("%d", &a->direccion.numero);
    printf("\tCódigo Postal: ");
    scanf("%d", &a->direccion.cp);
    fflush(stdin);
    printf("\tLocalidad: ");
    gets(a->direccion.localidad);
}
void main(void)
{
    struct empleado e0 = {"Arturo", "Compras", 15500.75, "San Jerónimo", 120, 3490, "Toluca"};
    struct empleado *e1, *e2, e3, e4;
    e1 = new (struct empleado);
    printf("\nIngrese el nombre del empleado 1: ");
    scanf("%s", &(*e1).nombre);
    fflush(stdin);
    printf("Ingrese el departamento de la empresa: ");
    gets(e1->departamento);
    printf("Ingrese el sueldo del empleado: ");
    scanf("%f", &e1->sueldo);
    printf("—-Ingrese la dirección del empleado—-");
    printf("\n\tCalle: ");
    fflush(stdin);
    gets(e1->dirección, calle);
    printf("\tNúmero: ");
    scanf("%d", &e1->direccion.numero);
    printf("\tCódigo Postal: ");
    scanf("%d", &e1->direccion.cp);
    printf("\tLocalidad: ");
    fflush(stdin);
    gets(e1->direccion.localidad);
    printf("\nIngrese el nombre del empleado 3: ");
    scanf("%s", &e3.nombre);
    fflush(stdin);
    printf("Ingrese el departamento de la empresa: ");
    gets(e3.departamento);
    printf("Ingrese el sueldo del empleado: ");
    scanf("%f", &e3.sueldo);
    printf("—-Ingrese la dirección del empleado—-");
    printf("\n\tCalle: ");
    fflush(stdin);
    gets(e3.direccion.calle);
    printf("\tNúmero: ");
    scanf("%d", &e3.direccion.numero);
    printf("\tCódigo Postal: ");
    scanf("%d", &e3.direccion.cp);
    printf("\tLocalidad: ");
    fflush(stdin);
    gets(e3.direccion.localidad);
    e2 = new (struct empleado);
    Lectura(e2);
    Lectura(&e4);
    printf("\nDatos del empleado 1\n");
    printf("%s\t%s\t%.2f\t%s\t%d\t%d\t%s", e1->nombre, e1->departamento, e1>sueldo, e1->direccion.calle, e1->direccion.numero, e1->direccion.cp, e1->direccion.localidad);
    printf("\nDatos del empleado 4n");
    printf("%s\t%s\t%.2f\t%s\t%d\t%d\t%s", e4.nombre, e4.departamento, e4.sueldo, e4.direccion.calle, e4.direccion.numero, e4.direccion.cp, e4.direccion.localidad);
}*/

/*Programa 8.4
typedef struct
{
    int matricula;
    char nombre[30];
    float cal[5];
} alumno;
void Lectura(alumno, int T);
void F1(alumno *, int TAM);
void F2(alumno *, int TAM);
void F3(alumno *, int TAM);
void main(void)
{
    alumno ARRE[50];
    int TAM;
    do
    {
        printf("Ingrese el tamaño del arreglo: ");
        scanf("%d", &TAM);
    }
    while (TAM > 50 || TAM < 1);
    Lectura(ARRE, TAM);
    F1(ARRE, TAM);
    F2(ARRE, TAM);
    F3(ARRE, TAM);
}
void Lectura(alumno A[], int T)
{
    int I, J;
    for (I=0; I<T; I++)
    {
        printf("\nIngrese los datos del alumno %d", I+1);
        printf("\nIngrese la matrícula del alumno: ");
        scanf("%d", &A[I].matricula);
        fflush(stdin);
        printf("Ingrese el nombre del alumno:");
        gets(A[I].nombre);
        for (J=0; J<5; J++)
        {
            printf("\tIngrese la calificación %d del alumno %d: ", J+1, I+1);
            scanf("%f", &A[I].cal[J]);
        }
    }
}
void F1(alumno A[], int T)
{
    int I, J;
    float SUM, PRO;
    for (I=0; I<T; I++)
    {
        printf("\nMatrícula del alumno: %d", A[I].matricula);
        SUM = 0.0;
        for (J=0; J<5; J++)
        {
            SUM = SUM + A[I].cal[J];
        }
        PRO = SUM / 5;
        printf("\t\tPromedio: %.2f", PRO);
    }
}
void F2(alumno A[], int T)
{
    int I;
    printf("\nAlumnos con calificación en la tercera materia > 9");
    for (I=0; I<T; I++)
    {
        if (A[I].cal[2] > 9)
        {
            printf("\nMatrícula del alumno: %d", A[I].matricula);
        }
    }
}
void F3(alumno A[], int T)
{
    int I;
    float PRO, SUM = 0.0;
    for (I=0; I<T; I++)
    {
        SUM = SUM + A[I].cal[3];
    }
    PRO = SUM / T;
    printf("\n\nPromedio de la materia 4: %.2f", PRO);
}*/

/*Programa 8.5
union datos
{
    char celular[15];
    char correo[20];
};
typedef struct
{
    int matricula;
    char nombre[20];
    char carrera[20];
    float promedio;
    union datos personales;
} alumno;
void Lectura(alumno a);
void main(void)
{
    alumno a1 = {120, "María", "Contabilidad", 8.9, "5-158-40-50"}, a2, a3;
    printf("Alumno 2\n");
    printf("Ingrese la matrícula: ");
    scanf("%d", &a2.matricula);
    fflush(stdin);
    printf("Ingrese el nombre: ");
    gets(a2.nombre);
    fflush(stdin);
    printf("Ingrese la carrera: ");
    gets(a2.carrera);
    printf("Ingrese el promedio: ");
    scanf("%f", &a2.promedio);
    fflush(stdin);
    printf("Ingrese el correo electrónico: ");
    gets(a2.personales.correo);
    printf("Alumno 3\n");
    Lectura(&a3);
    printf("\nDatos del alumno 1\n");
    printf("%d\n", a1.matricula);
    puts(a1.nombre);
    puts(a1.carrera);
    printf("%.2f\n", a1.promedio);
    puts(a1.personales.celular);
    strcpy(a0.personales.correo, "hgimenez@hotmail.com");
    puts(a0.personales.celular);
    puts(a0.personales.correo);
    printf(”\nDatos del alumno 2\n”);
    printf("%d\n", a2.matricula);
    puts(a2.nombre);
    puts(a2.carrera);
    printf("%.2f\n", a2.promedio);
    puts(a2.personales.celular);
    puts(a2.personales.correo);
    printf("Ingrese el teléfono celular del alumno 2: ");
    fflush(stdin);
    gets(a2.personales.celular);
    puts(a2.personales.celular);
    puts(a2.personales.correo);
    printf("\nDatos del alumno 3\n");
    printf("%d\n", a3.matricula);
    puts(a3.nombre);
    puts(a3.carrera);
    printf("%.2f\n", a3.promedio);
    puts(a3.personales.celular);
    puts(a3.personales.correo);
}
void Lectura(alumno *a)
{
    printf("\nIngrese la matrícula: ");
    scanf("%d", &(*a).matricula);
    fflush(stdin);
    printf("Ingrese el nombre: ");
    gets(a->nombre);
    fflush(stdin);
    printf("Ingrese la carrera: ");
    gets((*a).carrera);
    printf("Ingrese el promedio: ");
    scanf("%f", &a->promedio);
    printf("Ingrese el teléfono celular: ");
    fflush(stdin);
    gets(a->personales.celular);
}*/

/*Programa 8.6
typedef struct
{
    int clave;
    char nombre[15];
    float precio;
    int existencia;
} producto;
void Lectura(producto *, int);
void Ventas(producto *, int);
void Reabastecimiento(producto *, int);
void Nuevos_Productos(producto *, int *);
void Inventario(producto *, int);
void main(void)
{
    producto INV[100];
    int TAM, OPE;
    do
    {
        printf("Ingrese el número de productos: ");
        scanf("%d", &TAM);
    }
    while (TAM > 100 || TAM < 1);
    Lectura(INV, TAM);
    printf("\nIngrese operación a realizar. \n\t\t1 – Ventas \n\t\t 2 – Reabastecimiento \n\t\t 3 - Nuevos Productos \n\t\t 4 – Inventario \n\t\t 0 - Salir: ");
    scanf("%d", &OPE);
    while (OPE)
    {
        switch (OPE)
        {
        case 1:
            Ventas(INV, TAM);
            break;
        case 2:
            Reabastecimiento(INV, TAM);
            break;
        case 3:
            Nuevos_Productos(INV, &TAM);
            break;
        case 4:
            Inventario(INV, TAM);
            break;
        };
        printf("\nIngrese operación a realizar. \n\t\t1 – Ventas \n\t\t 2 – Reabastecimiento \n\t\t 3 - Nuevos Productos \n\t\t 4 – Inventario \n\t\t 0 - Salir: ");
        scanf("%d", &OPE);
    }
}
void Lectura(producto A[], int T)
{
    int I;
    for (I=0; I<T; I++)
    {
        printf("\nIngrese información del producto %d", I+1);
        printf("\n\tClave: ");
        scanf("%d", &A[I].clave);
        fflush(stdin);
        printf("\tNombre:");
        gets(A[I].nombre);
        printf("\tPrecio:");
        scanf("%f", &A[I].precio);
        printf("\tExistencia: ");
        scanf("%d", &A[I].existencia);
    }
}
void Ventas(producto A[], int T)
{
    int CLA, CAN, I, RES;
    float TOT, PAR;
    printf("\nIngrese clave del producto -0 para salir-: ");
    scanf("%d", &CLA);
    TOT = 0.0;
    while (CLA)
    {
        printf("\tCantidad: ");
        scanf("%d", &CAN);
        I = 0;
        while ((I < T) && (A[I].clave < CLA))
        {
            I++;
        }
        if ((I == T) || (A[I].clave > CLA))
        {
            printf("\nLa clave del producto es incorrecta");
        }
        else
        {
            if (A[I].existencia >= CAN)
            {
                A[I].existencia -= CAN;
                PAR = A[I].precio * CAN;
                TOT += PAR;
            }
            else
            {
                printf("\nNo existe en inventario la cantidad solicitada. Solo hay %d", A[I].existencia);
                printf(" \nLos lleva 1 - Si 0 – No?: ");
                scanf("%d", &RES);
                if (RES)
                {
                    PAR = A[I].precio * A[I].existencia;
                    A[I].existencia = 0;
                    TOT += PAR;
                }
            }
            printf("\nIngrese la siguiente clave del producto -0 para salir-:");
            scanf("%d", &CLA);
        }
        printf("\nTotal de la venta: %f", TOT);
    }
}
void Reabastecimiento(producto A[], int T)
{
    int CLA,CAN,I;
    printf("\nIngrese clave del producto -0 para salir-: ");
    scanf("%d", &CLA);
    while (CLA)
    {
        I = 0;
        while ((I < T) && (A[I].clave < CLA))
        {
            I++;
        }
        if ((I==T) || (A[I].clave > CLA))
        {
            printf("\nLa clave del producto ingresada es incorrecta");
        }
        else
        {
            printf("\tCantidad: ");
            scanf("%d", &CAN);
            A[I].existencia += CAN;
        }
        printf("\nIngrese otra clave del producto -0 para salir-: ");
        scanf("%d", &CLA);
    }
}
void Nuevos_Productos(producto A[], int *T)
{
    int CLA, I, J;
    printf("\nIngrese clave del producto -0 para salir-: ");
    scanf("%d", &CLA);
    while ((*T < 30) && (CLA))
    {
        I=0;
        while ((I < *T) && (A[I].clave < CLA))
        {
            I++;
        }
        if (I == *T)
        {
            A[I].clave = CLA;
            printf("\tNombre:");
            fflush(stdin);
            gets(A[I].nombre);
            printf("\tPrecio:");
            scanf("%f", &A[I].precio);
            printf("\tCantidad: ");
            scanf("%d", &A[I].existencia);
            *T = *T + 1;
        }
        else
        {
            if (A[I].clave == CLA)
            {
                printf("\nEl producto ya se encuentra en el inventario");
            }
            else
            {
                for (J=*T; J>I; J--)
                {
                    A[J] = A[J-1];
                }
                A[I].clave = CLA;
                printf("\tNombre:");
                fflush(stdin);
                gets(A[I].nombre);
                printf("\tPrecio:");
                scanf("%f", &A[I].precio);
                printf("\tCantidad: ");
                scanf("%d", &A[I].existencia);
                *T = *T + 1;
            }
            printf("\nIngrese otra clave de producto -0 para salir-: ");
            scanf("%d", &CLA);
        }
        if (*T == 30)
        {
            printf("\nYa no hay espacio para incorporar nuevos productos");
        }
    }
}
void Inventario(producto A[], int T)
{
    int I;
    for (I=0; I<T; I++)
    {
        printf("\nClave: %d", A[I].clave);
        printf("\tNombre: %s", A[I].nombre);
        printf("\tPrecio: %d", A[I].precio);
        printf("\tExistencia: %d \n", A[I].existencia);
    }
}*/

/*Programa 8.7
typedef struct
{
    char mat[20];
    int pro;
} matpro;
typedef struct
{
    int matri;
    char nom[20];
    matpro cal[5];
} alumno;
void Lectura(alumno *, int);
void F1(alumno *, int);
void F2(alumno *, int);
void F3(alumno *, int);
void main(void)
{
    alumno ALU[50];
    int TAM;
    do
    {
        printf("Ingrese el tamaño del arreglo: ");
        scanf("%d", &TAM);
    }
    while (TAM > 50 || TAM < 1);
    Lectura(ALU, TAM);
    F1(ALU, TAM);
    F2(ALU, TAM);
    F3(ALU, TAM);
}
void Lectura(alumno A[], int T)
{
    int I, J;
    for(I=0; I<T; I++)
    {
        printf("\nIngrese los datos del alumno %d", I+1);
        printf("\nIngrese la matrícula del alumno: ");
        scanf("%d", &A[I].matri);
        fflush(stdin);
        printf("Ingrese el nombre del alumno:");
        gets(A[I].nom);
        for (J=0; J<5; J++)
        {
            printf("\tMateria %d: ", J+1);
            fflush(stdin);
            gets(A[I].cal[J].mat);
            printf("\tPromedio %d: ", J+1);
            scanf("%d", &A[I].cal[J].pro);
        }
    }
}
void F1(alumno A[], int T)
{
    int I, J;
    float SUM;
    for (I=0; I<T; I++)
    {
        printf("\nMatrícula del alumno : %d", A[I].matri);
        SUM = 0.0;
        for (J=0; J<5; J++)
            SUM = SUM + A[I].cal[J].pro;
        SUM = SUM / 5;
        printf("\tPromedio: %.2f", SUM);
    }
}
void F2(alumno A[], int T)
{
    int I;
    printf("\nAlumnos con calificación mayor a 9 en la tercera materia");
    for (I=0; I<T; I++)
    {
        if (A[I].cal[2].pro > 9)
        {
            printf("\nMatrícula del alumno : %d", A[I].matri);
        }
    }
}
void F3(alumno A[], int T)
{
    int I;
    float SUM = 0.0;
    for (I=0; I<T; I++)
    {
        SUM = SUM + A[I].cal[3].pro;
    }
    SUM = SUM / T;
    printf("\n\nPromedio de la cuarta materia: %.2f", SUM);
}*/

/*Programa 8.8
typedef struct
{
    char cal[20];
    int num;
    char col[20];
    char cp[5];
    char ciu[20];
} domicilio;
typedef struct
{
    char nom[20];
    int edad;
    char sexo;
    int con;
    domicilio dom;
    char tel[10];
} paciente;
void Lectura(paciente *, int);
void F1(paciente *, int);
void F2(paciente *, int);
void F3(paciente *, int);
void main(void)
{
    paciente HOSPITAL[100];
    int TAM;
    do
    {
        printf("Ingrese el número de pacientes: ");
        scanf("%d", &TAM);
    }
    while (TAM > 50 || TAM < 1);
    Lectura(HOSPITAL, TAM);
    F1(HOSPITAL, TAM);
    F2(HOSPITAL, TAM);
    F3(HOSPITAL, TAM);
}
void Lectura(paciente A[], int T)
{
    int I;
    for (I=0; I<T; I++)
    {
        printf("\n\t\tPaciente %d", I+1);
        fflush(stdin);
        printf("\nNombre: ");
        gets(A[I].nom);
        printf("Edad: ");
        scanf("%d", &A[I].edad);
        printf("Sexo (F-M): ");
        scanf("%c", &A[I].sexo);
        printf("Condición (1..5): ");
               scanf("%d", &A[I].con);
               fflush(stdin);
               printf("\tCalle: ");
               gets(A[I].dom.cal);
               printf("\tNúmero: ");
               scanf("%d", &A[I].dom.num);
               fflush(stdin);
               printf("\tColonia: ");
               gets(A[I].dom.col);
               fflush(stdin);
               printf("\tCódigo Postal: ");
               gets(A[I].dom.cp);
               fflush(stdin);
               printf("\tCiudad: ");
               gets(A[I].dom.ciu);
               fflush(stdin);
               printf("Teléfono: ");
               gets(A[I].tel);
    }
}
void F1(paciente A[], int T)
{
    int I,FEM, MAS, TOT;
    for (I=0; I<T; I++)
        switch (A[I].sexo)
        {
        case 'F':
            FEM++;
            break;
        case 'M':
            MAS++;
            break;
        }
    TOT = FEM + MAS;
    printf("\nPorcentaje de Hombres: %.2f%", (float)MAS / TOT * 100);
    printf("\nPorcentaje de Mujeres: %.2f%", (float)FEM / TOT * 100);
}
void F2(paciente A[], int T)
{
    int I, C1 = 0, C2 = 0, C3 = 0, C4 = 0, C5 = 0;
    for (I=0; I<T; I++)
        switch (A[I].con)
        {
        case 1:
            C1++;
            break;
        case 2:
            C2++;
            break;
        case 3:
            C3++;
            break;
        case 4:
            C4++;
            break;
        case 5:
            C5++;
            break;
        }
    printf("\nNúmero pacientes en condición 1: %d", C1);
    printf("\nNúmero pacientes en condición 2: %d", C2);
    printf("\nNúmero pacientes en condición 3: %d", C3);
    printf("\nNúmero pacientes en condición 4: %d", C4);
    printf("\nNúmero pacientes en condición 5: %d", C5);
}
void F3(paciente A[], int T)
{
    int I;
    printf("\nPacientes ingresados en estado de gravedad");
    for (I=0; I<T; I++)
    {
        if (A[I].con == 5)
        {
            printf("\nNombre: %s\tTeléfono: %s", A[I].nom, A[I].tel);
        }
    }
}*/

/*Programa 8.9
typedef struct
{
    char zona[20];
    char calle[20];
    char colo[20];
} ubicacion;

typedef struct
{
    char clave[5];
    float scu;
    float ste;
    char car[50];
    ubicacion ubi;
    float precio;
    char dispo;
} propiedades;
void Lectura(propiedades, int);
void F1(propiedades *, int);
void F2(propiedades *, int);
void main(void)
{
    propiedades PROPIE[100];
    int TAM;
    do
    {
        printf("Ingrese el número de propiedades: ");
        scanf("%d", &TAM);
    }
    while (TAM > 100 || TAM < 1);
    Lectura(PROPIE, TAM);
    F1(PROPIE, TAM);
    F2(PROPIE, TAM);
}
void Lectura(propiedades A[], int T)
{
    int I;
    for (I=0; I<T; I++)
    {
        printf("\n\tIngrese datos de la propiedad %d", I + 1);
        printf("\nClave: ");
        fflush(stdin);
        gets(A[I].clave);
        printf("Superficie cubierta: ");
        scanf("%f", &A[I].scu);
        printf("Superficie terreno: ");
        scanf("%f", &A[I].ste);
        printf("Características: ");
        fflush(stdin);
        gets(A[I].car);
        printf("\tZona: ");
        fflush(stdin);
        gets(A[I].ubi.zona);
        printf("\tCalle: ");
        fflush(stdin);
        gets(A[I].ubi.calle);
        printf("\tColonia: ");
        fflush(stdin);
        gets(A[I].ubi.colo);
        printf("Precio: ");
        scanf("%f", &A[I].precio);
        printf("Disponibilidad (Venta-V Renta-R): ");
        scanf("%c", &A[I].dispo);
    }
}
void F1(propiedades A[], int T)
{
    int I;
    printf("\n\t\tListado de Propiedades para Venta en Miraflores");
    for (I=0; I<T; I++)
    {
        if ((A[I].dispo == ‘V’) && (strcmp (A[I].ubi.zona, ”Miraflores”) == 0))
        {
            if ((A[I].precio >= 450000) && (A[I].precio <= 650000))
            {
                printf("\nClave de la propiedad: ");
                puts(A[I].clave);
                printf("\nSuperficie cubierta: %f", A[I].scu);
                printf("\nSuperficie terreno: %f", A[I].ste);
                printf("\nCaracterísticas: ");
                puts(A[I].car);
                printf("Calle: ");
                puts(A[I].ubi.calle);
                printf("Colonia: ");
                puts(A[I].ubi.colo);
                printf("Precio: %.2f\n", A[I].precio);
            }
        }
    }
}
void F2(propiedades A[], int T)
{
    int I;
    float li, ls;
    char zon[20];
    printf("\n\t\tListado de Propiedades para Renta");
    printf("\nIngrese zona geográfica: ");
    fflush(stdin);
    gets(zon);
    printf("Ingrese el límite inferior del precio:");
    scanf("%f", &li);
    printf("Ingrese el límite superior del precio:");
    scanf("%f", &ls);
    for (I=0; I<T; I++)
    {
        if ((A[I].dispo == ‘R’) && (strcmp (A[I].ubi.zona, zon) == 0))
        {
            if ((A[I].precio >= li) && (A[I].precio <= ls))
            {
                printf("\nClave de la propiedad: ");
                puts(A[I].clave);
                printf("\nSuperficie cubierta: %d", A[I].scu);
                printf("\nSuperficie terreno: %d", A[I].ste);
                printf("\nCaracterísticas: ");
                puts(A[I].car);
                printf("Calle: ");
                puts(A[I].ubi.calle);
                printf("Colonia: ");
                puts(A[I].ubi.colo);
                printf("Precio: %.2f", A[I].precio);
            }
        }
    }
}*/

/*Programa 8.10
typedef struct
{
    char noba[10];
    char nucu[10];
} banco;

typedef union
{
    banco che;
    banco nomi;
    char venta;
} fpago;
typedef struct
{
    char cnu[20];
    char col[20];
    char cp[5];
    char ciu[15];
} domicilio;
typedef struct
{
    int num;
    char nom[20];
    float ven[12];
    domicilio domi;
    float sal;
    fpago pago;
    int cla;
} vendedor;
void Lectura(vendedor *, int);
void F1(vendedor *, int);
void F2(vendedor *, int);
void F3(vendedor *, int);
void F4(vendedor *, int);
void main(void)
{
    vendedor VENDEDORES[100];
    int TAM;
    do
    {
        printf("Ingrese el número de vendedores: ");
        scanf("%d", &TAM);
    }
    while (TAM > 100 || TAM < 1);
    Lectura (VENDEDORES, TAM);
    F1 (VENDEDORES, TAM);
    F2 (VENDEDORES, TAM);
    F3 (VENDEDORES, TAM);
    F4 (VENDEDORES, TAM);
    printf("\n\tFIN DEL PROGRAMA");
}
void Lectura(vendedor A[], int T)
{
    int I, J;
    for (I=0; I<T; I++)
    {
        printf("\n\tIngrese datos del vendedor %d", I+1);
        printf("\nNúmero de vendedor: ");
        scanf("%d", &A[I].num);
        printf("Nombre del vendedor: ");
        fflush(stdin);
        gets(A[I].nom);
        printf("Ventas del año: \n");
        for (J=0; J<12; J++)
        {
            printf("\tMes %d: ", J+1);
            scanf("%f", &A[I].ven[J]);
        }
        printf("Domicilio del vendedor: \n");
        printf("\tCalle y número: ");
        fflush(stdin);
        gets(A[I].domi.cnu);
        printf("\tColonia: ");
        fflush(stdin);
        gets(A[I].domi.col);
        printf("\tCódigo Postal: ");
        fflush(stdin);
        gets(A[I].domi.cp);
        printf("\tCiudad: ");
        fflush(stdin);
        gets(A[I].domi.ciu);
        printf("Salario del vendedor: ");
        scanf("%f", &A[I].sal);
        printf("Forma de Pago (Banco-1 Nómina-2 Ventanilla-3): ");
        scanf("%d", &A[I].cla);
        switch (A[I].cla)
        {
        case 1:
        {
            printf("\tNombre del banco: ");
            fflush(stdin);
            gets(A[I].pago.che.noba);
            printf("\tNúmero de cuenta: ");
            fflush(stdin);
            gets(A[I].pago.che.nucu);
        }
        break;
        case 2:
        {
            printf("\tNombre del banco: ");
            fflush(stdin);
            gets(A[I].pago.nomi.noba);
            printf("\tNúmero de cuenta: ");
            fflush(stdin);
            gets(A[I].pago.nomi.nucu);
        }
        break;
        case 3:
            A[I].pago.venta = 'S';
            break;
        }
    }
}
void F1(vendedor A[], int T)
{
    int I, J;
    float SUM;
    printf("\n\t\tVentas Totales de los Vendedores");
    for (I=0; I<T; I++)
    {
        printf("\nVendedor: %d", A[I].num);
        SUM = 0.0;
        for (J=0; J<12; J++)
        {
            SUM += A[I].ven[J];
        }
        printf("\nVentas: %.2f\n", SUM);
    }
}
void F2(vendedor A[], int T)
{
    int I, J;
    float SUM;
    printf ("\n\t\tIncremento a los Vendedores con Ventas > 1,500,000$");
    for (I=0; I<T; I++)
    {
        SUM = 0.0;
        for (J=0; J<12; J++)
        {
            SUM += A[I].ven[J];
        }
        if (SUM > 1500000.00)
        {
            A[I].sal = A[I].sal * 1.05;
            printf("\nNúmero de empleado: %d\nVentas: %.2f\nNuevo salario: %.2f", A[I].num, SUM, A[I].sal);

        }
    }
}
void F3(vendedor A[], int T)
{
    int I, J;
    float SUM;
    printf("\n\t\tVendedores con Ventas < 300,000");
    for (I=0; I<T; I++)
    {
        SUM = 0.0;
        for (J=0; J<12; J++)
        {
            SUM += A[I].ven[J];
        }
        if (SUM < 300000.00)
        {
            printf("\nNúmero de empleado: %d\nNombre: %s\nVentas: %.2f", A[I].num, A[I].nom, SUM);
        }
    }
}
void F4(vendedor A[], int T)
{
    int I;
    float SUM;
    printf("\n\t\tVendedores con Cuenta en el Banco");
    for (I=0; I<T; I++)
    {
        if (A[I].cla == 1)
        {
            printf("\nNúmero de vendedor: %d\n Banco: %s\nCuenta: %s", A[I].num, A[I].pago.che.noba, A[I].pago.che.nucu);
        }
    }
}*/

