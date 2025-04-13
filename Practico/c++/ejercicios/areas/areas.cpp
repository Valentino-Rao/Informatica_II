#include "areas.h"
float rectangulo(float a, float b){
    return a*b;}

float trianguloBH(float a, float b){
    return a*b/2;}

float trianguloABC(float a, float b, float c){
    float s;
    s=(a + b + c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));}

float circulo(float r){
    return PI * r * r;}
