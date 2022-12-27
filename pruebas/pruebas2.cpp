//una clase es diferente a un registro, difiere en tipos, memoria, control de acceso
//una diferencia importante es el paso
//en un registro el paso es por valor y una clase por referencia

//Aunque en c++ son casi lo mismo
//una diferencia es que las clases son privadas por defecto
//y struct es publico
#include <iostream>
using namespace std;

//declaramos una structure
struct persona1
{
    string nombre;
    string apellido;
    int edad;
};


class persona2
{
//por defecto son privadas, así que no podríamos hacer algo como persona2.nombre = "Juan".
//Las tenemos que hacer publicas
    public:
        string nombre;
        string apellido;
        int edad;
};

    //ponemos las & porque es la dirección de memoria, ya que es referencia
void test(persona1 x, persona2 &y)
{
    x.nombre = "Alice";
    y.nombre = "Bob";

    cout<<"Durante:\n";
    cout<<"Nombre de persona 1: "<<x.nombre<<"\tApellido: "<<x.apellido<<"\tEdad: "<<x.edad<<"\n";
    cout<<"Nombre de persona 2: "<<y.nombre<<"\tApellido: "<<y.apellido<<"\tEdad: "<<y.edad<<"\n";
}


int main(int argc, char const *argv[])
{
    //hay diferentes maneras para manejar las clases y su creación, por el momento solo ocuparemos esta "basica"

    //los declaramos
    persona1 a;
    persona2 b;

    //asignamos valores
    a.nombre = "Arturo"; a.apellido = "Albertano"; a.edad = 50;
    b.nombre = "Bictor"; b.apellido = "Bernal"; b.edad = 20;

    cout<<"Antes:\n";
    cout<<"Nombre de persona 1: "<<a.nombre<<"\tApellido: "<<a.apellido<<"\tEdad: "<<a.edad<<"\n";
    cout<<"Nombre de persona 2: "<<b.nombre<<"\tApellido: "<<b.apellido<<"\tEdad: "<<b.edad<<"\n";

    test(a,b);
    //pero adentro de la función sí se cambia el nombre de ambos

    cout<<"Después:\n";
    cout<<"Nombre de persona 1: "<<a.nombre<<"\tApellido: "<<a.apellido<<"\tEdad: "<<a.edad<<"\n";
    cout<<"Nombre de persona 2: "<<b.nombre<<"\tApellido: "<<b.apellido<<"\tEdad: "<<b.edad<<"\n";
    //el nombre de bictor, el cual es una clase, cambió mientras que para Arturo se mantiene igual, esto tiene que ver por el paso por valor/referencia.
    //De hecho tiene sentido que se modifique si en la funcion agregamos el operador &
    //Si no le pasamos ese operador entonces no se modifica

    return 0;
}
