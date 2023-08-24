// Materia: Programación I, Paralelo 1
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creación: 24/08/2023
// Fecha modificación: 24/08/2023
// Número de ejericio: 44
// Problema planteado: La comercial “La Estrella del Sur” vende n productos en un día,
// de los cuales factura al precio de cada uno con un IVA del 13% y si el monto final se excede en 2500 Bs, se aplica un descuento del 5%.
// Obtener la suma total de las ventas realizadas en el día y calcular el pago del IVA del 13% al servicio de Impuestos Nacionales.

#include <iostream>

using namespace std;

int main()
{
    int n;
    float precio,preciototal,ivatotal;
    cout<<"Ingrese numero de productos vendidos: ",cin>>n;
    for (int i=1;i<=n;i++){
        cout<<"Ingrese precio del producto "<<i<<endl,cin>>precio;
        preciototal=preciototal+(precio*1.13);
    }
    ivatotal=preciototal*0.13;
    if (preciototal>2500){
        double descuento=preciototal*0.05;
        preciototal-=descuento;
    }
    cout<<"Monto total ventas: "<<preciototal<<endl;
    cout<<"Pago total de IVA: "<<ivatotal<<endl;
    return 0;
}
