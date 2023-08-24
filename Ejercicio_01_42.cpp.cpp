// Materia: Programación I, Paralelo 1
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creación: 24/08/2023
// Fecha modificación: 24/08/2023
// Número de ejericio: 42
// Problema planteado: En una granja se requiere determinar el promedio de calidad de las n gallinas que hay en la granja.
// La calidad de cada gallina se obtiene según la fórmula:
// Calidad = (peso de la gallina * altura de la gallina)/Numero de huevos que pone

#include <iostream>

using namespace std;

int main()
{
    int n,numhuevos;
    float peso, altura;
    cout<<"Ingrese numero de gallinas: "<<endl,cin>>n;
    for (int i=1; i<=n; i++){
        cout<<"---------------------------------------"<<endl;
        cout<<"Gallina "<<i<<endl;
        cout<<"Peso: ",cin>>peso;
        cout<<"Altura: ",cin>>altura;
        cout<<"Numero de huevos que pone: ",cin>>numhuevos;
        cout<<"La calidad de la gallina es de: "<<(peso*altura)/numhuevos<<endl;
    }

    return 0;
}
