#include "clase3.h"


int main (){
    Vector3d v1, v2, v3, v4;

    v1.leervector();
    v2.leervector();

    v1.imprimirvector();
    v2.imprimirvector();

    v3.productoEscalar(v1, v2);
    v3.productoVectorial(v1, v2);
    v3.normamax(v1, v2);
    
    v4= v1 + v2;
    cout << "v4 = v1 + v2 = " << v1+v2 << endl;
    v4= v1 - v2;
    cout << "v4 = v1 - v2 = " << v1-v2 << endl;

    if (v3==v4){
        cout << "Los vectores son iguales" << endl;
    }
    else{
        cout << "Los vectores no son iguales" << endl;
    }
    
    cout << "V1 es: "<< v1 << endl;
    v4= 5-v1;
    cout << "v4 = 5 - v1 = " << v4 << endl;
    v4= 5+v1;
    cout << "v4 = 5 + v1 = " << v4 << endl;
    v4= v1 + 5;
    cout << "v4 = v1 + 5 = " << v4 << endl;
    v4= v1 - 5;
    cout << "v4 = v1 - 5 = " << v4 << endl;


    cout << "Ingrese un vector: " << endl;
    cin >> v4;
    cout << "El vector ingresado es: " << v4 << endl;

    return EXIT_SUCCESS;
}