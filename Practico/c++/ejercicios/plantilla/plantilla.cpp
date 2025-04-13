// #include <iostream>
// #include <vector>
// using namespace std;

// //Funcion para encontrar el mayor número en un vector de enteros
// int encontrarMayor(const vector<int>& vec){
//     int mayor = vec[0];
//     for(size_t i = 1; i < vec.size(); i++){
//         if(vec[i] > mayor){
//             mayor = vec[i];
//         }
//     }
//     return mayor;
// }

// int main(){
//     vector<int>  vecEnteros;
//     vecEnteros.push_back(3);
//     vecEnteros.push_back(7);
//     vecEnteros.push_back(2);
//     vecEnteros.push_back(9);

//     cout << "El mayor número en el vector es: " << encontrarMayor(vecEnteros) << endl;

//     return 0;
// }

// cambiar el programa para hacer una plantilla de la función encontrarMayor para cualquier dato numerico, int, float, double, long, etc.

#include <iostream>
using namespace std;

template <typename T>
T encontrarMayor(const T *vec, size_t tam){
    T mayor = vec[0];
    for(size_t i = 1; i < tam; i++){
        if(vec[i] > mayor){
            mayor = vec[i];
        }
    }
    return mayor;
}

int main (){
    
    int vecint[4]={3, 7, 2, 9};
    float vecfloat[4]={3.5, 7.5, 2.5, 9.5};
    double vecdouble[4]={3.5, 7.5, 2.5, 9.5};
    long veclong[4]={3, 7, 2, 9};

    cout << "El mayor numero de vecint es: " << encontrarMayor(vecint, 4) << endl;

    cout << "El mayor numero de vecfloat es: " << encontrarMayor(vecfloat,4) << endl;

    cout << "El mayor numero de vecdouble es: "<< encontrarMayor(vecdouble,4)<< endl;

    cout << "El mayor numero de veclong es: " << encontrarMayor(veclong,4) << endl;


}