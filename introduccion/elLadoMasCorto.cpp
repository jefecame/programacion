/*
B. El lado más corto
Puntos	100	Límite de memoria	32 MiB
Límite de tiempo (caso)	1s	Límite de tiempo (total)	1m0s
Entrada/Salida	Consola	Tamaño límite de entrada (bytes)	10 KiB
Editar problema
Descripción
Escribe un programa que, dadas las coordenadas de los vértices de un cuadrilátero,
calcule la longitud de su lado más corto.

Entrada
Ocho reales x1, y1, x2, y2, x3, y3, x4, y4. Puedes suponer que  y que los vértices se 
listan ordenados en el sentido de las manecillas del reloj.

Salida
Un real "d" que sea la longitud del lado más corto del cuadrilátero. Tu programa se
considerará correcto si el valor calculado es razonablemente cercano a la respuesta exacta.

Ejemplo

Entrada
10 10
20 10
22 4
7 0

Salida
6.324555

Fuente: UAM Azcapotzalco 2018
Subido por: rcc
*/

#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float d, x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    return 0;
}
