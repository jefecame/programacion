/*
D. Programando fórmulas raras
Puntos	100	Límite de memoria	32 MiB
Límite de tiempo (caso)	650ms	Límite de tiempo (total)	1m0s
Entrada/Salida	Consola	Tamaño límite de entrada (bytes)	10 KiB
Editar problema
Descripción
Te gustan mucho las matemáticas pero no eres muy rápido haciendo los cálculos manualmente. Como estás aprendiendo a programar, crees que podrías solucionar este problema haciendo un programa que sea capaz de evaluar rápidamente ciertas expresiones aritméticas. Para probar tus habilidades, has dedicido escribir un programa que evalúe una fórmula que tú inventaste, la cual es:


Escribe un programa que calcule el resultado de evaluar la fórmula anterior.

Entrada
Tres reales . Puedes suponer que .

Salida
Un real que sea el valor de la fórmula evaluada. Tu programa se considerará correcto si el valor calculado es razonablemente cercano a la respuesta exacta.

Ejemplo
Entrada	Salida
1 2 3
0.563529
342.1564 876.3426 672.6367
510.746063
Fuente: UAM Azcapotzalco 2018
Subido por: rcc
*/

#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double r, p, x, y, z;
    
    cin >> x >> y >> z;
    
    p = M_PI;
    r = ( x + x * ( y + pow( z, 2 ) ) ) / ( ( x + p ) * ( y + p ) );
    
    cout << r << endl;
    
    return 0;
}