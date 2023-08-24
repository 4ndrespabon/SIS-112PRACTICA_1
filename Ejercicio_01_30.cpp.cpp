// Materia: Programación I, Paralelo 1
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creación: 24/08/2023
// Fecha modificación: 24/08/2023
// Número de ejericio: 30
// Problema planteado: Calcular la siguiente sucesión

#include <iostream>

using namespace std;

int main()
{
    //Entrada
    int op;
    cout<<"Ingrese hasta que numero llegar en la sucesion: ",cin>>op;
    //proceso-salida
    for (int i=1;i<=op;i++){
        if (i%2==0){
            cout<<"-("<<i+1<<"/"<<i<<")";
        } else{
            cout<<"+("<<i+1<<"/"<<i<<")";
        }
    }
    return 0;
}
