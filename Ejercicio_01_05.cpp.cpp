// Materia: Programación I, Paralelo 4
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creación: 19/08/2023
// Fecha modificación: 19/08/2023
// Número de ejericio: 5
// Problema planteado: Calcular la distancia entre dos puntos P1 y P2 localizados en un plano X Y 
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    //Asignacion de variables
    double x1=0;
    double x2=0;
    double y1=0;
    double y2=0;
    double resultado=0;
    
    cout<<"Ingrese x2"<<endl;
    cin>>x2;
    cout<<"Ingrese x1"<<endl;
    cin>>x1;
    cout<<"Ingrese y2"<<endl;
    cin>>y2;
    cout<<"Ingrese y1"<<endl;
    cin>>y1;
    
    cout<<"La distancia entre dos puntos P1 y P2 localizados en un plano X Y "<<sqrt(pow((x2-x1),2)+pow((x2-x1),2))<<endl;
    
    return 0;
}
