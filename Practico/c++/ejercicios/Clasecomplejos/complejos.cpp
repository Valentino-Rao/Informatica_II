/*Realizar una clase Complejo que permita la gestión de números complejos (un número comple-jo = dos números reales ). Las operaciones a implementar son las siguientes:
a Una función leer Complejo() permite leer un objeto de tipo Complejo.
b Una función escr i bi r C ompl e j o() realiza la visualización formateada de un Complejo.
c Suma: a + c = (A +C , (B + D)i ) . 
d Resta: a–c = (A–C , (B –D)i ) .
e Multiplicación: a ∗ c = (A ∗ C –B ∗ D, (A ∗ D + B ∗ C )i ) .f Multiplicación: x ∗ c = (x ∗ C , x ∗ Di ) , donde x es real.
g Conjugado: a = (A.–Bi ) .
*/

#include <iostream>
using namespace std;

class Complejo{
    
    public:
    float Or(){return r;} // getter
    float Oi(){return i;} // getter
    void Pr(float r1){ r = r1;} // setter
    void Pi(float i1){i = i1;}
    Complejo(){ r = 0.0; i = 0.0;} ; // constructor por defecto
    Complejo(float r1, float i1){ r = r1; i = i1;} // constructor
    ~Complejo(){}; // destructor
    void leerComplejo(); // funcion miembro
    void escribirComplejo(); // funcion miembro
    void suma( Complejo a, Complejo b);
    void resta( Complejo a, Complejo b);
    void multiplicacion( Complejo a, Complejo b);
    void multiplicacion( float x, Complejo a);
    void conjugado (Complejo a);
    
    private:
    float r, i;
};

void Complejo::leerComplejo(){
float r, i; // variable local
cout << " parte real :";
cin >> r;
cout << " parte imaginaria :";
cin >> i;
Pr(r);
Pi(i);
}
void Complejo::escribirComplejo(){
    cout << r << " + " << i << "i" << endl;
}

void Complejo::suma( Complejo a, Complejo b){
    r = a.Or() + b.Or();
    i = a.Oi() + b.Oi();
}

void Complejo::resta( Complejo a, Complejo b){
    r = a.Or() - b.Or();
    i = a.Oi() - b.Oi();
}

void Complejo::multiplicacion( Complejo a, Complejo b){
    r = a.Or() * b.Or() - a.Oi() * b.Oi();
    i = a.Or() * b.Oi() + a.Oi() * b.Or();
}


void Complejo::multiplicacion( float x, Complejo a){
    r = x * a.Or();
    i = x * a.Oi();
}

void Complejo::conjugado(Complejo a){
    r = a.Or();
    i = -a.Oi();
}
int main (){
Complejo j1(2, 3);
Complejo j2, operacion;
float x;
cout << "Los valores por defecto para el numero j1 y j2 son: "<<endl;
j1.escribirComplejo();
cout << endl;
j2.escribirComplejo();
cout << endl;
cout << "Inicializacion de j2: "<< endl; j2.leerComplejo(); cout << endl;
j2.escribirComplejo();
cout<< "\n\n" << endl;
cout << "La suma de j1 y j2 es: " << endl; operacion.suma(j1, j2); operacion.escribirComplejo();
cout << "\n" << endl;
cout << "La resta de j1 y j2 es: " << endl; operacion.resta(j1, j2); operacion.escribirComplejo();
cout << "\n" << endl;
cout << "La multiplicacion entre j1 y j2 es: " << endl; operacion.multiplicacion(j1, j2); 
operacion.escribirComplejo();
cout << "\n" << endl;
cout << "La multiplicacion de j1 por una constante x (inctroduzca x) " << endl;
cin>> x; operacion.multiplicacion(x, j1); operacion.escribirComplejo();
cout << "\n" << endl;
cout << "La multiplicacion de j2 por una constante x (inctroduzca x) " << endl;
cin>> x; operacion.multiplicacion(x, j2); operacion.escribirComplejo();
cout << "\n" << endl;
cout << "El conjugado de j1 "; operacion.conjugado(j1); operacion.escribirComplejo(); 
cout << "El conjugado de j2 "; operacion.conjugado(j2); operacion.escribirComplejo(); 

return EXIT_SUCCESS;
}


