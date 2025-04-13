#include "ejercicio2.h"


void Cerveza::mostrarInfo(){
    cout << "Marca: " << marca << endl;
    cout << "Tipo de Cerveza: " << tipoCerveza << endl;
    cout << "Tipo de Envase: " << tipoEnvase << endl;
    cout << "Cantidad Disponible: " << cantidad << " unidades" << endl;
    cout << "Capacidad por unidad: " << capacidad << " ml" << endl;
}

void Cerveza::sacarCerveza(){
    cout << "Has sacado una unidad de " << marca << " (" << tipoCerveza << ")." << endl;
    cantidad--;
    cout << "Cantidad restante: " << cantidad << " unidades." << endl;
}

void modificarCantidadAmiga(Cerveza &cerveza, int cantidadASumar){
    if(cantidadASumar <= 0){
        cout << "Error: La cantidad a sumar debe ser un valor positivo." << endl;
    }else{
        cerveza.cantidad += cantidadASumar;
        cout << "La cantidad de " << cerveza.marca << " ha sido incrementada en " << cantidadASumar << " unidades." << endl;
        cout << "Nueva cantidad disponible: " << cerveza.cantidad << " unidades." << endl;
    }
}

