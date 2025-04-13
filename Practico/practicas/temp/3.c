#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main(void) {
    const char *path = "puerto_salida.txt";
    int b_salida;
    char primo[] = { '1', '3', '5', '7', '1', '1', '1', '1', '1', '1', '1', '1', '1', '1', '3', '3', '3', '3', '3', '3', '5', '5', '7', '5', '1', '1', '1', '1', '1', '1' };

    b_salida = open(path, O_WRONLY | O_CREAT | O_TRUNC, 0666);


    for (int i = 0; i < sizeof(primo); i++) {
        write(b_salida, &primo[i], 1);
        write(b_salida, " ", 1);

    }
        write(b_salida, "\n", 1);
    close(b_salida);
    return 0;
}
