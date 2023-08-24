// Materia: Programación I, Paralelo 1
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creación: 23/08/2023
// Fecha modificación: 23/08/2023
// Número de ejericio: 16
// Problema planteado: Leer un número entero que represente un valor en segundos y convierta en: horas, minutos y segundos.
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Ingrese el numero en segundos"<<endl;
    cin>>n;
    //Proceso-Salida
    cout<<n<<" segundos = "<<n/3600.0<<" hora/s"<<endl;
    cout<<n<<" segundos = "<<n/60.0<<" minuto/s"<<endl;
    cout<<n<<" segundos = "<<n<<" segundo/s"<<endl;
    return 0;
}
