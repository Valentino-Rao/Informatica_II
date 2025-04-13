#include "classVec3d.h"
using namespace std;


void Vector3d::imprimirvector(){
    float x, y, z;
    x=get3dx();
    y=get3dy();
    z=get3dz();

    cout<< "El vector es: ("<< x<< ", "<< y<< ", "<< z<< ")"<< endl;
}


float Vector3d::productoPunto(Vector3d b){
    return (this->get3dx() * b.get3dx() + this->get3dy() * b.get3dy() + this->get3dz() * b.get3dz());
}


Vector3d Vector3d::productoVectorial(Vector3d b){
    Vector3d c;
    
    c.set3dx(this->get3dy() * b.get3dz() - this->get3dz() * b.get3dy());
    c.set3dy(this->get3dz() * b.get3dx() - this->get3dx() * b.get3dz());
    c.set3dz(this->get3dx() * b.get3dy() - this->get3dy() * b.get3dx());
    return c;   
}


// Vector3d& Vector3d::operator=(Vector3d &a) {
//     if (this != &a) { 
//         this-> set3dx(a.get3dx());
//         this-> set3dy(a.get3dy());
//         this-> set3dz(a.get3dz());
//     }
//     return *this;
// }
// v1 = v2 ---> v1.igual(v2)


