#include <stdio.h>
#include "areas.h"

int main(void){

float areaRec=0.0;
float areaCirc=0.0;
float areaAB=0.0;
float areaABC=0.0;
float ladoA=0.0, ladoB=0.0, ladoC=0.0, radio=0.0;

printf("Ingrese el lado A: ");
scanf("%f", &ladoA);
printf("Ingrese el lado B: ");
scanf("%f", &ladoB);
printf("Ingrese el lado C: ");
scanf("%f", &ladoC);
printf("Ingrese el radio: ");
scanf("%f", &radio);




areaRec = rectangulo(&ladoA, &ladoB);
printf("El area del rectangulo es: %.2f\n", areaRec);
areaCirc = circulo(&radio);
printf("El area del circulo es: %.2f\n", areaCirc);
areaAB= trianguloBH(&ladoA, &ladoB);
printf("El area del trianguloBH es: %.2f\n", areaAB);
areaABC= trianguloABC( &ladoA, &ladoB, &ladoC);
printf("El area del trianguloABC es: %.2f\n", areaABC);
return 0;
}
