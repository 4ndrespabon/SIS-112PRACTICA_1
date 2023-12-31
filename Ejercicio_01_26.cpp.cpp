// Materia: Programación I, Paralelo 1
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creación: 24/08/2023
// Fecha modificación: 24/08/2023
// Número de ejericio: 26
// Problema planteado: En una tienda comercial, las amas de casa compran diversos artículos de primera necesidad.
// Una ama de casa selecciona los artículos de su preferencia pasando por los distintos mostradores,
// cada artículo elegido es colocado en un carrito de mano, 
// para asegurar el pago exacto de los artículos comprados 
// la señora anota el precio y la cantidad del artículo, estableciendo cuanto pagara por este articulo; 
// así sumara los demás artículos. 
// Ayude a esta ama de casa a obtener el total de sus comprar, luego de llenar el carrito de manos con todos los artículos de primera necesidad.

#include <iostream>

using namespace std;

int main()
{
    double precioindividual,preciototal;
    int cantidad,op=1;
    char nombre;
    while (op!=0){
        cout<<"Ingrese el nombre del articulo: ";
        cin>>nombre;
        cout<<"Ingrese precio del producto: ";
        cin>>precioindividual;
        cout<<"Ingrese la cantidad de este articulo: ";
        cin>>cantidad;
        cout<<"El precio total de este articulo es de: "<<cantidad*precioindividual<<endl;
        preciototal=preciototal+(cantidad*precioindividual);
        cout<<"Precio acumulado es de: "<<preciototal<<endl;
        cout<<"Para continuar presione cualquier tecla y para detener presione 0\n";
        cin>>op;
    }
    cout<<"Precio final es de: "<<preciototal;
    return 0;
}
