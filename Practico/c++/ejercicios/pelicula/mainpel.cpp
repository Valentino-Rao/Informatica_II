#include "pel.h"

int main(){
    pelicula p1("El Padrino");
    pelicula p2("El Padrino", "Francis Ford Coppola", 175);
    pelicula p3;
    pelicula p4(p1);
    
    p4.mostrarinformacion();
    p1.mostrarinformacion();
    p2.mostrarinformacion();
    p3.obtenerinformacion();
    p3.mostrarinformacion();

    return 0;
}