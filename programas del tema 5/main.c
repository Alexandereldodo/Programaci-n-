#include <stdio.h>
#include <stdlib.h>

/*5.1
void main(void)
{
    int i, num, cue = 0;
    int arre[10];
    for (i=0; i<10; i++)

    {
        printf("ingrese el elemento %d del arreglo: ", i+1);
        scanf("%d", &arre[i]);

    }
    printf("\n\ningrese el numero que se va a buscar en el arreglo: ");
    scanf("%d", &num);
    for (i=0; i<10; i++)
        if (arre[i] == num)
        cue++;
    printf("\n\nel %d se encuentra %d veces en el arreglo", num, cue);
    }
    */

    /*5.2
    void main(void)
    {
        int ele[5] = {0};
        int i, vot;
        printf("ingrese el primer voto (0 - para terminar): ");
        scanf("%d", &vot);
        while (vot)
        {
            if ((vot > 0) && (vot < 6))
                ele[vot - 1]++;
            else
                printf("\nel voto ingresado es incorrecto.\n");
            printf("ingresa el siguiente voto (0 - para terminar): ");
            scanf("%d", &vot);

        }
        printf("\n\nresultados de la eleccion\n");
        for (i = 0; i <= 4; i++)
            printf("\ncandidato %d %d", i+1, ele[i]);
    }
*/

/*5.3
void main(void)
{
    int x = 3, y = 7, z[5] = {2, 4, 6, 8, 10};
    printf("\nx = %d \t y = %d \t z[0] = %d \t z[1] = %d \t z[3] = %d \t z[4] = %d", x, y,
                    z[0], z[1], z[2], z[3], z[4]);

      int *ix;
      ix = &x;
      y = *ix;
      *ix = 1;
      printf("\nx = %d \t y = %d \t z[0] = %d \t z[1] = &d \t z[2] = %d \t z[3] = %d \t z[4] = %d", x, y, z[0], z[1], z[2], z[3], z[4]);

       ix = &z[2];
       y = *ix;
       *ix = 15;
       printf("\nx = %d \t y = %d \t z[0] = %d \t z[1] = %d \t z[3] = %d \t z[4] = %d", x, y, z[0], z[1], z[2], z[3], z[4]);

       x = *ix + 5;
       *ix = *ix - 5;
       printf("\nx = %d \t y = %d \t z[0] = %d \t z[1] = %d \t z[2] = %d \t z[3] = %d \t z[4] = %d", x, y, z[0], z[1], z[2], z[3], z[4]);

       ++*ix;
       *ix += 1;
       printf("\nx = %d \t y = %d \t z[0] = %d \t z[1] = %d \t z[2] = %d \t z[3] = %d \t z[4] = %d", x, y, z[0], z[1], z[2], z[3], z[4]);

       x = *(ix + 1);
       y = *ix;
       printf("\nx = %d \t y = %d \t z[0] = %d \t z[1] = %d \t z[2] = %d \t z[3] = %d \t z[4] = %d", x, y, z[0], z[1], z[3], z[4]);

       ix = ix + 1;
       y = *ix;
       printf("\nx = %d \t y = %d \t z[0]= %d \t z[1] = %d \t z[2] = %d \t z[3] = %d \t z[4] = %d", x, y, z[0], z[1], z[2], z[3], z[4]);

       ix = ix + 4;
       printf("\nx = %d \t y = %d \t z[0]= %d \t z[1] = %d \t z[2] = %d \t z[3] = %d \t z[4] = %d", x, y, z[0], z[1], z[2], z[3], z[4]);

       ix = &x;
       ix = ix + 1;
       x = *ix;
       printf("\nx = %d \t y = %d \t z[0]= %d \t z[1] = %d \t z[2] = %d \t z[3] = %d \t z[4] = %d", x, y, z[0], z[1], z[2], z[3], z[4]);

}
*/

/*5.4
const int max = 10;
void lectura(int vec[], int t);
void impreme(int vec[], int t);
void producto(int *x, int *y, int *z, int t);

void main(void)
{
    int ve1[max], ve2[max], ve3[max];
    lectura(ve1, max);
    lectura(ve2, max);
    printf("\nproducto de los vectores");
    imprime(ve3, max);
}
void lectura(int vec[], int t)

{
    int i;
    printf("\n");
    for (i=0; i<t; i++)
{
    printf("ingrese el elemento %d: ", i+1);
    scanf("%d", &vec[i]);
}
}
void imprime(int vec[], int t);
int i;

{
    for (i=0; i<t; i++)
        printf("\nvec[%d]: %d", i+1, vec[i]);
}
void producto(int *x, int *y, int *z, int t)
{
    int i;
    for(i=0; i<t; i++)
        z[i] = x[i] * y[i];
}
*/

