#include <stdio.h>
#include <math.h>

int main()
{
    //Progamita para calcular la hipotenusa xd
    //donde la hip es la variable c
    double a;
    double b;
    double c;

    printf("Ingrese el valor de a: "); scanf("%lf", &a);
    printf("Ahora el valor de b: "); scanf("%lf", &b);

    c = sqrt(a*a + b*b);

    printf("El valor de la hipotenusa es: %lf\n", c);

    return 0;
    //en este caso para que lea la directiva ponemos
    //gcc hipotenusa.c -o hipotenusa -lm
    //lm para que detecte la directiva
}
