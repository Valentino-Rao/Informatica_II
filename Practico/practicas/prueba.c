#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {  // Se espera 1 argumento adicional
        fprintf(stderr, "Uso: %s <valor>\n", argv[0]);
        return 1;
    }

    int valor = atoi(argv[1]);

    printf("El valor ingresado es: %d\n", valor);

    return 0;
}
