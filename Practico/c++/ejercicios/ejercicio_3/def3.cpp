#include "clase3.h"
using namespace std;

void Vector3d::leervector(){
    float x, y, z;
    cout << "Ingrese la coordenada x: ";
    cin >> x;
    cout << "Ingrese la coordenada y: ";
    cin >> y;
    cout << "Ingrese la coordenada z: ";
    cin >> z;
    
    set3dx(x);
    set3dy(y);
    set3dz(z);
}

void Vector3d::imprimirvector(){
    float x, y, z;
    x=get3dx();
    y=get3dy();
    z=get3dz();

    cout<< "El vector es: ("<< x<< ", "<< y<< ", "<< z<< ")"<< endl;
}

void Vector3d::normamax (Vector3d b, Vector3d a){
    float norma1, norma2;

    norma1= sqrt( pow(b.get3dx(),2)+ pow(b.get3dy(),2)+ pow(b.get3dz(),2));
    norma2= sqrt( pow(a.get3dx(),2)+ pow(a.get3dy(),2)+ pow(a.get3dz(),2));

    if (norma1>norma2){
        cout<< "La norma del primer vector es mayor: "<< 
        norma1 << endl;
    }
    else if(norma1<norma2){
        cout<< "La norma del segundo vector es mayor: "<<  
        norma2 << endl;
    }
}

void Vector3d::productoEscalar(Vector3d b, Vector3d a){
    float x, y, z;
    x= b.get3dx()*a.get3dx();
    y= b.get3dy()*a.get3dy();
    z= b.get3dz()*a.get3dz();
    
    cout<< "El producto escalar es:" "["<< x << ", "<< y <<", "<< z <<"]" << endl;
}

void Vector3d:: productoVectorial (Vector3d b, Vector3d a){
    float x, y, z;
    x= b.get3dy()*a.get3dz()-b.get3dz()*a.get3dy();
    y= b.get3dz()*a.get3dx()-b.get3dx()*a.get3dz();
    z= b.get3dx()*a.get3dy()-b.get3dy()*a.get3dx();

    cout<< "El producto vectorial es: ["<< x<< ", "<< y<< ", "<< z<< "]"<< endl;
}

Vector3d operator+(float a, Vector3d b){ // 5 + v1
    Vector3d result;

    result.set3dx(b.x + a);
    result.set3dy(b.y + a);
    result.set3dz(b.z + a);

    return result;
}

Vector3d operator-(float a, Vector3d b){
    Vector3d result;

    result.set3dx(a - b.x);
    result.set3dy(a - b.y);
    result.set3dz(a - b.z);

    return result;
}

Vector3d& Vector3d::operator=(Vector3d &a) {
    if (this != &a) { // Check for self-assignment
        this-> set3dx(a.get3dx());
        this-> set3dy(a.get3dy());
        this-> set3dz(a.get3dz());
    }
    return *this;
}
// v1 = v2 ---> v1.igual(v2)

Vector3d Vector3d::operator+(Vector3d a) { // v1 + v2
    Vector3d result;

    result.set3dx(this->get3dx() + a.get3dx());
    result.set3dy(this->get3dy() + a.get3dy());
    result.set3dz(this->get3dz() + a.get3dz());

    return result;
}

Vector3d Vector3d::operator-(Vector3d a){
    Vector3d result;

    result.set3dx(this->get3dx() - a.get3dx());
    result.set3dy(this->get3dy() - a.get3dy());
    result.set3dz(this->get3dz() - a.get3dz());
    
    return result;
}

Vector3d Vector3d::operator+(float a){ // v1 + 5
    Vector3d result;

    result.set3dx(this->x + a);
    result.set3dy(this->y + a);
    result.set3dz(this->z + a);

    return result;
}

Vector3d Vector3d::operator-(float a){
    Vector3d result;

    result.set3dx(this->get3dx() - a);
    result.set3dy(this->get3dy() - a);
    result.set3dz(this->get3dz() - a);

    return result;
}

istream &operator>>(istream &entrada, Vector3d &a) {
    entrada >> a.x >> a.y >> a.z;
    return entrada;
}

ostream &operator<<(ostream &salida, const Vector3d &a){
    salida << "[" << a.x << ", " << a.y << ", " << a.z << "]";
    return salida;
}

bool Vector3d::operator==(Vector3d a){
    return (get3dx() == a.get3dx() && get3dy() == a.get3dy() && get3dz() == a.get3dz());
}
