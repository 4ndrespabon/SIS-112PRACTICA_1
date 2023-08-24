// Materia: Programación I, Paralelo 1
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creación: 24/08/2023
// Fecha modificación: 24/08/2023
// Número de ejericio: 22
// Problema planteado: En una fábrica de computadoras se planea ofrecer a los clientes un descuento que dependerá del número de computadoras que compre.
// Si las computadoras son menos de cinco se les dará un 10% de descuento sobre el total de la compra; 
// si el número de computadoras es mayor o igual a cinco pero menos de diez se le otorga un 20% de descuento;
// y si son 10 o más se les da un 40% de descuento.
// El precio de cada computadora es un valor que el usuario ingrese desde el teclado.
#include <iostream>

using namespace std;

int main()
{
    int n;
    double precio,preciototal;
    cout<<"Ingrese el numero de computadoras a comprar: ",cin>>n;
    for (int i=1;i<=n;i++){
        cout<<"Ingrese el valor de la computadora numero ("<<i<<"): ";
        cin>>precio;
        preciototal=preciototal+precio;
    }
    cout<<"El precio total a pagar sin descuento es de: "<<preciototal<<endl;
    if (n<5){
        cout<<"El precio a pagar con descuento es de: "<<(preciototal)-((preciototal)*0.10);
    } else if (n>=5 && n<10){
        cout<<"El precio a pagar con descuento es de: "<<(preciototal)-((preciototal)*0.20);
    } else if (n>=10){
        cout<<"El precio a pagar con descuento es de: "<<(preciototal)-((preciototal)*0.40);
    }

    return 0;
}
