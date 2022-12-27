//directivas, se reemplazan el tiempo de precompilación
#include <iostream> //jala las funciones
#define MENSAJE "Aiuda"

//compilado: hace el analisis del lenguaje, de manera sintactica
//ensamblado: convierte el compilado en lenguaje maquina
//limpiado: lo convierte en el ejecutable

//Esto es opcional para agrupar funciones
//using namespace std;

int main(int argc, char const *argv[])
{
    //como lo tenemos comentado debemos poner al espacio al que pertenece
    std::cout<<"Este es un mensaje de prueba\n";
    std::cout<<MENSAJE<<"\n";

    return 0;
}

