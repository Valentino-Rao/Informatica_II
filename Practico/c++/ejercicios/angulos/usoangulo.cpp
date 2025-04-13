#include <iostream>
#include <cstdlib>
#include <iomanip>
#include "angulo.h"

using namespace std;

int main (){

    float a;
    cout << "Ingrese su angulo en grados: " << endl;
    cin >> a;
    a=a*(PI/180);
    cout << "El valor de cada función es: \n" << "cos: " << cos(a) << "\n sen: " << sin(a) << "\n tan: "<< tangente(a) << "\n cot: " << cotangente(a) << "\n sec: " << secante(a) << "\n csc: " << cosecante (a) << "\n";

    return EXIT_SUCCESS;
}
