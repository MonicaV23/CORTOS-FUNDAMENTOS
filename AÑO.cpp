#include <iostream>
using namespace std;
/*La funcion detallada a continuacion nos servira para determinar
si un año,ingresado por el usuario, es bisiesto o no*/
int BISIESTO(int year){
        if (year%400==0){
            cout<<"El año ingresado es bisiesto :D";
        }else if(year%4==0 && year%100!=0){
            cout<<"El año es bisiesto :D";
        }else{
            cout<<"El año ingresado NO es bisiesto ";
        }
        return 0;
}
int main(){
    int Tipo,Y;
    cout<<endl;
    cout<<"EL AÑO ES BISIESTO O NO LO ES?"<<endl;
    cout<<"Escribe el año: ";cin>>Y;
    Tipo=BISIESTO(Y);
    return 0;
}