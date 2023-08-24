// Materia: Programación I, Paralelo 1
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creación: 24/08/2023
// Fecha modificación: 24/08/2023
// Número de ejericio: 43
// Problema planteado: Obtener el promedio de números enteros positivos introducidos por teclado,
// el algoritmo se detiene cuando se lea un número negativo o cero.

#include <iostream>

using namespace std;

int main()
{
    //Entrada
    int n=1,total=-1;
    float contador=-1;
    //Proceso
    while (n>0){
        contador=contador+1;
        total=total+n;
        cout<<"Ingrese numero: ",cin>>n;
    }
    //Salida
    cout<<contador<<" "<<total<<endl;
    cout<<"Promedio: "<<total/contador;

    return 0;
}
