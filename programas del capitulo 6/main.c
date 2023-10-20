#include <stdio.h>
#include <stdlib.h>

/*6.1
const int tam = 10;

void lectura(int [][tam], int);
void imprime(int [][tam], int);

void main(void)
{
    int mat[tam][tam];
    lectura(mat, tam);
    imprime(mat, tam);

}
void lectura(int a[][tam], int f)
{
    int i, j;
    for (i=0; i<f; i++)
        for (j=0; j<f; j++)
    {
        printf("ingrese el elemento %d %d: ", i+1, j+1);
        scanf("%d", &a[i][j]);
    }
}
void imprime(int a[][tam], int f)
{
    int i, j;
    for (i=0; i<f; i++)
        for (j=0; j<tam; j++)
        if (i == j)
        printf("\ndiagonal %d %d: %d ", i, j, a[i][j]);

}
*/

/*6.2
const int max = 10;

void lectura(int [][max], int, int);
void suma(int [][max], int [][max], int [][max], int, int);
void imprime(int [][max], int, int);

void main(void)
{
    int ma[max][max], mb[max][max], mc[max][max];
    int fil, col;
    do
    {
        printf("ingrese el numero de filas de los arreglos: ");
        scanf("%d", &fil);

    }
    while (fil> max || fil< 1);
    do
    {
        printf("ingrese el numero de columnas de los arreglos: ");
        scanf("%d", &col);
    }
    while (col > max || col < 1);
    printf("\nlectura del arreglo ma\n");
    lectura(ma, fil, col);
    printf("\nlectura del arreglo mb\n");
    lectura(mb, fil, col);
    suma(ma, mb, mc, fil, col);
    printf("\nimprision del arreglo mc\n");
    imprime (mc, fil, col);
}

void lectura(int a[][max], int f, int c)
{
    int i, j;
    for (i=0; i<f; i++)
        for (j=0; j<c; j++)
    {
        printf("ingrese el elemento %d %d: ", i+1, j+1);
        scanf("%d", &a[i][j]);
    }
}
void suma(int m1[][max], int m2[][max], int m3[][max], int f, int c)
{
    int i, j;
    for (i=0; i<f; i++)
        for (j=0; j<c; j++)
        m3[i][j]= m1[i][j] + m2[i][j];

}
void imprime(int a[][max], int f, int c)
{
    int i, j;
    for (i=0; i<f; i++)
    for (j-0; j<c; j++)
    printf("\nelemento %d %d: %d ", i, j, a[i][j]);

}
*/

/*6.3
const int f = 8, c = 2, p = 5;

void lectura(int [][c][p], int, int, int);
void funcion1(int [][c][p], int, int, int);
void funcion2(int [][c][p], int, int, int);
void funcion3(int [][c][p], int, int, int);

void main(void)
{
    int uni[f][c][p];
    lectura(uni, f, c, p);
    funcion1(uni, f, c, p);
    funcion2(uni, f, c, p);
      funcion3(uni, 6, c, p);

}
void lectura(int a[][c][p], int fi, int co, int pr)
{
    int k, i, j;
    for (k=0; k<pr; k++)
        for (i=0; i<fi; i++)
        for (j=0; j<co; j++)
    {
        printf("ano: %d\tcarrera: %d \tsemestre: %d ", k+1, i+1, j+1);
        scanf ("%d", &a[i][j][k]);
    }
}
void funcion1(int a[][c][p], int fi, int co, int pr)
{
    int k, i, j, may = 0, ao = -1, sum;
    for (k=0; k<pr; k++)
    {
        sum = 0;
        for (i=0; i<fi; i++)
            for (j=0; j<co; j++)
            sum += a[i][j][k];
        if (sum > may)
        {
            may = sum;
            ao = k;
        }
        printf("\n\nano con mayor ingreso de alumnos: %d alumnos: %d", ao+1, may);

    }

    void funcion2(int a[][c][p], int fi, int co, int pr)
    {
        int i, j, may = 0, car = -1, sum;
        for (i=0; i<fi; i++)
        {
            sum = 0;
            for (j=0; j<co; j++)
                sum += a[i][j][pr-1];
            if (sum > may)
            {
                may = sum;
                car = i;
            }
        }
        printf("n\ncarrera con mayor numero de alumnos: %d alumnos: %d", car+1, may);
    }
    void funcion3(int a[][c][p], int fi, int co, int pr)
    {
        int k, j, may = 0, ao = -1, sum;
        for (k=0; k<pr; k++)
        {
            sum = 0;
            for (j=0; j<co; j++)
                sum += a[fi-1][j][k];
            if (sum > may)
            {
                may = sum;
                ao = k;
            }
        }
        printf("\n\nano con mayor ingreso de alumnos: %d alumnos: %d", ao+1, may);

    }
}
*/

