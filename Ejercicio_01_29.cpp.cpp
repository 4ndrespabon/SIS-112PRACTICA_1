// Materia: Programación I, Paralelo 1
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creación: 24/08/2023
// Fecha modificación: 24/08/2023
// Número de ejericio: 29
// Problema planteado: En una llantería se ha establecido una promoción de las llantas marca “Ponchadas”, 
// dicha promoción consiste en lo siguiente:
// Si se compran menos de cinco llantas el precio es de 300 Bs. cada una,
// de 250 Bs. si se compran de cinco a 10 y de 200 Bs. si se compran más de 10.
// Obtener la cantidad de dinero que una persona tiene que pagar por cada una de las llantas que compra y la que tiene que pagar por el total de la compra.

#include <iostream>

using namespace std;

int main()
{
    //Entrada
    int cantidad;
    cout<<"Ingresar cantidad de llantas a comprar: ",cin>>cantidad;
    //Proceso y salida
    if (cantidad<5){
        cout<<"El precio a pagar es de: "<<cantidad*300<<endl;
    } else if (cantidad>=5 && cantidad<10){
        cout<<"El precio a pagar es de: "<<cantidad*250<<endl;
    } else {
        cout<<"El precio a pagar es de: "<<cantidad*200<<endl;
    }
    return 0;
}
