/*
#include <stdio.h>

void main(void)
{
    float pro;
    printf("ingrese el promedio del alumno: ");
    scanf("%f", &pro);
    if (pro >= 6)
        printf("\naprobado");
}
*/

/*
#include <stdio.h>

void main(void)
{
    float pre, npr;
    printf("ingrese el precio del producto: ");
    scanf("%f", &pre);
    if (pre > 1500)
    {
        npr = pre * 1.11;
        printf("\nNuevo precio: %7.2f",npr);
    }

}
*/

/*
#include <stdio.h>

void main(void)
{
    float pro;
    printf("ingrese el promedio del alumno: ");
    scanf("%f", &pro);
    if (pro >= 6.0)
        printf("\naprobado");
    else
        printf("\reprobado");
}
*/

/*
#include <stdio.h>

void main(void)
{
    float pre, npr;
    printf("ingrese el precio del producto: ");
    scanf("%f", &pre);
    if (pre < 1500)
        npr = pre * 1.11;
    else
        npr = pre * 1.08;
    printf("\nNuevo precio del producto: %8.2f", npr);

}
*/

/*
#include <stdio.h>
#include <math.h>

void main(void)
{
    int op, t;
    float res;
    printf("ingrese la opcion del calculo y el valor entero: ");
    scanf("%d %d", &op, &t);
    switch(op)
    {
        case 1: res = t / 5;
        break;
        case 3:
            case 4: res = 6 *t/2;
            break;
            default: res = 1;
            break;

    }
    printf("\n resultado: %7.2f", res);
}
*/

/*
#include <stdio.h>

void main(void)
{
    float sal;
    int niv;
    printf("ingrese el nivel academico del profesor: ");
    scanf("%d", &niv);
    printf("ingrese el salario: ");
    scanf("%f", &sal);
    switch(niv)
    printf("ingrese el salario: ");
    scanf("%f", &sal);
    switch(niv)
    {
        case 1: sal = sal * 1.0035; break;
        case 2: sal = sal * 1.0041; break;
        case 3: sal = sal * 1.0048; break;
        case 4: sal = sal * 1.0053; break;

    }
    printf("\n\nNivel: %d \tNuevo salario: %8.2f",niv, sal);
}
*/

/*
#include <stdio.h>

void main(void)
{
    float p, s, r;
    printf("\ningrese las ventas de los tres vendedores : ");
    scanf("%f %f %f", &p, &s, &r);
    if (p > s)
        if (p > r)
        if (s > r)
        printf("\n\n el orden es p, s y r: %8.2f %8.2f %8.2", p, s, r);
    else
        printf("\n\n el orden es p, r y s: %8.2f %8.2f %8.2f", p, r, s);
    else
        printf("\n\n el orden es r, p y s: %8.2f %8.2f %8.2f", r, p, s);
    else
        if (s > r)
        if (p > r)
                printf("\n\n el orden es s, p y r: %8.2f %8.2f 8.2f", s, p, r);
            else
                printf("\n\n el orden es s, r y p: %8.2f %8.2f %8.2f", s, r, p);
            else
                printf("\n\n el orden es r, s y p: %8.2f %8.2f %8.2f", r, s, p);

}
*/

/*
#include <stdio.h>

void main(void)
{
    int mat, car, sem;
    float pro;
    printf("ingrese matricula: ");
    scanf("%d", &mat);
    printf("ingrse carrera (1 - industrial 2 - telematica 3 - computacion 4 - mecanica) :");
    scanf("%d", &car);
    printf("ingrese semestre: ");
    scanf("%d", &sem);
    printf("ingrese promedio: ");
    scanf("%f", &pro);
    switch(car)
    {
        case 1: if (sem >= 6 && pro >= 8.5)
                    printf("\n%d %d %5.2f", mat, car, pro);
                 break;
             case 2: if (sem >= 5 && pro >= 9.0)
                    printf ("\n%d %d %5.2f", mat, car, pro);
                    break;
             case 3: if (sem >= 6 && pro >= 8.8)
                     printf("\n&d %d %5.2f", mat, car, pro);
                     break;
             case 4: if (sem >= 7 && pro >= 9.0)
                     printf ("\n%d %d %5.2f", mat, car, pro);
                     break;
             default: printf("\n%d %d %5.2f", mat, car, pro);
             break;

    }
}
*/

/*
#include <stdio.h>
#include <math.h>

void main(void)
{
    float res;
    int r, t, q;
    printf("ingrese los valores de r, t y q: ");
    scanf("%d %d %d", &r, &t, &q);
    res = pow(r, 4) - pow(t, 3) + 4 * pow(q, 2);
    if (res < 820)
           printf("\nr = %d\tT = %d\t q = %d", r, t, q);

}
*/

