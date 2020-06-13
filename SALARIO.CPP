#include <iostream>
using namespace std;
      
/*El ejercicio nos dice que tenemos una empresa y se desea calcular el salario mensual de los empleados.*/
  float Salario(int empleados,int horas, int extras){
    float DESCUENTOS=0, SalTotal,SalReal,empleado=0;
    //Se ha determinado que las variables sean tipo float por los decimales//
    cout<<"Ingrese el numero de empleados: ";cin>>empleado;
      for(int i=0;i<empleado;i++){
    cout<<i+1<<".Empleado"<<endl;
    cout<<"Ingresa horas laboradas: ";
    cin>>horas;
    cout<<"Ingresa horas extras: ";
    cin>>extras;
         SalTotal=(horas*1.75)+(extras*2.50);
         cout<<endl;
         cout<<"El salario total es:$ "<<SalTotal<<endl;
            if(SalTotal>500){
                    DESCUENTOS=((SalTotal*0.04)+(SalTotal*0.0625)+(SalTotal*0.10));
                    cout<<"El descuento total que se realizara es:$ "<<DESCUENTOS<<endl;
                    SalReal=(SalTotal-DESCUENTOS);
                    cout<<"El salario real es:$ "<<SalReal<<endl<<endl;
            }else if(SalTotal<500){
                 DESCUENTOS=((SalTotal*0.04)+(SalTotal*0.0625));
                    cout<<"El descuento total que se realizara es:$ "<<DESCUENTOS<<endl;
                    SalReal=(SalTotal-DESCUENTOS);
                    cout<<"El salario real es:$ "<<SalReal<<endl<<endl;
            }
      }
      return 0;
  }
int main(){
    float horas,extra,salario,empleados;
    cout<<endl;
    cout<<"CALCULO DE SALARIO EN EL SALVADOR"<<endl<<endl;
    cout<<"¿Quieres saber el salario mensual ya con los descuentos aplicados?"<<endl<<endl;

    salario=Salario(extra,horas,empleados);
    return 0;
}


