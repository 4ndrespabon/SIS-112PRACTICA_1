// Materia: Programación I, Paralelo 1
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creación: 24/08/2023
// Fecha modificación: 24/08/2023
// Número de ejericio: 35
// Problema planteado: Un supermercado decide efectuar una promoción de descuentos por el valor de las compras que efectúan sus clientes,
// esta promoción se basa en las siguientes condiciones:
// Si el total de ventas es < 100 Bs. no se aplica ningún descuento
// Si el total de ventas es de 100 Bs o más se aplica un 5% de descuento
// Si el total de ventas es 500 Bs o más se aplica un 8% de descuento
// Leer las compras efectuadas por n clientes y aplicar los descuentos para obtener el total de ventas efectuadas y el total de ventas con el descuento respectivo.
#include <iostream>

using namespace std;

int main()
{
    int n,ventas,ventassindescuento,nventasdescuento;
    double venta,montoventas,montoventasdescuento;
    cout<<"Ingrese el número de clientes: ",cin>>n;
    for (int i=1;i<=n;i++){ //Bucle para n ventas
        cout<<"Monto de la venta"<<endl,cin>>venta;
        if (venta<100){
            ventas=ventas+1;
            montoventas=montoventas+venta;
            ventassindescuento=ventassindescuento+venta;
        } else if (venta>=100 && venta<500){
            nventasdescuento=nventasdescuento+1;
            ventas=ventas+1;
            montoventas=montoventas+venta;
            montoventasdescuento=montoventasdescuento+(venta-(venta*0.05));
            cout<<(venta-(venta*0.05))<<" con descuento"<<endl; //Mostrar con descuento
        } else if (venta>=500){
            nventasdescuento=nventasdescuento+1;
            ventas=ventas+1;
            montoventas=montoventas+venta;
            montoventasdescuento=montoventasdescuento+(venta-(venta*0.08));
            cout<<(venta-(venta*0.08))<<" con descuento"<<endl; //Mostrar con descuento
        }
    }
    //Salida
    cout<<"Ventas totales: "<<montoventas<<endl;
    cout<<"Ventas sin descuento: "<<ventassindescuento<<endl;
    cout<<"Monto: "<<montoventas<<endl;
    cout<<"Ventas con descuento="<<nventasdescuento<<endl;
    cout<<"Monto: "<<montoventasdescuento<<endl;
    
    return 0;
}
