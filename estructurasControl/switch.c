#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    char notas;

    printf("Ingresa tus notas: "); scanf("%c", &notas);

    //Para convetirlo en mayusculaaaas
    notas = toupper(notas);

    switch (notas)
    {
    case 'A':
        printf("Felicidades, sigue así\n");
        break;
    case 'B':
        printf("Casi lo logras\n");
        break;
    case 'C':
        printf("Un poquito más\n");
        break;
    case 'D':
        printf("D de diosito\n");
        break;
    case 'E':
        printf("E de esfuerzate más xd\n");
        break;
    case 'F':
        printf("F\n");
        break;
    default:
        printf("No mientas\n");
        break;
    }    

    return 0;
}
