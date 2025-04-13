#include <iostream>

using namespace std;

class MiClase{
    public:
        MiClase();
        MiClase(string _nombre, string _edad);
        string carrera = "Electronica";
        string obtenerNombre(); // getters
        string obtenerEdad();   //

        void ponerNombre(string _nombre);     // setters
        void ponerEdad(string _edad);

    private:
        string nombre;
        string edad;
};

MiClase::MiClase(){
    nombre = "No fue aportado";
    edad = "No fue aportada";
}
MiClase::MiClase(string _nombre, string _edad){
    nombre = _nombre;
    edad = _edad;
}
string MiClase::obtenerNombre(){
    return nombre;
}
string MiClase::obtenerEdad(){
    return edad;
}

void MiClase::ponerNombre(string _nombre){
    nombre = _nombre;
}
void MiClase::ponerEdad(string _edad){
    edad = _edad;
}

int main(int argc, char **argv){
    MiClase persona1, persona2("Juan Oyola", "32");
    cout << persona1.obtenerNombre()<< "\t\t" <<
    persona1.obtenerEdad() << endl;
    cout << persona2.obtenerNombre() << "\t\t" <<
    persona2.obtenerEdad() << endl;
    persona1.ponerNombre("Heroberto Funes");
    persona1.ponerEdad("14");
    cout << persona1.obtenerNombre()<< "\t\t" <<
    persona1.obtenerEdad() << endl;
    return 0;
}
