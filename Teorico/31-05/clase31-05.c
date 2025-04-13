#include <stdio.h>
#include <math.h>
#include <string.h>

float IEEE754 (const char*);

int main (void){

    char binario [33];

    printf("Ingrese el numerro binario de 32 bits: ");
    scanf("%32s",binario);

    printf("El número es: %f\n ", IEEE754(binario));
    
 


 return 0;
}

float IEEE754 (const char *binario){
    
    unsigned int num=0;
    
    while (*binario){
    num=(num<<1)+(*binario++ - '0');
    }
    
    unsigned int signo=0;
    unsigned int mantisa_bin=0;
    unsigned int exponente=0;
    float decimal=1.0;
    
    signo= num >>31;
    exponente= ((num>>23) & 0xFF)-127;

    mantisa_bin= num & 0x7FFFFF;
     
     for(int i=22;i>=0;i--){ 
        if( (mantisa_bin>>i) & 1){ 
          decimal +=1.0/(1<<(23-i));
        }
     }
   
   decimal*=pow(2,exponente);
    
    if (signo){
    decimal = decimal*(-1.0);
    }
    
    
 return decimal;
 }
