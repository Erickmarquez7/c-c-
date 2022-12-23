#include <stdio.h>

int main(int argc, char const *argv[])
{
    const double PI = 3.14159;
    double radio;

    double circunferencia;
    double area;

    printf("Ingresa el radio del circulo: ");
    scanf("%lf", &radio);

    circunferencia = 2*PI*radio;
    printf("La circunferencia mide %lf \n", circunferencia);
    
    area=PI*radio*radio;
    printf("El área es %lf\n", area);


    return 0;
}
