/*
C. Repartiendo cachorros
Puntos	100	Límite de memoria	32 MiB
Límite de tiempo (caso)	1s	Límite de tiempo (total)	1m0s
Entrada/Salida	Consola	Tamaño límite de entrada (bytes)	10 KiB

Descripción
La perrita de Don Pancho acaba de dar a luz C cachorros. Como a Don Pancho le gustan mucho los perritos,
planea quedarse con al menos P de ellos y los demás intentará repartirlos equitativamente entre el resto de su familia,
que incluye a su esposa además de sus H hijos. Los cachorros que no pueda repartir equitativamente entre ellos también
se los quedará él. ¿Con cúantos cachorros se quedará Don Pancho?

Entrada
Tres enteros C, P, y H . Puedes suponer que 0 <= C, P, H <= 1000 y P <= C.

Salida
Un entero que sea el número de cachorros con los que se quedará Don Pancho.

Ejemplo
Entrada	Salida
5 2 1
3
Fuente: UAM Azcapotzalco 2011
Subido por: rcc
*/

#include <iostream>
using namespace std;
int main() {
    
    // Declaración de variables
 
    short C; // cachorros nacidos
    short P; // mínimo de cachorros para Don Pancho
    short H; // hijos
    short X; // cahorros totales de don pancho (P + sobrantes)

    // Entrada

    cin >> C >> P >> H;

    // Operaciones

    X = P + ( C - P ) % ( H + 1 ); // total de cachorros para don pancho

    // Salida

    cout << X << endl;
    return 0;

}
