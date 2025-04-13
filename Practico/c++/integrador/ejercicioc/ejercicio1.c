//Ejercicio 1
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define SIZE 10

void processData(const int *data, const int *ptrA, const int *ptrB, float *avgA, float *avgB) {

    *avgA = 0;

    for (int i = 0; i < 5; i++) {
        *avgA += *(ptrA + i);
    }
    *avgA /= 5;

    *avgB = 0;

    for (int i = 0; i < 5; i++) {
        *avgB += *(ptrB + i);
    }

    *avgB /= 5;
}

void printResult(float avgA, float avgB) {

    printf("Promedio de los primeros cinco elementos: %.2f\n", avgA);
    printf("Promedio de los últimos cinco elementos: %.2f\n", avgB);

}

void saveReadings(const int *data, const char *filename) {

    FILE *file = fopen(filename, "wb"); 

    if (file == NULL) {
        perror("Error al abrir el archivo");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < sizeof(int); j++) {
            fputc((data[i] >> (j * 8)) & 0xFF, file);
        }
    }

    fclose(file);
}

int main() {

    // Datos simulados de los sensores

    int data[SIZE] = {1024, 2048, 512, 256, 128, 1024, 2048, 4096, 256, 128};

    int *ptrA = data;           // Apunta al inicio del arreglo
    int *ptrB = data + 5;       // Apunta a la mitad del arreglo

    // Variables para almacenar los promedios

    float avgA = 0, avgB = 0;

    

    // Procesar los datos

    processData(data, ptrA, ptrB, &avgA, &avgB);
    // Imprimir los resultados

    printResult(avgA, avgB);

    // Guardar los datos en un archivo

    saveReadings(data, "sensor_data.bin");

return 0;

}

