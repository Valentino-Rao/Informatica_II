#include <stdio.h>
#include <math.h>

double f (double x){
return 3 * exp(x-1) - 2*x;
}

double g (double x){
return (-x) * sin(x)+1.5;
}

double z (double x){
return x - 2 * x * x + 3;
}


int main (void){
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

return 0;
}
