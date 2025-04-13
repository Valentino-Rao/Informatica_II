// Implementar una función como plantilla, de nombre obtenerMaximo(...) que reciba como parámetro un arreglo estilo C (de tipos de datosbásico como int, float, etc.) y el tamaño del arreglo. 
// La función debe devolver el valor máximo del arreglo.
// Nota: no se pide implementar función main(), solo la función plantilla.

#include <iostream>
#using namespace std;

template <typename T>
T obtenerMaximo(T arreglo[], int tamano){
    
    T maximo = arreglo[0];
    
    for(int i = 1; i < tamano; i++){
        if(arreglo[i] > maximo){
            maximo = arreglo[i];
        }
    }
    
    return maximo;
}


