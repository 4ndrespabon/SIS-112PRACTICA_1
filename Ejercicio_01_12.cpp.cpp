// Materia: Programación I, Paralelo 4
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creación: 21/08/2023
// Fecha modificación: 24/08/2023
// Número de ejericio: 12
// Problema planteado: Mostrar los primero 100 número primos.
#include <iostream>

using namespace std;

int main() {
    int contador=1;
    int num=2; 
    cout<<"Los primeros 100 números primos son: "<<endl;

    while (contador<=100) {
        bool esPrimo=true;
        for (int i=2; i*i<=num; i++) {
            if (num%i==0) {
                esPrimo = false;
                break;
            }
        }
        if (esPrimo) {
            cout<<num<< " ";
            contador++;
        }
        num++;
    }
    cout<<endl;

    return 0;
}


