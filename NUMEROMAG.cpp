#include <iostream>
#include <math.h>
using namespace std;
    //NUMERO MAGICO//
    int AdivinarNumero(int numeroganador,int numero){//Funcion a utilizar //
        int eleccion, NUMEROGANADOR=23, intento=1, opciones=0;
    do{
            cout<<endl<<endl;
            cout<<"1. A JUGAR!"<<endl;
            cout<<"2. SALIR "<<endl;
            cout<<"Que deseas hacer ahorita? ";cin>>opciones;
            cout<<endl;
            switch (opciones)
            {
                case 1:
                cout<<"Intento #"<<intento<<endl;
                    intento++;
                        /*Este if esta siendo utilizado para que defina las acciones 
                        a realizar de acuerdo a el numero de intentos que tiene el usuario*/
                        if(intento<5){
                            cout<<"RECUERDA! TIENE QUE SER NUMERO DEL 1 AL 100 :D ";
                            cout<<"INGRESA TU NUMERO :D "<<endl;cin>>eleccion;
                            /*Aqui comiencia el if que determina lo que va a suceder dependiendo del  numero
                            ingresado por el usuario */
                            if(eleccion>NUMEROGANADOR ){
                                cout<<" EL NUMERO ES MAYOR QUE NUMERO MAGICO :( "<<endl;
                                cout<<" SIGUE INTENTANDO! :D ";
                            }else if(eleccion==NUMEROGANADOR){
                                cout<<"FELICIDADES! ADIVINASTE EL NUMERO MAGICO! TU PREMIO ES...NO HAY PREMIO! "<<endl;
                                opciones=2;
                                cout<<"GRACIAS POR JUGAR Y SER MI AMIGO UN RATO :D ADIOS!"<<endl<<endl;
                            }else if(eleccion<NUMEROGANADOR){
                                cout<<" EL NUMERO ES MENOR AL NUMERO MAGICO :("<<endl;
                                cout<<" SIGUE INTENTANDO! :D ";
                            } //Aca termina todo el if correspondiente al numero ingresado por el usuario y el numero ya guardado//
                        }else if(intento==5){
                            cout<<"ES TU ULTIMO INTENTO. TU PUEDES HACERLO!";
                            cout<<"INGRESA TU NUMERO :D "<<endl<<endl;cin>>eleccion;
                            cout<<"GRACIAS POR PARTICIPAR :D";
                        }else if(intento>5){
                            cout<<"Lo siento, has gastado todas tus oportunidades :C ";
                            cout<<"GRACIAS POR PARTICIPAR :D";
                         }
                 break;
                 default:
                    cout<<"GRACIAS POR JUGAR Y SER MI AMIGO UN RATO :D ADIOS!"<<endl;
                    break;
            }    
         }while(opciones!=2);
        return opciones;
    }

int main(){
    int Juego,opcion,numero;
    cout<<endl;
    cout<<"BIENVENIDO A LA RULETA DEL NUMERO ESPEPCIAL!"<<endl;
    cout<<"Intenta adivinar el numero GANADOR :D "<<endl;
    cout<<"TIENES 5 INTENTOS PARA SABER EL NUMERO MAGICO :D "<<endl<<endl;

    Juego=AdivinarNumero(opcion, numero); /*Funcion que se ha detllado enteriormente
     siendo aplicada en el main*/ 

    return 0;   
}