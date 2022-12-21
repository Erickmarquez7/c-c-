#include <stdio.h>
int main()
{   
    printf("Me quiero morir\n");
    //para leer lo hacemos con scanf(), seguido del formato y variable
    int edad =0;

    printf("Cuál es tu edad?: ");
    //OJO: debe ser la direccion, con &
    scanf("%d",&edad);//a la dir 123 le asigamos el valor de 5, por ejemplo 123 -> 5
    //asignamos el valor a la dirección, no la dirección en sí misma

    int *p = &edad;
    //edad = 5;
    printf("Tu edad es xd: %d\n", p); //dir
    printf("Tu edad es xd: %d\n", *p); //45

    printf("Tu edad es xd: %d\n", edad); //45
    printf("Tu edad es xd: %d\n", &edad); //dir

    char nombre[25];
    printf("Nombre: ");
    scanf("%s", &nombre);

    printf("Que tal %s!\n", nombre);

    //para poder escribir cadenas con espacio hacemos la siguiente funcion
    //fgets(nombre, 25, stdin);
    //ya que scan no lee espacios en blanco

    return 0;
}
