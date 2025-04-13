#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <strings.h>
#include <fcntl.h>

int main (int argc, char* argv[]){


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

 -------------------------------------------------------------------
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

------------------------------------------------------------------------------------------
    char *file= argv [1], *comp,buffer[8], name_dest[32];
    int b_abr,b_crt, n;

    comp= rindex(file,'.');
    if (strcmp (comp, ".txt") )
        write(2,"solo archivos .txt",18);

    if ((b_abr= open(file, O_RDONLY)) ==-1 )
        write(2,"error al abrir",14);

    strcpy(name_dest, "duplicado_");
    strcat(name_dest, file);

    if ((b_crt = creat(name_dest, 0666))==-1 )
        write(2,"Error al crear el archivo",25);

    while( n= read (b_abr, buffer, sizeof buffer) ){
        write(b_crt,buffer,n);


 ------------------------------------------------------------------------------------------------------
    double (*funciones [3]) (double) ={f,g,z};

    for (double x=0; x < 3.5 ; x += 0.2){
        printf("x = %.3f\n", x);

        for(int i=0; i<3; ++i){
            if(i==0){
                printf("f(%d)=%.4f\n", i+1, (*(funciones+i)) (x));
            }
            if(i==1){
                printf("g(%d)=%.4f\n", i+1, (*(funciones+i)) (x));
            }
            if(i==2){
                printf("z(%d)=%.4f\n", i+1, (*(funciones+i)) (x));
            }
        }
    }






 ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    char* nombres_meses[12]={"Enero","Febrero","Marzo","Abril","Mayo", "Junio","Julio", "Agosto","Septiembre","Octubre", "Noviembre","Diciembre" };
    char **ptchar;
    ptchar= nombres_meses;
    int indiice=0;

    printf("Ingrese su número:");
    scanf("%d",&indiice);
    printf("\nSu mes es:%s\n", obtenermes(&indiice, ptchar) );


}
char* obtenermes (int *indiice, char** ptchar){
    if ((*indiice) >0 && (*indiice)<13 ){
    return *(ptchar+ (*indiice-1)   );

    }
    }
double f (double x){
return 3 * exp(x-1) - 2*x;
}

double g (double x){
return (-x) * sin(x)+1.5;
}

double z (double x){
return x - 2 * x * x + 3;
}
/* gcc -Wall -c archivo.c
 * gcc -Wall -c archvi.c
 * ar cr libnombre. archivos.o
 ar t lib.a
gcc -Wall main.o lib.a
