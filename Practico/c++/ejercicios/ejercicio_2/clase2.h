// 2. Escribir una clase Conjunto que gestione un conjunto de enteros (int) con ayuda de una tabla de ta-
// maño fino (un conjunto contiene una lista ordenada de elementos y se caracteriza por el hecho de que
// cada elemento es único: no se debe encontrar dos veces el mismo valor en la tabla). Las operaciones
// a implementar son las siguientes:
// a) La función vacía() vacía el conjunto.
// b) La función agregar() añade un entero al conjunto.
// c) La función eliminar() retira un entero del conjunto.
// d) La función copiar() recopila un conjunto en otro.
// e) La función es_miembro() reenvía un valor booleano (valor lógico que indica si el conjunto con-
// tiene un entero dado).
// f ) La función es_igual() reenvía un valor booleano que indica si un conjunto es igual a otro.
// g) La función imprimir() realiza la visualización con un formato que usted establezca del conjunto.

#include <iostream>
#define TAM 100
using namespace std;


class conjunto{
    
    public:
    conjunto();
    void vacia();
    void agregar(int, int);
    void eliminar(int);
    void copiar(conjunto);
    bool es_miembro(int);
    bool es_igual(conjunto);
    void imprimir();

    private:
    int tabla[TAM];
};