#include <stdio.h>
#define PI 3.1415
#define AREA_RECTANGULO(x,y) ( (x) * (y) )
#define AREA_CIRCULO(x) ( (PI) * (x) * (x) )

int main (void){
     int area;
#ifdef TEST
    area= AREA_CIRCULO (5);
    printf("el area del circulo es %d\n",area);
#endif
    area= AREA_RECTANGULO(2,5);

    printf("el area del rectangulo es %d\n", area);


    return 0;
}
