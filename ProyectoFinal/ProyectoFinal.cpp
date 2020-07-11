#include <iostream>
#include <string.h>
using namespace std;
const int longCad = 20;
struct costoPorArticulo
{
    char nombreArticulo[longCad + 1];
    int cantidad;
    float precio;
    float costoPorArticulo;
};

void lectura(int x, costoPorArticulo Articulo[300])
{
    int i;
    for (i = 0; i < x; i++)
    {
        fflush(stdin);
        cout << "Escribe el nombre del articulo: ";
        cin.getline(Articulo[i].nombreArticulo, 20);
        cout << "Cuantos articulos son:  ";
        cin >> (Articulo[i].cantidad);
        cout << "El precio unitario:$ ";
        cin >> (Articulo[i].precio);
        cout << endl
             << endl;
    }
}
void calculo(int x, costoPorArticulo Articulo[300])
{
    int i;
    for (i = 0; i < x; i++)
    {
        Articulo[i].costoPorArticulo = Articulo[i].cantidad * Articulo[i].precio;
    }
}
void despliegue(int x, costoPorArticulo Articulo[300])
{
    int i;
    for (i = 0; i < x; i++)
    {
        cout << "Nombre: " << Articulo[i].nombreArticulo << endl;
        cout << "Cantidad de aticulos: " << Articulo[i].cantidad << endl;
        cout << "Precio unitario:$ " << Articulo[i].precio << endl;
        cout << "Precio total por articulo:$ " << Articulo[i].costoPorArticulo << endl
             << endl;
    }
}
float retornarValor(int x, costoPorArticulo Articulo[300])
{
    float TOTAL = 0;
    int i;
    for (i = 0; i < x; i++)
    {
        TOTAL += Articulo[i].costoPorArticulo;
    }
    return TOTAL;
}

int main()
{
    int x;
    cout << endl;
    cout << "              ***************          " << endl;
    cout << "              SUPER LAS VEGAS          " << endl;
    cout << "              ***************          " << endl
         << endl
         << endl;
    cout << "Ingrese el numero de articulos que lleva: ";
    cin >> x;
    cout << endl;
    cin.ignore(100, '\n');
    costoPorArticulo FACTURACION[x];
    lectura(x, FACTURACION);
    calculo(x, FACTURACION);
    despliegue(x, FACTURACION);
    cout << " El total a pagar es: " << retornarValor(x, FACTURACION)<< endl;
    return 0;
}