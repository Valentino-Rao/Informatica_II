#include <stdio.h>
char* obtenermes (int*, char**);

int main (void){
    char* nombres_meses[12]={"Enero","Febrero","Marzo","Abril","Mayo", "Junio","Julio", "Agosto","Septiembre","Octubre", "Noviembre","Diciembre" };
    char **ptchar;
    ptchar= nombres_meses;
    int indice=0;

    printf("Ingrese su número:");
    scanf("%d",&indice);
    printf("\nSu mes es:%s\n", obtenermes(&indice, ptchar) );


}
char* obtenermes (int *indice, char** ptchar){
    if ((*indice) >0 && (*indice)<13 ){
    return *(ptchar+ (*indice-1)   );

    }
return NULL;
}
