#include <stdio.h>
int main(){
    int a = 1;
    int *p;
    p = &a;

    printf("%d\n", p);
    printf("%d\n", *p);

    float flotante = 7.14;
    char caracter = 'C';

    //pk como tal no existen las cadenas
    char str[] = "Bro";

    //y sus respectivos formatos
    printf("Para numeros con la letra i: %i\n", a);

    printf("Para dobles con la letra d: %f\n", flotante);

    printf("Para caracter con la letra c: %c\n", caracter);

    printf("Y cadenas con la letra s: %s\n", str);

    return 0;

}