/*
#include <stdio.h>
#include <math.h>

void main(void)
{
    int num;
    printf ("ingrese el numero: ");
    scanf("%d", &num);
    if (num == 0)
        printf("\nnulo");
    else
        if (pow (-1, num) > 0)
        printf("\npar");
    else
        printf("\nimpar");
}
*/

/*
#include <stdio.h>

void main(void)
{
    int dis, tie;
    float bil;
    printf("ingrese la distancia entre ciudades y el tiempo de distancia: ");
    scanf("%d %d", &dis, &tie);
    if ((dis*2 > 500) && (tie > 10))
        bil = dis *2 * 0.19 * 0.8;
    else
        bil = dis * 2 * 0.19;
    printf("\n\ncosto del billete: %7.2f", bil);

}
*/

/*
#include <stdio.h>
#include <math.h>

void main(void)
{
    int t, p, n;
    printf (" ingrese los valores de t, p, y n: ");
    scanf("%d %d %d", &t, &p, &n);
    if (p != 0)
    {

    if (pow(t / p, n) == (pow(t, n) / pow(p, n)))
            printf("\nSe comprueba la igualda");
            else
                printf("\nno se comprueba la igualdad");

    }
    else
            printf("\np tiene que ser diferente de cero");

}
*/

/*
#include <stdio.h>
#include <math.h>

void main(void)
{
    float x;
    int y;
    printf("ingrese el valor de y: ");
    scanf("%d", &y);
    if(y < 0 || y > 50)
        x = 0;
    else
        if (y <= 10)
            x = 4 / y - y;
    else
        if (y <= 25)
           x = pow(y, 3) - 12;
    else
        x = pow(y, 2) + pow(y, 3) - 18;
    printf("\n\ny = %d\tx = %8.2f", y, x);
}
*/

/*
#include <stdio.h>

void main(void)
{
    int cla, tie;
    float cos;
    printf("ingresa la clave y el tiempo: ");
    scanf("%d %d", &cla, &tie);
    switch(cla)
    {
        case 1: cos = tie * 0.13 / 60; break;
        case 2: cos = tie * 0.11 / 60; break;
        case 5: cos = tie *0.22 / 60; break;
        case 6: cos = tie * 0.19 / 60; break;
        case 7:
        case 9: cos = tie * 0.17 / 60; break;
        case 10: cos = tie * 0.20/ 60; break;
        case 15: cos = tie * 0.39 / 60; break;
        case 20: cos = tie * 0.28 / 60; break;
        default : cos = -1; break;
    }
    if (cos != -1)
        printf("\n\nclave: %d\ ttiempo: %d\tcosto: %6.2f", cla, tie, cos);
    else
        printf("\nerror en la clave");


}
*/

/*
#include <stdio.h>

void main(void)
{
    int tra, eda, dia;
    float cos;
    printf("ingrese tipo de tratamiento, edad y dias: ");
    scanf("%d %d %d", &tra, &eda, &dia);
    switch(tra)
    {
        case 1: cos = dia * 2800; break;
        case 2: cos = dia * 1950; break;
        case 3: cos = dia * 2500; break;
        case 4: cos = dia * 1150; break;
        default: cos = -1; break;
    }
    if (cos != -1)
    {
        if (eda >= 60)
            cos = cos * 0.75;
        else
            if (eda <= 25)
            cos = cos * 0.85;
        printf("\nclave tratamiento: %d\t dias: %d\t costo toal: %8.2f", tra, dia, cos);

    }
    else
        printf ("\nla clave del tratamiento es incorrecta");

}
*/

/*
#include <stdio.h>
void main(void)
{
    int cla, cat, ant, res;
    printf("\ningrese la clave, categoria y antiguedad del trabajador:");
    scanf("%d %d %d", &cla, &cat, &ant);
    switch(cat)
    {
    case 3:
        case 4: if (ant >= 5)
        res = 1;
        else
            res = 0;
        break;
        case 2: if (ant >= 7)
        res = 1;
        else
            res = 0;
        break;
        default: res = 0;
        break;

        }
        if (res)
            printf("\nel trabajador con clave %d reune las condiciones para el puesto", cla);
        else
            printf("\nel trabajador con clave %d no reune las condiciones para el puesto", cla);
}
*/

/*
#include <stdio.h>

void main(void)
{
    int i;
    float sal, nom;
    nom = 0;
    for (i=1; i<=15; i++)
    {
        printf("\ingrese el salario del profesor%d:\t", i);
        scanf("%f", &sal);
        nom = nom + sal;

    }
    printf("\nel total de la nomina es: %.2f", nom);
}
*/

