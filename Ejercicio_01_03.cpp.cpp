// Materia: Programación I, Paralelo 4
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creación: 17/08/2023
// Fecha modificación: 17/08/2023
// Número de ejericio: 3
// Problema planteado: Promedio de notas, escriba un programa que lea N notas y saque le promedio general. 
#include <iostream>

using namespace std;

int main()
{
    int n=0;
    float suma,nota;
    
    cout<<"Ingrese el numero de notas a leer"<<endl;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        cout<<"Ingrese la nota"<<endl;
        cin>>nota;
        suma=suma+nota;
    }
    cout<<"El promedio de todas las notas es: "<<suma/n<<endl;
    return 0;
}
