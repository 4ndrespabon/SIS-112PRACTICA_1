// Materia: Programación I, Paralelo 1
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creación: 23/08/2023
// Fecha modificación: 23/08/2023
// Número de ejericio: 20
// Problema planteado: Leer tres números enteros y si son diferentes entre sí determine con algún mensaje el menor.
#include <iostream>

using namespace std;

int main()
{
    //Entrada
    int a,b,c;
    cout<<"Ingrese el primer numero: ",cin>>a;
    cout<<"Ingrese el segundo numero: ",cin>>b;
    cout<<"Ingrese el tercer numero: ",cin>>c;
    //Proceso-Salida
    if (a<b && a<c){
        cout<<a<<" es el menor numero"<<endl;
    }    
    
    if (b<c && b<a){
        cout<<b<<" es el menor numero"<<endl;
    }
    
    if (c<b && c<a){
        cout<<c<<" es el menor numero"<<endl;
    }
    return 0;
}