/*6.4
const int max = 10;

void lectura(int [][max], int);
int simetrico(int [][max], int);

void main(void)
{
    int mat[max][max], n, res;
    do
    {
        printf("ingrese el tamano del arreglo: ");
        scanf("%d", &n);
    }
    while (n > max || n < 1);

    lectura(mat, n);
    res = simetrico(mat, n);
    if (res)
        printf("\nel arreglo bidimensional es simetrico");
    else
        printf("\nel arreglo bidimensional no es simetrico");

}

void lectura(int a[][max], int t)
{
    int i, j;
    for (i=0; i<t; i++)
        for (j=0; j<t; j++)
    {
        printf("fila: %d\tcolumna: %d", i+1, j+1);
        scanf("%d", &a[i][j]);
    }
}
int simetrico (int a[][max], int t)
{
    int i = 0, j, f = 1;
    while ((i < t) && f)
    {
        j = 0;
        while ((j < i)&& f)
            if (a[i][j] == a[j][i])
            j++;
        else
            f = 0;
        i++;
    }
    return (f);
}
*/

/*6.6
const int max = 20;

void lectura(float [][max], int, int);
void intercambia(float [][max], int, int);
void imprime(float [][max], int, int);

void main(void)
{
    int f, c;
    float mat[max][max];
    do
    {
        printf("ingrese el numero de filas: ");
        scanf("%d", & f);
    }
    while (f > max || f < 1);
    do
    {
        printf("ingrese el numero de columnas: ");
        scanf("%d", &c);
    }
    while (c > max || c < 1);
    lectura(mat, f, c);
    intercambia(mat, f, c);
    imprime(mat, f, c);
}
void lectura(float a[][max], int f, int c)
{
    int i, j;
    for (i=0; i< f; i++)
        for (j=0; j<c; j++)
    {
        printf("ingrese el elemento %d %d: ", i+1, j+1);
    }
}
void intercambia(float a[][max], int f, int c)
{
    int i, j;
    float aux;
    for (i=0; i < (c / 2); i++)
        for (j=0; j< f; j++)
    {
        aux = a[j][i];
        a[j][i] = a[j][c-i-1];
        a[j][c-i-1]=aux;
    }
}
void imprime(float a[][max], int f, int c)
{
    int i, j;
    for (i=0; i< f; i++)
        for (j=0; j<c; j++)
        printf("\nelemento %d %d: %5.2f", i+1, j+1, a[i][j]);
}
*/

/*6.7
void lectura1(int [15][12]);
void lectura2(float, int);
void funcion1(int [][12], int, int, float *, float *);
void funcion2(float *, int);
void funcion3(float *, int);

void main(void)
{
    int fab[15][12] = {0};
    float cos[15], ven[15];
    lectura1(fab);
    lectura2(cos, 15);
    funcion1(fab, 15, 12, cos, ven);
    funcion2(ven, 15);
    funcion3(ven, 15);

}
void lectura1(int a[][12])
{
    int mes, pro, can;
    printf("\ningrese mes, tipo de prodecto y cantidad vendida: ");
    scanf("%d %d %d", &mes &pro, &can);
    while (mes!= -1 &&pro!= -1 && can!=-1)
    {
        a[mes-1][pro-1] += can;
        printf("ingrese mes, tipo de producto y cantidad vendida: ");
        scanf("%d %d %d", &mes, &pro, &can);
    }
}
void funcion1(int a[][12], int f, int c, float v1[], float v2[])
{
    int i, j, sum;
    printf("\n");
    for (i=0; i< f; i++)
    {
        sum =0;
        for (j=0; j<c; j++)
            sum += a[i][j];
        v2[i] = v1[i] * sum;
        printf("\ntotal de ventas del producto %d: %8.2f", i+1, v2[i]);

    }
}
void funcion2(float a[], int c)
{
    int i;
    float sum = 0.0;
    for (i=0; i<c; i++)
        sum += a[i];
    printf("\n\ntotal de ventas de la fabrica: %.2f", sum);
}
void funcion3(float a[], int c)
{
    int i, tpr = 0;
    float ven = a[0];
    for (i=1; i<c; i++)
        if (ven < a[i])
    {
        tpr = i;
        ven = a[i];
    }
    printf("\n\ntipo de producto mas vendido: %d \t ventas: %.2f", tpr + 1, ven);
}
*/

