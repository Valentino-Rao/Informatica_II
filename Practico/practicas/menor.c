/*Escribir una función con un argumento de tipo apuntador a double y otro argumento de tipo int. El
primer argumento se debe de corresponder con un arreglo y el segundo con el número de elementos
del arreglo. La función ha de ser de tipo apuntador a double para devolver la dirección del elemento
menor.*/

#include <stdio.h>
double menor (int *, double* );



int main (void){

    double b[10]={2.5, 2.3, 5.7, 7.9, 9.23, 1.2, 321.3, 7.0, 2.4, 10.0};
    int n;
    n = (sizeof(b)/8);

    printf ("El menor es: %f\n", menor(&n ,b));

}

double menor (int* a, double* b){

    double menor=*b;

    for (int i = 0 ; i < (*a-1) ; i++){
        if ( menor > *(b + i +1)  ) {
            menor= *(b+i+1);
            }
    }
   return menor;
}
