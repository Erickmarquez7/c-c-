#include <stdio.h>

int main(int argc, char const *argv[])
{
    int edad;
    printf("Ingresa tu edad: "); scanf("%d", &edad);

    if(edad < 0)
    {   
        printf("Nel, aun no naces bro\n");
    }

    else if(edad==0)
    {
        printf("Acabas de nacer bro\n");
    }

    else if(edad<18)
    {
        printf("Esperate un poco más\n");
    }

    else
    {
        printf("Felicidaes, ya eres adulto, bienvenido al mundo de la miseria, soledad y desesperación\n");
    }
        
    //si le pasamos una letra y le ponemos la %d para un numero, lo ve como un 0
    //Pero si lo dejamos como %c no lo ve como caracter, c queda en numero
    printf("Valor en caracter: %c\n", edad);
    return 0;
}
