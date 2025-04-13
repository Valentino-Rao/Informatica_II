// #include <iostream>
// using namespace std;
// #define MAXIMO(a, b) ((a) > (b) ? (a) : (b))

// int main(){

//     int num1 = 3, num2 = 7;
//     float num3 = 4.5, num4 = 2.3;
//     char char1 = 'a', char2 = 'z';


//     cout << "El maximo entre " << num1 << " y " << num2 << " es: " << MAXIMO(num1, num2) << endl;
//     cout << "El maximo entre " << num3 << " y " << num4 << " es: " << MAXIMO(num3, num4) << endl;
//     cout << "El maximo entre " << char1 << " y " << char2 << " es: " << MAXIMO(char1, char2) << endl;

//     return EXIT_SUCCESS;
// }

// El programa debe ser cambiada paraque acepte una funcion inline que reemplace a la macro MAXIMO, esta debe estar sobre cargada para datos char, int y float. la función debe ser probada en el main

#include <iostream>
using namespace std;

inline int MAXIMO(int a, int b){
    return a > b ? a : b;
}

inline float MAXIMO(float a, float b){
    return a > b ? a : b;
}

inline char MAXIMO (char a, char b){
    return a > b ? a : b;
}


int main (){

    int num1 = 3, num2 = 7;
    float num3 = 4.5, num4 = 2.3;
    char char1 = 'a', char2 = 'z';

    cout << "El maximo entre " << num1 << " y " << num2 << " es: " << MAXIMO(num1, num2) << endl;
    cout << "El maximo entre " << num3 << " y " << num4 << " es: " << MAXIMO(num3, num4) << endl;
    cout << "El maximo entre " << char1 << " y " << char2 << " es: " << MAXIMO(char1, char2) << endl;

}