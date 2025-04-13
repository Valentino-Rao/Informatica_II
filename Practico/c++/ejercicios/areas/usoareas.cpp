#include<iostream>
#include<cstdlib>
#include<iomanip>
#include "areas.h"
using namespace std;

int main(int argc, char *argv[]){

float r, a, b, c;
cout << "Ingrese r a b y c en el ese orden: ";
cin >> r >> a >> b >> c;

rectangulo(a,b);
cout << "El area del rectangulo es: " << setprecision(4) << rectangulo(a,b) << endl;

circulo(r);
cout << "El area del circulo es: " << circulo(r) << endl;

cout << "el area del triangulo es: " << trianguloABC(a,b,c) << endl;

return EXIT_SUCCESS;
    }
