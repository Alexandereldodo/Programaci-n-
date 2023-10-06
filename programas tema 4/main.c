#include <stdio.h>

/*4.1
int cubo(void);
int i;
void main(void)
{
    int cub;
    for (i = 1; i <= 10; i++)

    {
        cub = cubo();
        printf("\nel cubo de %d es: %d", i, cub);
    }
    }
    int cubo(void)

{
   return (i*i*i);

}
*/

/*4.2
int cubo(void);
int i;

void main(void)
{
    int cub;
    for (i = 1; i <= 10; i++)
    {
        cub = cubo();
        printf("\nel cubo de %d es: %d", i, cub);

    }
}
int cubo(void)
{
    int i = 2;
    return (i*i*i);
}
*/

/*4.3
void f1(void);
int k = 5;

void main (void)
{
    int i;
    for (i = 1; i <= 3; i++)
        f1();
}
void f1(void)
{
    int k = 2;
    k += k;
    printf("\n\nel valor de la variable local es: %d", k);
    : :K = : :K + K;
    printf("\nel valor de la variable global es: %d", ::k);
}
*/

/*4.4
int f1(void);
int f2(void);
int f3(void);
int f4(void);

int k = 3;

void main(void)
{
    int i;
    for (i = 1; i <= 3; i++)
    {
        printf("\nel resultado de la funcion f1 es: %d", f1());
        printf("\nel resultado de la funcion f2 es: %d", f2());
        printf("\nel resultado de la funcion f3 es: %d", f3());
        printf("\nel resultado de la funcion f4 es: %d", f4());

    }
}
int f1(void)
{
    k += k;
    return (k);
}
int f2(void)
{
    int k = 1;
    k++;
    return (k);
}
int f3(void)
{
    static int k = 8;
    k += 2;
    return (k);
}
int f4(void)
{
    int k = 5;
    k = k + :k;
    return (k);
}
*/

/*4.5
int cubo(int);

void main(void)
{
  int i;
  for (i = 1; i <= 10; i++)
        printf("\nel cubo de i es: %d", cubo(i));

}
int cubo(int k)
{
    return (k*k*k);
}*/

/*4.6
void f1(int *);

void main(void)
{
    int i, k = 4;
    for (i = 1; i <= 3; i++)

    {
        printf("\n\nvalor de k antes de llamar a la funcion: %d", ++k);
        printf("\nvalor de k despues de llamar a la funcion: %d", f1, (&k));

    }
}
void f1(int *r)
{
    *r += *r;
}
*/

/*4.7
int f1 (int);

void main(void)
{
    int i, k = 4;
    for (i = 1; i <= 3; i++)
    {
        printf("\n\nvalor de k antes de llamar a la funcion: %d", ++k);
        printf("\nvalor de k despues de llamar a la funcion: %d", f1 (k));

    }
}
int f1(int r)
{
    r += r;
    return (r);
}
*/

/*4.9
int a, b, c, d;

void funcion1(int *, int *);
int funcion2(int, int *);

void main(void)
{
    int a;
    a = 1;
    b = 2;
    c = 3;
    d = 4;
    printf("\n%d %d %d %d", a, b, c, d);
    funcion1 (&b, &c);
    printf("\n%d %d %d %d", a, b, c, d);
    a = funcion2(c, &d);
    printf("\n%d %d %d %d", a, b, c, d);
}

void funcion1(int *b, int *c)
{
   int d;
   a = 5;
   d = 3;
   (*b)++;
   (*c) += 2;
   printf("\n%d %d %d %d", a, *b, *c, d);
}
int funcion2(int c, int *d)
{
    int b;
    a++;
    b = 7;
    c += 3;
    (*d) += 2;
    printf("\n%d %d %d %d", a, b, c, *d);
    return (c);
}
*/

/*4.9
int suma(int x, int y)
{
    return (x+y);
}

int resta(int x, int y)
{
    return (x - y);
}
int control(int (*apf) (int, int), int x, int y)
{
    int res;
    res = (*apf) (x, y);
    return (res);
}

void main(void)
{
    int r1, r2;
    r1 = control(suma, 15, 5);
    r2 = control(resta, 10, 4);
    printf("\nresultado 1: %d", r1);
    printf("\nresultado 2: %d", r2);
}
*/

/*4.10
int multiplo(int, int);

void main(void)
{
    int nu1, nu2, res;
    printf("\ningresa los dos numeros: ");
    scanf("%d %d", &nu1, &nu2);
    res = multiplo(nu1, nu2);
    if (res)
        printf("\nel segundo numero es multiplo del primero");

    else
        printf("\nel segundo numero no multiplo del primero");

}
int multiplo(int n1, int n2)
{
    int res;
    if ((n2 % n1) == 0)
        res = 1;
    else
        res = 0;
    return (res);
}
*/

/*4.11
int mad(int);
void main(void)
{
    int num, res;
    printf("\ningrese el numero: ");
    scanf("%d", &num);
    res = mad(num);
    printf("\nel mayor divisor de %d es: %d", num, res);
}

int mad(int n1)
{
    int i = (n1 / 2);
    while (n1 % i)
        return i;
}
*/

/*4.12
int mcd(int, int);

void main(void)
{
    int nu1, nu2, res;
    printf("\ningresa los dos numeros enteros: ");
    scanf("%d %d", &nu1, &nu2);
    res = mcd (nu1, nu2);
    printf("\nel maximo comun divisor de %d y %d es: %d", nu1, nu2, res);
}

int mcd(int n1, int n2)
{
    int i;
    if (n1 < n2)
        i = n1 / 2;
    else
        i = n2 / 2;
        while ((n1 % i) || (n2 % i))

            i;
        return i;

}
*/

/*4.13
#include <math.h>

void parimp(int, int *, int *);

void main(void)
{
    int i, n, num, par = 0, imp = 0;
    printf("ingresa el numero de datos: ");
    scanf("%d", &n);
    for (i =1; i <= n; i++)
    {
        printf("ingrese el numero %d:", i);
        scanf("%d", &num);
        parimp(num, &par, &imp);

    }
    printf("\nnumero de pares: %d", par);
    printf("\nnumero de impares: %d", imp);
}
void parimp(int num, int *p, int *i)
{
    int res;
    res = pow(-1, num);
    if (res > 0)
        *p += 1;
    else
        if (res < 0)
        *i += 1;
}
*/