/*6.8
const int max = 50;

void lectura(int [][max], int, int);
void traspuesta(int [][max], int [][max], int, int);
void imprime(int [][max], int, int);

void main(void)
{
    int mat[max][max], tra[max][max];
    int fil, col;
    do
    {
        printf("ingrese el numero de filas de la matriz: ");
        scanf("%d", &fil);
    }
    while (fil > max || fil < 1);
    do
    {
        printf("ingrese el numero de columnas de la matriz: ");
        scanf("%d", &col);

    }
    while (col > max || col < 1);
    lectura(mat, fil, col);
    traspuesta(mat, tra, fil, col);
    imprime(tra, col, fil);
}

void lectura(int a[][max], int f, int c)
{
    int i, j;
    for (i=0; i<f; i++)
        for (j=0; j<c; j++)
    {
        printf("ingrese el elemento %d %d: ", i+1, j+1);
        scanf("%d", &a[i][j]);
    }
}
void traspuesta(int m1[][max], int m2[][max],int f, int c)
{
    int i, j;
    for (i=0; i<f; i++)
        for (j=0; j<c; j++)
        m2[j][i] = m1[i][j];

}
void imprime(int a[][max], int f, int c)
{
    int i, j;
    for (i=0; i<f; i++)
        for (j=0; j<c; j++)
        printf("\nelemento %d %d: %d", i+1, j+1, a[i][j]);
}
*/

/*6.9
 void lectura(int [][10], int);
 void calcula(int [][10],float [], int);
 float mod0(int [][10], int, int);
 float mod1(int [][10], int);
 float mod2(int [][10], int, int);
 void imprime(float [10], int);

 void main(void)
 {
     int mat[10][10], tam;
     float vec[10];
     do
     {
         printf("ingrese el tamano de la matriz: ");
         scanf("%d", &tam);
     }
     while (tam >10 || tam < 1);
     lectura(mat, tam);
     calcula(mat, vec, tam);
     imprime(vec, tam);
 }
 void lectura(int a[][10], int n)
 {
     int i, j;
     for (i=0; i<n; i++)
        for (j=0; j<n; j++)
     {
         printf("ingrese el elemento %d %d: ", i+1, j+1);
         scanf("%d", &a[i][j]);
     }
 }
 void calcula(int a[][10], float b[], int n)
 {
     int i;
     for (i=0; i<n; i++)
        switch (i%3)
     {
         case 1: b[i] = mod1 (a,i);
         break;
         case 2: b[i] = mod2 (a,i,n);
         break;
         default: b[i] = mod0 (a,i,n);
         break;
     }
 }
 float mod0 (int a[][10], int k, int m)
 {
     int i;
     float pro = 1.0, sum = 0.0;
     for (i=0; i<m; i++)
     {
         pro *= a[i][k];
         sum += a[i][k];
     }
     return (pro / sum);
 }
 float mod1(int a[][10], int n)
 {
     int i;
     float sum = 0.0;
     for (i=0; i<=n; i++)
        sum += a[n][i];
     return (sum);
 }
 float mod2 (int a[][10], int n, int m)
 {
     int i;
     float pro = 1.0;
     for (i=n; i<m; i++)
        pro *= a[i][n];
     return (pro);
 }

 void imprime(float b[], int n)
 {
     int i;
     for (i=0; i<n; i++)
        printf("\nelemento %d: %.2f ", i, b[i]);
 }
 */

 /*6.10
 const int max = 50;

 void cuadrado(int [][max], int);
 void imprime(int [][max], int);

 void main(void)
 {
     int cma[max][max], tam;
     do
     {
         printf("ingrese el tamano impar de la matriz: ");
         scanf("%d", &tam);
     }
     while ((tam > max || tam < 1) && (tam % 2));
     cuadrado(cma, tam);
     imprime(cma, tam);
 }

 void cuadrado(int a[][max], int n)
 {
     int i = 1, fil = 0, col = n / 2, num = n * n;
     while (i <= num)
     {
         a[fil][col] = i;
         if (i%n != 0)
         {
             fil = (fil -1 + n) % n;
             col = (col + 1) % n;
         }
         else
            fil++;
         i++;
     }

 }

 void imprime(int a[][max], int n)
 {
     int i, j;
     for (i=0; i<n; i++)
        for (j=0; j<n; j++)
        printf("\nelemento %d %d: %d", i+1, j+1, a[i][j]);
 }
*/

