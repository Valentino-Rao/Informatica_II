#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <strings.h>
#include <fcntl.h>

int main (int argc, char* argv[]){
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

    }

    close(b_abr);
    close(b_crt);





    return 0;
}
