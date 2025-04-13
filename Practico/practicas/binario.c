#include <stdio.h>
#include <stdlib.h>
void binary_print(unsigned char );

int main(int argc , char *argv[]){
    unsigned char var =  *argv[1];
    binary_print(var);
    return 0;
}



void binary_print(unsigned char val){


    unsigned char b, mask = 1 << 7;

    for(b = 0; b < 8*sizeof(unsigned char); b++){

    putchar( val & mask ? '1' : '0');
    mask >>= 1;
    }
    printf("\n");
}
