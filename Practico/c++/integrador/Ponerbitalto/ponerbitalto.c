// Se pide:
// a) Completar la implementación de la función ponerBitAlto().    
// b) Completar la sentencia del condicional if que se encuentra dentro de la función main().
// Requerimientos de la función ponerBitAlto():    
// • Retornar -1 en caso de recibir un puntero NULL.    
// • Retornar -1 si la variable b está fuera del rango permitido.
// • Realizar la operación de poner en uno el bit indicado por el argumento b sobre la variable apuntada por el argumento dato, sin o secumplen las condiciones anteriores.    
// • Retornar 1 si se realizó la conversión del dato.

#include <stdio.h>

int ponerBitAlto(unsigned int *dato, int b){

    if (dato == NULL || b < 0 || b > 31)
        return -1;
    else
        *dato = *dato | (1 << b);
    return 1;
}

int main(){    
    
    unsigned int valor;    
    int bit;

    printf("Ingrese un valor entero positivo: ");    
    scanf("%u", &valor);    
    printf("Ingrese el bit a modificar: ");    
    scanf("%d", &bit);    
    
    if( ponerBitAlto(&valor, bit) != -1 ) 
        printf("El valor modificado es: %u\n", valor);    
    else       
        printf("Error!\n");    
    
    return 0;
    }