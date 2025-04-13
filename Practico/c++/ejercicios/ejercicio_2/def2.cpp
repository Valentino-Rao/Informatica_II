#include "clase2.h"

conjunto::conjunto(){
    for(int i=0; i<TAM; i++){
        tabla[i] = 0;
    }
}

void conjunto::vacia(){
    for(int i=0; i<TAM; i++){
        tabla[i] = 0;
    }
}

void conjunto::agregar(int indice, int n){
    tabla[indice] = n;
}

void conjunto::eliminar(int n){
    for(int i=0; i<TAM; i++){
        if(tabla[i] == n){
            tabla[i] = 0;
            break;
        }
    }
}

void conjunto::copiar(conjunto c){
    for(int i=0; i<TAM; i++){
        tabla[i] = c.tabla[i];
    }
}

bool conjunto::es_miembro(int n){
    for(int i=0; i<TAM; i++){
        if(tabla[i] == n){
            return true;
        }
    }
    return false;
}

bool conjunto::es_igual(conjunto c){
    for(int i=0; i<TAM; i++){
        if(tabla[i] != c.tabla[i]){
            return false;
        }
    }
    return true;
}

void conjunto::imprimir(){
    for(int i=0; i<TAM; i++){
        if (tabla[i] != 0){
            cout << "Posición" << "["<< i <<"]=" << tabla[i] << endl;
        }
    }
}
