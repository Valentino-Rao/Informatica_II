#include "clase2.h"

int main () {
    conjunto c1;

    c1.vacia();
    c1.agregar(0,1);
    c1.agregar(1,2);
    c1.agregar(5,2);
    c1.agregar(99,3);
    c1.imprimir();

    c1.eliminar(2);

    c1.imprimir();

    
    return EXIT_SUCCESS;
}