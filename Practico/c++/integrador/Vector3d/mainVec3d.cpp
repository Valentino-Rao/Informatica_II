#include <iostream>
using std::cout;
using std::endl;
#include "classVec3d.h" 

int main(void){
    
    Vector3d v0, v1(1, 2, 3), v2(3, 2, 1);    
    
    cout << "v0 = "; 
    v0.imprimirvector();    
    cout << endl;    
    
    cout << "v1 = "; 
    v1.imprimirvector();
    cout << endl;
    
    cout << "v2 = "; 
    v2.imprimirvector();
    cout << endl;
    
    //Producto punto o escalar
    cout << "v1 . v2 = " << v1.productoPunto(v2) << endl;    
    
    // Producto cruz o vectorial
    Vector3d v1_cruz_v2 = v1.productoVectorial(v2);
    cout << "v1 x v2 = "; 
    v1_cruz_v2.imprimirvector();
    cout << endl;   

return 0;
}