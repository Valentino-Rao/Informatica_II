/*Escribir un programa que realice las operaciones AND, OR y OR
exclusiva a nivel de bits entre dos valores numéricos de 8 bits cargados
desde la lı́nea de comandos. La interacción con el usuario debe ser como
se muestra a continuación, donde los valores de entrada se expresan
en notación decimal y el resultado en notación decimal y hexadecimal.
./and_or_xor Uso: ./and_or_xor <num1> <num2> ./and_or_xor
128 160
128 & 160 = 128 0x80 & 0xA0 = 0x80
128 | 160
= 160 0x80 | 0xA0 = 0xA0
128 ^ 160 = 032 0x80 ^ 0xA0 =
0x20*/
#include <stdio.h>
#include <stdlib.h>

void AND (unsigned int, unsigned int);
void XOR (unsigned int, unsigned int);
void OR  (unsigned int, unsigned int);

int main (int argc , char * argv[]){
    unsigned int num1 = atoi (argv[1]);
    unsigned int num2 = atoi (argv[2]);

    AND (num1, num2);
    XOR (num1, num2);
    OR  (num1, num2);

    return 0;
}
void AND (unsigned int num1, unsigned int num2){
    unsigned int and=0;
    and=num1 & num2;
    printf("el and es:%u  y en hexa: 0x%x \n", and, and);

}

void XOR (unsigned int num1, unsigned int num2){
    unsigned int xor=0;
    xor= num1 ^ num2;
    printf("el xor es:%u y en hexa: 0x%x \n", xor, xor);
}

void OR (unsigned int num1, unsigned int num2){
    unsigned int or=0;
    or= num1 | num2;
    printf("el or es:%u y en hexa: 0x%x \n", or, or);
}
