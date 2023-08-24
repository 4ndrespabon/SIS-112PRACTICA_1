// Materia: Programación I, Paralelo 1
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creación: 24/08/2023
// Fecha modificación: 24/08/2023
// Número de ejericio: 13
// Problema planteado: Indique la cantidad de dígitos que tiene un número entero

#include <iostream>

using namespace std;

int main()
{
    //Entrada
    int n=1,contador;
    cout<<"Ingrese el numero: "<<endl,cin>>n;
    //Proceso
    while (n>=1){
        n=n/10;
        contador +=1;
    }
    cout<<"Digitos: "<<contador<<endl;
    return 0;
}
