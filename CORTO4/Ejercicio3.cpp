#include <iostream>
using namespace std;
float Promedio(float promedio, float nota1, float nota2, float nota3, float nota4, float nota5)
{
    int ESTUDIANTE = 0;
    cout << "Ingrese el numero de estudiantes: ";
    cin >> ESTUDIANTE;
    for (int i = 0; i < ESTUDIANTE; i++)
    {
        cout << i + 1 << ".Estudiante" << endl;
        cout << "Ingresa la nota 1: ";
        cin >> nota1;
        cout << "Ingresa la nota 2: ";
        cin >> nota2;
        cout << "Ingresa la nota 3: ";
        cin >> nota3;
        cout << "Ingresa la nota 4: ";
        cin >> nota4;
        cout << "Ingresa la nota 5: ";
        cin >> nota5;
        promedio = ((nota1 * 0.2) + (nota2 * 0.2) + (nota3 * 0.2) + (nota4 * 0.2) + (nota5 * 0.2));
        cout << "El promedio del alumno es: " << promedio << endl;
        if (promedio < 6.0)
        {
            cout << "El alumno ha reprobado" << endl
                 << endl;
        }
        else
        {
            cout << "El alumno a aprobado" << endl
                 << endl;
        }
    }
    return 0;
}

int main()
{
    float promedio, nota1, nota2, nota3, nota4, nota5;
    int estudiante[100];
    cout << "Calculo de promedio" << endl;
    Promedio(promedio, nota1, nota2, nota3, nota4, nota5);

    return 0;
}
