#include <iostream>
using namespace std;
void CalMedia(float Estatura[], float E)
{
    int i;
    float suma, n, MEDIA=0;
    cout << endl;
    cout << "PROGRAMA DE CALCULO DE MEDIA DE ESTATURAS" << endl
         << endl;
    cout << "Cuantas estaturas va a promediar? ";
    cin >> n;
    if (n > 25)
    {
        cout << "Se sobrepasa el arreglo" << endl
             << " El programa ha  finalizado" << endl;
    }
    else
    {
        cout << "Digite las " << n << " estaturas:" << endl;
        for (i = 0; i < n; i++)
            cin >> Estatura[i];
        suma = 0;
        for (i = 0; i < n; i++)
            suma = suma + Estatura[i];
        cout << "La suma de los elementos del arreglo es: " << suma << endl;
        for (i = 0; i < n; i++)
            MEDIA = suma / n;
        cout << "La media de las " << n << " estaturas es: " << MEDIA << endl;
    }
}

/*void Comparacion(float ESTATURA[], float E)
{
    float MEDIA=0, Arriba, Abajo;
    int i, n;

    for (i = 0; i < n; i++)
        if (ESTATURA[i] < MEDIA)
        {
            Abajo++;
            cout << "Hay " << Abajo << " numeros encima de la media." << endl;
        }
        else if (ESTATURA[i] > MEDIA)
        {
            Arriba++;
            cout << "Hay " << Arriba << " numeros encima de la media." << endl;
        }
}*/
int main()
{
    cout << endl;
    int i;
    float estatura[25], x;
    CalMedia(estatura, x);
    /*Comparacion(estatura, x);*/
    return 0;
}
