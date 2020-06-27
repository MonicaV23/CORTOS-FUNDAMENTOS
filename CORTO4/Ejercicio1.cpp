#include <iostream>
using namespace std;
void Cod()
{
    char palabra[150];
    char *murcielago = "murcielago";
    char *code = "0123456789";
    int x = 0, j;
    cout << "Ingresa una palabra :D" << endl;
    gets(palabra);
    while (palabra[x] != '\x0')
    {
        for (j = 0; j < 10; j++)
            if (palabra[x] == murcielago[j])
                palabra[x] = code[j];
        x++;
    }
    cout << "Tu palabra codificada es:";
    cout << ("%s\n", palabra);
}
int main()
{
    cout << "Hola :D" << endl;
    Cod();
    return 0;
}