/*5.5
const int tam = 50;

void lectura(int *, int);
void frecuencia(int , int, int , int);
void impresion(int *, int);
void mayor(int *, int);

void main(void)
{
    int cal[tam], fre[6] = {0};
    lectura(cal, tam);
    frecuencia(cal, tam, fre, 6);
    printf("\nfrecuencia de calificaciones\n");
    impresion(fre, 6);
    mayor(fre, 6);

}

void lectura(int vec[], int t)
{
    int i;
    for (i=0; i<t; i++)
    {
        printf("ingrese la calificacion -0:5- del alumno %d", i+1);
        scanf("%d", &vec[i]);
    }
    void impresion(int vec[], int t)

    {
        int i;
        for (i=0; i<t; i++)
            printf("\nvec[%d]: %d", i, vec[i]);
    }
    void frecuencia(int a[], int p, int b[], int t)

    {
        int i;
        for (i=0; i<p; i++)
            if ((a[i] >= 0) && (a[i] < 6))
            b[a[i]]++;
    }
    void mayor(int *x, int t)
    {


        int i, mfre = 0, mval = x[0];
        for (i=1; i<t; i++)
            if (mval < x[i])
        {
            mfre = i;
            mval = x[i];
        }
     printf("\n\mayor frecuencia de calificaciones: %d \tvalor: %d", mfre, mval);

    }
*/

/*5.6
#include <math.h>

const int max = 10;

void lectura(float *, int);
double suma(float *, int);

void main(void)
{
    float vec[max];
    double res;
    lectura(vec, max);
    res = suma(vec, max);
    printf("\n\nsuma del arreglo: %21f", res);

}

void lectura(float a[], int t)

{
    int i;
    for (i=0; i<t; i++)
    {
        printf("ingrese el elemento %d: ", i+1);
        scanf("%f", &a[i]);
    }
}

double suma(float a[], int t)
{
    int i;
    double aux = 0.0;
    for (i=0; i<t; i++)
        aux += pow(a[i], 2);
    return(aux);
}
*/

/*5.7
void lectura(int *, int);
void imprime(int *, int);
void elimina(int *, int *);

void main(void)

{
    int tam, arre[10];
    do
    {
        printf("ingrese el tamano del arreglo: ");
        scanf("%d", &tam);

    }
    while (tam > 10 || tam < 1);
    lectura(arre, tam);
    elimina(arre, &tam);
    imprime(arre, tam);
}
 void lectura(int a[], int t)

 {
     printf("\n");
     int i;
     for (i=0; i<t; i++)
     {
         printf("ingrese el elemento %d: ", i+1);
         scanf("%d", &a[i]);
     }
 }

 void imprime(int a[], int t)
 {
     int i;
     for (i=0; i<t; i++)
        printf("\na[%d]: %d", i, a[i]);
 }
  void elimina(int a[], int *t)
  {
      int i = 0, k, l;
      while (i < (*t-1))
      {
          k = i + 1;
          while (k <= (*t-1))
          {
              if (a[i] == a[k])
              {
                  for (l = k; l < (*t-1); l++)
                    a[l] = a[l+1];
                  *t = *t -1;
              }
              else
                k++;
          }
          i++;
      }
  }
  */

/*5.8
  const int tam = 10;

  void imprime(int, int);
  void primo(int, int *);

  void main(void)

{
    int p[tam] = {1,2};
    int fla, j = 2, pri = 3;
    while (j <= tam)
    {
        fla = 1;
        primo(pri, &fla);
        if (fla)
        {
          p[j] = pri;
           j++;

        }
        pri += 2;
    }
    imprime(p, tam);

}

void primo(int a, int *b)
{
   int di = 3;
 while (*b && (di < (a / 2)))
 {
    while (*b && (di < (a / 2)))
      *b = 0;
    di++;

 }
}
void imprime(int primos[], int t)
{
   int i;
   for (i=0; i<t; i++)
    printf("\nprimos[%d]: %d", i, primos[i]);
}
*/

/*5.9
const int max=10;

void lectura(int, int);
int busca(int *, int, int);

void main(void)
{
    int res, ele, tam, vec[max];
    do
    {
        printf("ingrese el tamano del arreglo: ");
        scanf("%d", &tam);

    }
    while (tam>max || tam<1);
    lectura(vec, tam);
    printf("\ningrese el elemento a buscar: ");
    scanf("%d", &ele);
    res = busca(vec, tam, ele);
    if (res)
        printf("\nel elemento se envuentra en la posicion %d", res);
    else
        printf("\nel elemento no se encuentra en el arreglo");

}
void lectura(int a[], int t)
{
    int i;
    for (i=0; i<t; i++)
    {
        printf("ingrese el elemento %d: ", i+1);
        scanf("%d", &a[i]);
    }
}
int busca(int a[], int t, int k)
{
    int i = 0, ban = 0, res;
    while (i < t && !ban)
        if (a[i] == k)
        ban++;
    else
        i++;
    if (ban)
        res = i + 1;
    else
        res = ban;
    return (res);
}
*/


