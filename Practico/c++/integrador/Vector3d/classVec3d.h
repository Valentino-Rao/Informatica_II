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
    
    public:
    Vector3d(float x1 = 0.0, float y1 = 0.0 , float z1 = 0.0): x(x1), y(y1), z(z1){}; //constructor

    inline float get3dx() const { return this->x; } //getter
    inline float get3dy() const { return this->y; } 
    inline float get3dz() const { return this->z; } 

    inline void set3dx(float x1) { x = x1; } //setter
    inline void set3dy(float y1) { y = y1; } 
    inline void set3dz(float z1) { z = z1; }
    
    void imprimirvector ();
    float productoPunto (Vector3d b);
    Vector3d productoVectorial (Vector3d b);

  //  Vector3d& operator= (Vector3d &a);
 

    private:
        float x;
        float y;
        float z;
};
#endif
