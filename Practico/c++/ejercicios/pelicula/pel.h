//define la clase pelicula que represente una pelicula con argumentos como titulo, director, duración.
// sobrecarga el constructor para que acepte diferentes combinaciones de parametros
#include <iostream>
#include <string>
using namespace std;
using std::string;

class pelicula{
    
    public:
    pelicula();
    pelicula(string _titulo);
    pelicula(string _titulo, string _director, int _duracion);

    void obtenerinformacion();
    void mostrarinformacion();

    string gettitulo(); //getter
    int getduracion();
    string getdirector();
    
    void settitulo(string _titulo); //setter
    void setduracion(int _duracion);
    void setdirector(string _director);

    protected:
    string titulo;
    string director;
    int duracion;
};