/*Se desea realizar una clase Vector3d que permita manipular vectores de tres componentes (coorde-nadas x,y, z) de acuerdo a las siguientes normas:
a) Sólo posee una función constructor y es en línea.
b) Tiene una función miembro igual que permite saber si dos vectores tienen sus componentes o
coordenadas iguales.
Añadir a la clase Vector3d las funciones miembros suma (suma de dos vectores), productoEscalar
(producto escalar de dos vectores: v 1 = (x 1 , y 1 , z 1 ); v 2 = (x 2 , y 2 , z 2 ); v 1 · v 2 = x 1 ∗ x 2 + y 1 ∗ y 2 + z 1 ∗ z 2 )
Entre las operaciones con vectores es muy importante contar con el producto vectorial v 1 ×v 2 . Incluir
en la clase Vector3d una función miembro productoVectorial que realice el cálculo.
Nota: El producto vectorial queda expresado por la matriz*/

#ifndef VECTOR3D_H
#define VECTOR3D_H
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
using std::ostream;
using std::istream;
using std::cout;
using std::cin;

class Vector3d{
    
    friend Vector3d operator+(float a, Vector3d b); // 5 + v1
    friend Vector3d operator-(float a, Vector3d b); 
    friend istream &operator>>(istream &entrada ,Vector3d &a);
    friend ostream &operator<<(ostream &salida ,const Vector3d &a);
    
    public:
    Vector3d(float x1 = 0.0, float y1 = 0.0 , float z1 = 0.0): x(x1), y(y1), z(z1){}; //constructor

    float get3dx(){return this-> x;} //getter
    float get3dy(){return this-> y;} 
    float get3dz(){return this-> z;} 

    void set3dx(float x1){ x = x1;} //setter
    void set3dy(float y1){ y = y1;} 
    void set3dz(float z1){ z = z1;}
    
    void leervector ();
    void imprimirvector ();
    void productoEscalar (Vector3d b, Vector3d a);
    void productoVectorial (Vector3d b, Vector3d a);
    void normamax (Vector3d b, Vector3d a);

    Vector3d& operator= (Vector3d a);
    Vector3d operator+ (Vector3d a); // v1 + v2
    Vector3d operator+ (float a); // v1 + 5
    Vector3d operator- (float a);
    Vector3d operator- (Vector3d a);
    bool operator== (Vector3d a);

    private:
        float x;
        float y;
        float z;
};
#endif