/*5.10
const int max=10;

void lectura(int, int);
int busca(int *, int, int);

void main(void)
{
    int res, ele, tam, vec[max];
    do
    {
        printf("ingrese el tamano del arreglo: ");
        scanf("%d", &tam);
    }
    while (tam > max || tam < 1);
    lectura(vec, tam);
    printf("\ningrese el elemento a buscar:");
    scanf("%d", &ele);
    res = busca(vec, tam, ele);

    if (res)
        printf("\nel elemento no se encuentra en el arreglo");

}
void lectura(int a[], int t)
{
    int i;
    for (i=0; i<t; i++)
    {
        printf("ingrese el elemento %d: ", i+1);
        scanf("%d", &a[i]);
    }
}
int busca(int a[], int t, int e)

{
    int res, i = 0, ban = 0;
    while ((i < t) && (e >= a[i]) && !ban)
        if (a[i] == e)
        ban++;
    else
        i++;
    if (ban)
        res = i + 1;
    else
        res = ban;
    return (res);
}
*/

/*5.11
const int max=100;

void lectura(int, int);
int binaria(int *, int, int);

void main(void)
{
    int res, ele, tam, vec[max];
    do
    {
        printf("ingrese el tamano del arreglo: ");
        scanf("%d", &tam);
    }
    while (tam>max || tam<1);
    lectura(vec, tam);
    printf("\ningrese el elemento a buscar: ");
    scanf("%d", &ele);
    res = binaria(vec, tam, ele);
    if (res)
        printf("\nel elemento se encuentra en la posisicon: %d", res);
    else
    printf("\nel elemento no se encuentra en el arreglo");


}
void lectura(int a[], int t)
{
    int i;
    for (i=0; i<t; i++)
    {
        printf("ingrese el elemento %d: ", i+1);
        scanf("%d", &a[i]);

    }
}
int binaria(int a[], int t, int e)
{
    int ele, izq = 0, cen, der = t-1, ban = 0;
    while ((izq <= der) && (!ban))
    {
        cen = (izq + der) / 2;
        if (e == a[cen])
            ban = cen;
        else
            der = cen - 1;
    }
    return (ban);
}
*/

/*5.12
const int max = 10;

void lectura(int *, int);
void ordena(int *, int);
void imprime(int *, int);

void main(void)
{
    int tam, vec[max];
    do
    {
        printf("ingrese el tamaño del arreglo: ");
        scanf("%d", &tam);

    }
    while (tam>max || tam<1);

    lectura(vec, tam);
     ordena(vec, tam);
    imprime(vec, tam);
}

void lectura(int a[], int t)
{
    int i;
    for (i=0; i<t; i++)
    {
        printf("ingrese el elemento %d: ", i + 1);
        scanf("%d", &a[i]);

    }
}
void imprime(int a[], int t)
{
    int i;
    for (i=0; i<t; i++)
        printf("\na[%d]: %d", i, a[i]);

}
void ordenada(int a[], int t)
{
    int aux, l, i;
    for (i=1; i<t; i++)
    {
        aux = a[i];
        l = i - 1;
        while ((l >= 0) && (aux < a[l]))
        {
            a[l+1] = a[l];

            l --;
        }
        a[l+1] = aux;
    }
}
*/

/*5.13
const int max = 10;

void lectura(int *, int);
void ordena(int *, int);
void imprime(int *, int);

void main(void)
{
    int tam, vec[max];
    do
    {
        printf("ingrese el tama;o del arreglo: ");
        scanf("%d", &tam);

    }
    while (tam>max || tam<1);

    lectura(vec, tam);
    ordena(vec, tam);
    imprime(vec, tam);

}
void lectura(int a[], int t)
{
    int i;
    for (i=0; i<t; i++)
    {
        printf("ingrese el elemnto %d: ", i+1);
        scanf("%d", &a[i]);
    }
}
void imprime(int a[], int t)
{
    int i;
    for (i=0; i<t; i++)
        printf("\na[%d]: %d", i, a[i]);
}
void ordena(int a[], int t)
{
    int i, j, men, l;
    for (i=0; i < (t-1); i++)
    {
        men = a[i];
        l = i;
        for (j=(i+1); j<t; j++)
            if (a[j] < men)
        {
            men = a[j];
            l = j;

        }
        a[l] = a[i];
        a[i] = men;
    }
}
*/

