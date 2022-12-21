// Para ir practicando punteros

#include <stdio.h>
int main(){
    int a=5 ;
    //su valor es 5
    printf("Valor de a: %d \n", a);

    //Un puntero es una flecha que apunta (xd) a la dirección de memoria
    //cada vez que lo ejecutemos es una dirección diferente
    //cuando le asiganamos una dirección con & se mantiene y lo que cambia
    //será la dirección de a
    int *p;
    printf("Valor del puntero p: %d \n", p);

    //sacamos la dirección de la variable con &
    p=&a;
    printf("Dirección de a guardado en p: %d \n", p);
    //entonces debería ser el mismo
    printf("Dirección de &a: %d \n", &a);

    //pero si imprimimos *p es en realidad el valor, que en esta caso es a
    printf("Valor de *p: %d \n", *p);

    //Entonces podemos cambiar el valor de a a través de *p
    //este concepto es llamado dereferencia
    *p = 10;
    printf("Valor de a: %d \n", a);
    //& en realidad es un operador que nos da la dirección de la variable

    //la dirección de p no cambia
    int b = 50;
    *p =b;
    printf("Valor de p: %d \n", p);

    //perooo el valor de su dirección sí lo hace
    printf("Valor de *p: %d \n", *p);

    //si sumamos a p+1 NO sumaremos 1 a la dirección
    //si no en realidad 4 porque es el valor que un bit utiliza para guardar el numero
    printf("Valor de p: %d \n", p); //ejemplo 50254
    printf("Valor de p+1: %d \n", p+1);//entonces dará 50258
    
    return 0;
}