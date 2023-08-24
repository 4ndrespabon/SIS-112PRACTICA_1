// Materia: Programación I, Paralelo 1
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creación: 24/08/2023
// Fecha modificación: 24/08/2023
// Número de ejericio: 36
// Problema planteado: Dadas las edades y alturas de n alumnos, mostrar la edad y la estatura media,
// la cantidad de alumnos mayores de 18 años, y la cantidad de alumnos que miden más de 1.75 m
#include <iostream>

using namespace std;

int main()
{
    //Entrada
    int n,edad,mas18;
    double estatura,edadtotal,estaturatotal,mas175;
    cout<<"Ingrese la cantidad de alumnos: "<<endl,cin>>n;
    for (int i=1;i<=n;i++){
        cout<<"Ingrese edad de alumno "<<i<<endl,cin>>edad;
        if (edad>=18){//condicion
            mas18++;
        }
        cout<<"Ingrese la estatura del alumno en metros "<<i<<endl,cin>>estatura;
        if (estatura>=1.75){//condicion
            mas175++;
        }
        edadtotal+=edad;
        estaturatotal+=estatura;
    }
    //Salida
    cout<<"Edad media: "<<edadtotal/n<<endl;
    cout<<"Estatura media: "<<estaturatotal/n<<endl;
    cout<<"Mayores de 18 años: "<<mas18<<endl;
    cout<<"Miden mas de 1.75: "<<mas175<<endl;
    return 0;
}