/*

#include <stdio.h>

void main(void)
{
    int i, n, num, sum;
    sum = 0;
    printf("ingrese el numero de datos:\t");
    scanf("%d", &n);
    for (i=1; i<=n; i++)
    {
        printf("ingrese el dato numero %d:\t", i);
        scanf("%d", &num);
        if (num > 0)
            sum = sum + num;

    }
    printf("\nla suma de los numeros positivos es: %d", sum);
}
*/

/*
#include <stdio.h>

void main(void)
{
    float pag, spa;
    spa = 0;
    printf("ingrese el primer pago:\t");
    scanf("%f", &pag);
    while (pag)
    {
        spa = spa + pag;
        printf("ingrese el siguiente pago:\t ");
        scanf("%f", &pag);

    }
    printf("\nel total de pagos del mes es: %.2f", spa);
}
*/

/*
#include <stdio.h>
#include <math.h>

void main(void)
{
    int num;
    long cua, suc = 0;
    printf("\ningrese un numero entero -0 para terminar-:\t");
    scanf("%d", &num);
    while (num)
    {
        cua = pow (num, 2);
        printf("%d al cubo es %id", num, cua);
        suc = suc + cua;
        printf("\ningrese un numero entero -0 para terminar -:\t");
        scanf("%d", &num);

    }
    printf("\nla suma de los cuadrados es %id", suc);
}
*/

/*
#include <stdio.h>

void main(void)
{
    float pag, spa = 0;
    printf("ingrese el primer pago:\t");
    scanf("%f", &pag);
    do
    {
        spa = spa + pag;
        printf("ingrese el siguiente pago -0 para terminar-:\t ");
        scanf("%f", &pag);

    }
    while (pag);
    printf("\nel total de pagos del mes es: %.2f", spa);
}
*/

/*
#include <stdio.h>

void main(void)
{
    int i = 0;
    float sal, pro, nom = 0;
    printf("ingrese el salario del profesor:\t");
    scanf("%f", &sal);
    do
    {
        nom = nom + sal;
        i = i +1;
        printf("ingrese el salario del profesor -0 para terminar- :\t");
        scanf("%f", &sal);
    }
    while (sal);
    pro = nom / i;
    printf("\nnomina: %.2f \t promedio del salarios: %.2f", nom, pro);
}
*/

/*
#include <stdio.h>

void main(void)
{
    int i, n;
    float lan, sla = 0;
    do
    {
        printf("ingrese el numero del lazamiento:\t");
        scanf("%d", &n);
    }
    while (n < 1 || n > 11);
    for (i=1; i<=n; i++)
    {
        printf("\ningrese el lanzamiento %d: ", i);
        scanf("%f", &lan);
        sla = sla + lan;
    }
    sla = sla / n;
    printf("\nel promedio de lanzamiento es: %.2f", sla);
}
*/

/*
#include <stdio.h>

void main(void)
{
    int i, num;
    long fac;
    printf("\ningrese el numero: ");
    scanf("%d", &num);
    if (num >= 0)
    {
        fac = 1;
        for (i=1; i <= num; i++)
            fac *= 1;
        printf("\el factorial de %d es: %d", num, fac);
    }
    else printf("\nerror en el dato ingresado");
}
*/

/*
#include <stdio.h>

void main(void)
{
    int i = 2, cam = 1;
    long sse = 0;
    while (i <= 2500)
    {
        sse = sse + i;
        printf("\t %d", i);
        if (cam)
        {
            i += 5;
            cam--;
        }
        else
        {
            i += 3;
            cam++;
        }
    }
    printf("\nla sume de la serie es: %id", sse);
}
*/

/*
#include <stdio.h>
#include <math.h>

void main(void)
{
    int i, n, num, spa = 0, sim = 0, cim = 0;
    printf("ingrese el numero de datos que se van a procesor:\t");
    scanf("%d", &n);
    if (n > 0)
    {
        for (i=1; i <= n; i++)
        {
            printf("\ningrese el numero %d: ", i);
            scanf("%d", &num);
            if (num)
                if (pow( - 1, num) > 0)
                spa = spa + num;
            else
            {
                sim = sim + num;
                cim++;
            }
        } printf("\n la sume de los numeros pares es: %d", spa);
        printf("\n el promedio de numeros impares es: %5.2f", (float)(sim / cim));
        }
        else
            printf("\n el valor de n es incorrecto");
}
*/

/*
#include <stdio.h>

void main(void)
{
    int r1 = 0, r2 = 0, r3 = 0, r4 = 0, r5 = 0;
    float cal;
    printf("ingresa la calificacion del alumno: ");
    scanf("%f", &cal);
    while (cal != -1)
    {
        if (cal <4)
            r1++;
        else
            if (cal < 6)
            r2++;
        else
            if (cal < 8)
            r3++;
        else
            if (cal < 9)
            r4++;
        else
            r5++;
        printf("ingresa la calificacion del alumno: ");
        scanf("%f", &cal);

    }
    printf("\n0..3.99 = %d", r1);
    printf("\n4..5.99 = %d", r2);
    printf("\n6..7.99 = %d", r3);
    printf("\n8 ..8.99 = %d", r4);
    printf("\n9..10  = %d", r5);
}
*/

