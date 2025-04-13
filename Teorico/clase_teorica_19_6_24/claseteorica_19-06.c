/*clase info 19-06
etapas
1)prepocesado ggc -E (define macros, constantes simbolicas, elimina comentarios, pega archivos de cabecera)
Macros, sustituye texto, se parece a una función

podemos pasarle al compilador -D (flag nueva) permite pasarle constantessimbolicas desde la bash
gcc -Wall -D(<constante simbolica>=<numero>) (archivo.c) ejemplo -DNUM=100, si pongo nada el valor por defecto es 1

compilacion condicional con
#ifdef <constante simbolica>
codigo
#endif
se puede usar desde la shell usando la flag usando la misma bandera -D
sirve para automatizar cosas y hacerlo mas agil
sale un archivo.i

2) compilación ggc -S traduce a lenguaje ensamblador
sale un archivo.s

3)ensamblado gcc -C traduce a lenguaje maquina
sale un archivo.o (objeto)

4)enlazado

Bibliotecas
Bibliotecas dinammicas o estaticas y su enlazada tmb puede ser estatico o dinamico
ldd tira contra que bibiliotecas está enlazado mi programa
las Bibliotecas dinamicas cargan una sola vez y se comparten siempre que se usen
las estaticas pasan a ser parte del codigo, ocupan mas memerio, siempre que lance el codigo tiene que volver a cargar, pero la ventaja es que se pueden pasar a mismas arquitecturas de forma mas facil
la carga estatica se utiliza con la flag -static<>
la carga dinamica se utiliza la flag -l<>
ver las capturas
