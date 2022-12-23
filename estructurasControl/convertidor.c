#include <stdio.h>
#include <ctype.h>
int main(int argc, char const *argv[])
{
    char grados;
    printf("Indica la unidad de medida (F) o (C): "); scanf("%c", &grados);

    grados = toupper(grados);

    float temp;

    switch (grados)
    {
    case 'C':
        printf("Los grados son celsius, ingrese la temperatura\n"); scanf("%f", &temp);
        temp = (temp * 9/5) +32;
        printf("Convertidos a grados farenheit son: %.1f\n", temp);
        break;

    case 'F':
        printf("Los grados son farenheit, ingrese la temperatura\n"); scanf("%f", &temp);
        temp = ((temp-32)*5)/9;
        printf("Convertidos en celsius son: %.1f\n", temp);
        break;
    
    default:
        printf("Ingresa algo valido\n");
        break;
    }

    return 0;
}
