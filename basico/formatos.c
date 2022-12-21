//que onda con los formatos
#include <stdio.h>

int main(){

    //%f float
    //%lf double
    //%.1 presición decimal
    //%1 minimo
    //%- alineacion a la izquiera

    //supongamos tenemos 3 variables
    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 100.99;

    printf("Si ponemos 5.75 con f nos dará ceros demás: %f\n", item1);
    
    //Me tendré que acostumbrar a que el formato empiece con punto xd
    printf("Mejoramos presición con .2f: %.2f\n", item1);
    printf("Mejoramos presición con .2f: %.2f\n", item3);

    //y es que con un numero antes del punto lo alinea :0
    printf("Precio 1: $%7.2f\n", item1);
    printf("Precio 2: $%7.2f\n", item2);
    printf("Precio 3: $%7.2f\n", item3);

    return 0;
}
