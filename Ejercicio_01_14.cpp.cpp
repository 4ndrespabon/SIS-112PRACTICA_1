// Materia: Programación I, Paralelo 1
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creación: 23/08/2023
// Fecha modificación: 23/08/2023
// Número de ejericio: 14
// Problema planteado: Escriba un programa que dato varios valores numéricos,
// hasta el que el usuario ingrese el valor de cero calculo la suma y el promedio de estos
#include <iostream>

using namespace std;

int main()
{
    int i=1,suma;
    double contador;
    while (i!=0){
        cout<<"Ingrese el numero"<<endl;
        cin>>i;
        suma=suma+i;
        cout<<suma<<endl;
        contador+=1;
    }
    cout<<"Promedio: "<<suma/(contador-1)<<endl;
    return 0;
}
