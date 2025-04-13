#include "pel.h"

pelicula::pelicula(){
    this->titulo = "Desconocido";
    this->director = "Desconocido";
    this->duracion = 0;
}

pelicula::pelicula(string _titulo){
    this->titulo = _titulo;
    this->director = "Desconocido";
    this->duracion = 0;
}

pelicula::pelicula(string _titulo, string _director, int _duracion){
    this->titulo = _titulo;
    this->director = _director;
    this->duracion = _duracion;
}

void pelicula::mostrarinformacion(){
    cout << "Titulo: " << this->titulo << endl;
    cout << "Director: " << this->director << endl;
    cout << "Duracion: " << this->duracion << " minutos" << endl;
}

void pelicula::obtenerinformacion(){
    cout << "Introduce el titulo de la pelicula: ";
    getline(cin, titulo);
    cout << "Introduce el director de la pelicula: ";
    getline(cin, director);
    cout << "Introduce la duracion de la pelicula: ";
    cin >> duracion;
}

string pelicula::gettitulo(){
    return titulo;
}

int pelicula::getduracion(){
    return duracion;
}

string pelicula::getdirector(){
    return director;
}

void pelicula::settitulo(string _titulo){
    titulo = _titulo;
}

void pelicula::setduracion(int _duracion){
    duracion = _duracion;
}

void pelicula::setdirector(string _director){
    director = _director;
}