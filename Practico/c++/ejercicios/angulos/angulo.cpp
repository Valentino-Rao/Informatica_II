#include "angulo.h"

float tangente (float a){
    return (cos(a) / sin(a));
}


float cotangente (float a){
    float b=tangente(a);
    return (1/(b));
}

float secante (float a){
    return (1/cos(a));
}


float cosecante (float a){
    return (1/sin(a));
}

