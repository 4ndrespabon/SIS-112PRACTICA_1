// Materia: Programación I, Paralelo 1
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creación: 24/08/2023
// Fecha modificación: 24/08/2023
// Número de ejericio: 34
// Problema planteado: Generar la secuencia: 1, 1, 2, 4, 8, 16, 23, 28, 38, 49,..., para n términos

#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Ingrese la cantidad de términos que desea generar: ";
    cin >> n;

    if (n < 1) {
        cout << "La cantidad de términos debe ser al menos 1." << endl;
        return 1;
    }

    cout << "La secuencia generada es:" << endl;

    int potenciaDeDos = 1;
    int incremento = 1;

    for (int i = 0; i < n; i++) {
        cout << potenciaDeDos + incremento << " ";
    
        potenciaDeDos *= 2;
        incremento += 7;
    }

    cout << endl;

    return 0;
}

