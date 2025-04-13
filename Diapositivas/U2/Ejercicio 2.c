/*Escribir un programa en lenguaje C que lea desde la línea de comandos un número de tipo */
#include <stdio.h>
/*a) El archivo tiene el nombre <siglas de su nombre>_<su legajo>.txt, los permisos deben ser de lectura, escritura y ejecución para el propietario y de solo lectura para el resto. b) guarde en el archivo su nombre completo y en el renglón inferior su legajo y c) cierre el archivo.*/
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include <strings.h>

int main () {
    int b_creat;
    char programa [12]="VR402308.txt";

    b_creat =creat (programa, 0744);
    if (b_creat==-1){
        printf("ERROR AL ABRIR EL ARCHIVO\n");
        return 1;
    }

    write(b_creat,"Valentino Rao",13);
    write(b_creat,"\n402308",7);

    close(b_creat);



    return 0;
}

//ejercicio2
#include <stdlib.h>

int main (int argc, char* argv[]){
    if (argc !=2){

        printf("Error al ejecutar el archivo\n");
    return 1;
    }

    float numero = atof(argv[1]);

    unsigned char * bytes = (unsigned char *) & numero;
    for (int i = 0; i < 4; i++){

    unsigned char resultado = *bytes < 1;

    resultado ^= 64;

    if ((resultado >= '0' && resultado <= '9') || (resultado  >= 'A' && resultado <= 'Z') || (resultado >= 'a' && resultado <= 'z')) {
        putchar(resultado);

    }
    else
        putchar('@');
}

    return 0;
}