/*6.11
void lecturam(float [][12], int, int);
void lecturav(float *, int);
void f1(float [][12], int, int, float *, float *);
void f2(float [][12], int, int);
void f3(float *, int);

void main(void)
{
    float fon[5][12], pre[5], ren[5];
    lecturam(fon, 5, 12);
    lecturav(pre, 5);
    f1(fon, 5, 12, pre, ren);
    f2(fon, 5, 12);
    f3(ren, 5);
}
void lecturam(float a[][12], int f, int c)
{
    int i, j;
    for (i=0; i<f; i++)
        for (j=0; j<c; j++)
    {
        printf("precio fondo %d\t mes %d: ", i+1, j+1);
        scanf("%f", &a[i][j]);
    }
}
void lecturav(float a[], int t)
{
    int i;
    printf("\n");
    for (i=0; i<t; i++)
    {
        printf("precio fondo %d al 31/12/2003: ", i+1);
        scanf("%f", &a[i]);
    }
}
void f1(float a[][12], int f, int c, float b[], float v[])
{
    int i;
    printf("\nrendimientos anuales de los fondos");
    for(i=0; i<f; i++)
    {
        v[i] = (a[i][c-1] - b[i]) / b[i] * 100;
        printf("\nfondo %d: %.2f", i+1, v[i]);
    }
}
void f2(float a[][12], int f, int c)
{
    int i, j;
    float sum, pro;
    printf("\n\npromedio anualizado de las acciones de los fondos");
    for(i=0; i<j; i++)
    {
        sum = 0;
        for(j=0; j<c; j++)
            sum += a[i][j];
        pro = sum / c;
        printf("\nfondo %d: %.2f", i+1, pro);
    }
}
void f3(float a[], int f)
{
    float me = a[0], pe = a[0];
    int m = 0, p = 0, i;
    for (i=1; i<f; i++)
    {
        if (a[i] > me)
        {
            me = a[i];
            m = i;
        }
    }  if (a[i] < pe)

    {
       pe = a[i];
       p = i;
    }
}
printf("\n\nmejor y peor fondo de inversion");
printf("\nmejor fondo: %d\trendimiento: %6.2f", m+1, me);
printf("\npeor fondo: %d\trendimiento: %6.2f", p+1, pe);
}
*/

/*6.12
const int pro = 24;
const int mes = 12;
const int ano = 10;

void lectur(float [pro][mes][ano], int, int, int);
void funcion1(float [pro][mes][ano], int, int, int);
void funcion2(float [pro][mes][ano], int, int, int);
void funcion3(float [pro][mes][ano], int, int, int);

void main(void)
{
    float llu[pro][mes][ano];
    lectur(llu, pro, mes, ano);
    funcion1(llu, pro, mes, ano);
    funcion2(llu, pro, mes, ano);
    funcion3(llu, 18, mes, 5);
}
void lectur (float a[][mes][ano], int f, int c, int p)
{
    int k, i, j;
    for (k=0; k<p; k++)
        for (i=0; i<f; i++)
        for (j=0; j<c; j++)
    {
        printf("ano: %d\tprovincia: %d\tmes: %d", k+1, i+1, j+1);
        scanf("%f", &a[i][j][k]);
    }
}

void funcion1(float a[][mes][ano], int f, int c, int p)
{
    int i, k, j, emay = -1;
    float ellu = -1.0, sum;
    for (i=0; i<f; i++)
    {
        sum = 0.0;
        for (k=0; k<p; k++)
            for (j=0; j<c; j++)
            sum += a[i][j][k];
        sum /= p * c;
        if (sum > ellu)
        {
            ellu = sum;
            emay = i;
        }
    }
    printf("\n\nprovincia con mayor registro de lluvias: %d", emay+1);
    printf("\nregistro: %.2f", ellu);
}
void funcion2(float a[][mes][ano], int f, int c, int p)
{
    int i, j, emen;
    float ellu = 1000, sum;
    for (i=0; i<f; i++)
    {
        sum = 0;
        for (j=0; j<c; j++)
            sum += a[i][j][p-1];
        sum /= c;
        if (sum < ellu)
        {
            ellu = sum;
            emen = i;
        }
    }
    printf("\n\nprovincia con menor registro anual de lluvias en el ultimo ano: %d", emen+1);
    printf("\nregistro anual: %.2f", ellu);
}
void funcion3(float a[][mes][ano], int f, int c, int p)
{
    int j, emes = -1;
    float ellu = -1.0;
    for (j=0; j<c; j++)
    {
        if (a[f-1][j][p-1])
        {
            ellu = a[f-1][j][p-1];
            emes = j;
        }
    }
    printf("\n\nmes: %d lluvias: %.2f", emes+1, ellu);
}
*/
