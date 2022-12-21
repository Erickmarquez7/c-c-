#include <stdio.h>
//necesitamos importar la biblioteca para booleanos
#include <stdbool.h>

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
    printf("Para numeros con la letra i o d: %i\n", a);

    printf("Para dobles con la letra f: %f\n", flotante);

    printf("Para caracter con la letra c: %c\n", caracter);

    printf("Y cadenas con la letra s: %s\n", str);

    bool verdad = true;

    printf("Para booleanos importamos stdboo.h e imprimimos con d: %d\n Aunque se imprimirá como 1\n", verdad);
    printf("Si ponemos otra letra simplemente saldrá un error pk no es su tipo xd\n");

    //en ese sentido podemos declarar una variable char e imprimirla de acuerdo a un tipo
    char c = 117;
    printf("Char vista como valor numerico con d: %d\n", c);
    printf("Char vista como ascii con c: %c\n", c);

    //con unsigned char recorremos el rango de bits de -128: 127 a 0:255
    //lo mismo pasa con int, short int, long y long long

    return 0;

}