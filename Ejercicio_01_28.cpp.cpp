// Materia: Programación I, Paralelo 1
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creación: 24/08/2023
// Fecha modificación: 24/08/2023
// Número de ejericio: 28
// Problema planteado: Multiplicar dos números naturales, sin emplear el operador de la multiplicación, empleando sumas sucesivas.
#include <iostream>

using namespace std;

int main()
{
    //Entrada
    int num1,num2,contador,total;
    cout<<"Ingrese primer numero: "<<endl,cin>>num1;
    cout<<"Ingrese segundo numero: "<<endl,cin>>num2;
    //Proceso
    while (contador!=num2){
        total=total+num1;
        contador=contador+1;
    }
    //Salida
    cout<<"Resultado: "<<total;
    return 0;
}
