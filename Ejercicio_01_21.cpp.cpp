// Materia: Programación I, Paralelo 1
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creación: 24/08/2023
// Fecha modificación: 24/08/2023
// Número de ejericio: 21
// Problema planteado: Leer un numero n y también un intervalo de cerrado de valores (a,b),
// si el numero está dentro del intervalo obtenga su cuadrado (n*n), 
// si es menor que el límite inferior, obtenga su valor inverso (1/n),
// si está por encima del intervalo obtenga su mitad (n/2).
#include <iostream>

using namespace std;

int main()
{
    //Entrada
    int n,a,b;
    cout<<"Ingrese el numero: ",cin>>n;
    cout<<"Ingrese el limite inferior: ",cin>>a;
    cout<<"Ingrese el limite superior: ",cin>>b;
    //Proceso-Salida
    if (n>=a && n<=b){
        cout<<"El cuadrado de el numero es: "<<n*n<<endl;
    } else if (n>b) {
        cout<<"La mitad del numero es: "<<n/2.0<<endl;
    } else if (n<a) {
        cout<<"El inverso del numero es: "<<1.0/n<<endl;
    }
    return 0;
}
