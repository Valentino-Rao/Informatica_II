#include "ejercicio2.h"

int main(){
    int b = 0;

    cout << "Ingrese la cantidad a sumar: ";
    cin >> b;

    Cerveza cerveza("Corona", "Red Ale", "Lata", 10, 300);
    cerveza.mostrarInfo();
    cerveza.sacarCerveza();
    modificarCantidadAmiga(cerveza, b);
    cerveza.mostrarInfo();
    
    // otro ejemplo con la misma clase
    // Cerveza otraCerveza("Heineken", "Lager", "Botella", 15, 500);
    // otraCerveza.mostrarInfo();
    // otraCerveza.sacarCerveza();
    // modificarCantidadAmiga(otraCerveza, b);
    // otraCerveza.mostrarInfo();

    return EXIT_SUCCESS;
}