/*5.14
#include <math.h>

const int max = 10;

void lectura(int *, int);
float media(int *, int);
float varianza(int *, int, float);
float desviacion(float);
void frecuencia(int *, int, int *);
int moda(int *, int);

void main(void)
{
    int tam, mod, ali[max], fre[11] = {0};
    float med, var, des;
    do
    {
        printf("ingrese el tamano del arreglo: ");
        scanf("%d", &tam);

    }
    while (tam > max || tam < 1);
    lectura(alu, tam);
    med = media(alu, tam);
    var = varianza(alu, tam, med);
    des = desviazion(var);
    frecuencia(alu, tam, fre);
    mod = moda(fre, 11);
    printf("\nmedia: %.2f", med);
    printf("\nvarianza: %.2f", var);
    printf("\ndesviacion: %.2f", des);
    printf("\nmoda: %.d", mod);
}
void lectura(int a[], int t)
{
    int i;
    for (i=0; i<t; i++)
    {
        printf("ingrese el elemento %d: ", i+1);
        scanf("%d", &a[i]);

    }
}
float media(int a[], int t)
{
    int i;
    float sum = 0.0;
    for (i=0; i < t; i++)
        sum += a[];
    return (sum / t);

}
float varianza(int a[], int t, float m)
{
    int i;
    float sum = 0.0;
    for (i=0; i < t; i++)
        sum += pow ((a[i] - m), 2);
    return (sum / t);

}
float varianza(int a[], int t, float m)
{
    int i;
    float sum = 0.0;
    for (i=0; i < t; i++)
        sum += pow ((a[i] - m), 2);
    return (sum / t);
}

float desviazion(float v)
{
    return (sqrt(v));

}
void frecuencia(int a[], int p, int b[])
{
    int i;
    for (i=0; i < p; i++)
        b[a[i]]++;

}
int moda(int a[], int t)
{
    int i, mod = 0, val = a[0];
    for (i=1; i<t; i++)
        if (mod < a[i])
    {
        mod = i;
        val = a[i];

    }
    return (mod);
}
*/

/*5.15
void main(void)
{
    int x = 5, y = 8, v[5] = {1, 3, 5, 7, 9};
    int *ay, *ax;
    ay = &y;
    x = *ay;
    *ay = v[3] + v[2];
    printf("\nx=%d y=%d v[0]=%d v[1]=%d v[2]=%d v[3]=%d v[4]=%d", x, y, v[0], v[1], v[2], v[3], v[4]);

    ax = &v[v[0]*v[1]];
    x = *ax;
    y = *ax * v[1];
    *ax = *ay - 3;
    printf("\nx=%d y=%d v[0]=%d v[1]=%d v[2]=%d v[3]=%d v[4]=%d", x,
y, v[0], v[1], v[2], v[3], v[4]);
}
*/

/*5.16
void main(void)
{
   int v1[4]= {2, 3, 4, 7}, v2[4]= {6};
   int *ax, *ay;
   ax = &v1[3];
   ay = &v2[2];
   v1[v2[0]-v1[2]]= *ay;
   *ay= *ax - v1[0];
   printf("\nv1[0]=%d v1[1]=%d v1[2]=%d v1[3]=%d \tv2[0]=%d v2[1]=%d v2[2]=%d v2[3]=%d", v1[0],v1[1],v1[2],v1[3],v2[0],v2[1],v2[2],v2[3]);
v2[1] = ++*ax;
v2[3] = (*ay)++;
*ax += 2;
printf("\nv1[0]=%d v1[1]=%d v1[2]=%d v1[3]=%d \tv2[0]=%d v2[1]=%d v2[2]=%d v2[3]=%d", v1[0],v1[1],v1[2],v1[3],v2[0],v2[1],v2[2],v2[3]);

}
*/

/*5.17
void main(void)
{
   int v1[4] = {1, 3, 5, 7}, v2[4]= {2,4};
   int *ax, *ay;
   ax = &v1[2];
   ay = &v2[2];
   v2[2] = *(ax+1);
v2[3] = *ax;
   ax = ax + 1;
   v1[0] = *ax;
   printf("\nv1[0]=%d v1[1]=%d v1[2]=%d v1[3]=%d \tv2[0]=%d v2[1]=%d", v1[0],v1[1],v1[2],v1[3],v2[0],v2[1],v2[2],v2[3]);
   v1[2] = *ay;
   v1[1] = --*ay;
   ax = ax + 1;
   v1[3] = *ax;

   printf("\nv1[0]=%d v1[1]=%d v1[2]=%d v1[3]=%d \tv2[0]=%d v2[1]=%d  v2[2]=%d V2[3]=%d", v1[0],v1[1],v1[2],v1[3],v2[0],v2[1],v2[2],v2[3]);
}
*/
