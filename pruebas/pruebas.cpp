//directivas, se reemplazan el tiempo de precompilación
#include <iostream> //jala las funciones
#define MENSAJE "Aiuda"

//compilado: hace el analisis del lenguaje, de manera sintactica
//ensamblado: convierte el compilado en lenguaje maquina
//limpiado: lo convierte en el ejecutable

//Esto es opcional para agrupar funciones
//using namespace std;

//int argc es la cantidad de argumentos 
//char const *argc[] o a veces char ** argv son los argumentos, es un arreglo de caracteres, por eso el doble asterisco o los corchetes. Tiene sentido xd
int main(int argc, char const *argv[])
{
    //como lo tenemos comentado debemos poner al espacio al que pertenece
    std::cout<<"Este es un mensaje de prueba\n";
    std::cout<<MENSAJE<<"\n";

    //el primer argumento es el mismo programa xd, ya de cajón tenemos un argumento 
    //esto se refleja al momento de ejecutarlo, mas no de compilarlo
    std::cout<<"Numero de argumentos: "<<argc<<"\n";

    //en caso de faltar sale otra cosa que tiene que ver más con archivos del programa y dirección de memoria... creo xd
    std::cout<<"Primero argumento: "<<argv[0]<<"\n";

    //tenemos una clase pair :0
    std::pair<int, char> par;

    par.first = 1;
    par.second = 'd';

    std::cout<<"Ejemplo de pair:\n";
    std::cout<<par.first<<"\n";
    std::cout<<par.second<<"\n";

    //también puede ser así
    std::pair<char, int> otroPar = {'f',123};

    return 0; //Solo indica que salió bien, como estandar, de deja por buenas prácticas xd
}