/*
#include <stdio.h>
#include <math.h>

void main(void)
{
    int num;
    printf("ingresa el numero para calcular la serie: ");
    scanf("%d", &num);
    if (num > 0)
    {
        printf ("\nserie de ulan\n");
        printf("%d \t", num);
        while (num != 1)
        {
            if (pow( -1, num) > 0)
                num = num / 2;
            else
                num = num * 3 + 1;
            printf("%d \t", num);
        }
    }
        else
            printf("\n num debe ser un entero positivo");
}
*/

/*
#include <stdio.h>

void main(void)
{
    int i, pri = 0, seg = 1, sig;
    printf("\t %d \t %d", pri, seg);
    for (I = 3; I< = 50; I++)

    {
        sig = pri + seg;
        pri = seg;
        seg = sig;
        printf("\t %d", sig);
    }
}
*/

/*
#include <stdio.h>

void main(void)
{
int VOT, C1 = 0, C2 = 0, C3 = 0, C4 = 0, C5 = 0, NU = 0, SVO;
float PO1, PO2, PO3, PO4, PO5, PON;
printf("Ingrese el primer voto: ");
scanf("%d", &VOT);
while (VOT)
{
switch(VOT)
{
case 1: C1++; break;
case 2: C2++; break;
case 3: C3++; break;
case 4: C4++; break;
case 5: C5++; break;
default: NU++; break;
}
printf("Ingrese el siguiente voto –0 para terminar–: ");
scanf("%d", &VOT);
}
SVO = C1 + C2 + C3 + C4 + C5 + NU;
PO1 = ((float) C1 / SVO) * 100;
PO2 = ((float) C2 / SVO) * 100;
PO3 = ((float) C3 / SVO) * 100;
PO4 = ((float) C4 / SVO) * 100;
PO5 = ((float) C5 / SVO) * 100;
PON = ((float) NU / SVO) * 100;
printf("\nTotal de votos: %d", SVO);
printf("\n\nCandidato 1: %d votos -- Porcentaje: %5.2f", C1, PO1);
printf("\nCandidato 2: %d votos -- Porcentaje: %5.2f", C2, PO2);
printf("\nCandidato 3: %d votos -- Porcentaje: %5.2f", C3, PO3);
printf("\nCandidato 4: %d votos -- Porcentaje: %5.2f", C4, PO4);
printf("\nCandidato 5: %d votos -- Porcentaje: %5.2f", C5, PO5);
printf("\nNulos: %d votos -- Porcentaje: %5.2f", NU, PON);
}
*/

/*
# include <stdio.h>
# include <math.h>

void main(void)
{

 int I = 1, B = 0, C;
double RES;
RES = 4.0 / I;
C = 1;
while ((fabs (3.1415 - RES)) > 0.0005)
{
I += 2 ;
if (B)
{
RES += (double) (4.0 / I);
B = 0;
}
else

{
 RES -= (double) (4.0 / I);
B = 1;
}
C++;
}
printf("\nNúmero de términos:%d", C);
}
*/


/*
#include <stdio.h>

void main(void)
{
    int i, mat, mamat, memat;
    float sum, pro, cal, mapro = 0.0, mepro = 11.0;
    printf("ingrese la matricula del primer alumno:\t");
    scanf("%d", &mat);
    while (mat)
      {
sum = 0;

   for (i = 1; i< = 5; i++)
{
   printf("\tIngrese la calificación del alumno: ", I);
    scanf("%f", &cal);
    sum += cal;
}
   pro = sum / 5;
   printf("\nMatrícula:%d\tPromedio:%5.2f", MAT, PRO);
if (pro > mapro)
{
mapro = pro;
mamat = mat;
}
if (pro < mepro)
{
mepro = pro;
memat = mat;
}
   printf("\n\nIngrese la matrícula del siguiente alumno: ");
   scanf("%d", &mat);
}
printf("\n\nAlumno con mejor Promedio:\t%d\t\%5.2f", MAMAT, MAPRO);
printf("\n\nAlumno con peor Promedio:\t%d\t\%5.2f", MEMAT, MEPRO);
}

}
*/

/*
#include <stdio.h>

void main(void)
{
    int i, j, num, sum, c = 0;
    printf("\ningese el numero limite: ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        sum = 0;
        for (j = 1; j <= (i / 2); j++)
            if ((i % j) == 0)
            sum += j;
        if (sum == i)
        {
            printf("\n%d es un numero perfecto", i);
            c++;

        }
    }
    printf("\nentre 1 y %d hay %d numeros perfectos", num, c);
}
*/

