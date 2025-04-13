// Ejericio 2
#include <iostream>
#include <string>
using namespace std;

class Cerveza{

    friend void modificarCantidadAmiga(Cerveza &cerveza, int cantidadASumar);

    public:
        Cerveza(string marca, string tipoCerveza, string tipoEnvase, int cantidad, int capacidad) : marca(marca), tipoCerveza(tipoCerveza), tipoEnvase(tipoEnvase), cantidad(cantidad), capacidad(capacidad) {}

        void mostrarInfo();

        void sacarCerveza();

    private:
        string marca;
        string tipoCerveza;
        string tipoEnvase;
        int cantidad;
        int capacidad;

};