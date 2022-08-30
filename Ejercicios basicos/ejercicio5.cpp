/*5. Construya un diagrama de flujo y el correspondiente programa en C++ que, visualice el siguiente doble mensaje:
Introduzca un mes:
*Introduzca un dia:*/

#include<iostream>                            //incluir libreria iostream

using std::cout;
using std::endl;
using std::cin;                               //incluir la libreria de los namespace

int main(){
    int mes,dia;                              //declaracion de variables mes y diagrama
    cout<<"Introduzca un mes: "<<endl;        //peticion de datos para la variable del mes
    cin>>mes;                                 //Guardar datos en la variable mes
    cout<<"Introduzca un dia: "<<endl;        //peticion de datos para la variable del dia 
    cin>>dia;                                 //Guardar los datos  en la variable diagrama
    
   switch(mes)                                //inicio de la setencia switch
   {
	   case 1:
	    		cout<<"\n";
	    		cout<<"Enero"<<endl;
	   break;
	   case 2:
	   			cout<<"\n";
	    		cout<<"Febrero"<<endl;
	   break;
	   case 3:
	    		cout<<"\n";
	   			cout<<"Marzo"<<endl;
	   break;
	   case 4:
	    		cout<<"\n";
	    		cout<<"Abril"<<endl;
	   break;
	   case 5:
	    		cout<<"\n";
	   			cout<<"Mayo"<<endl;
	   break;
	  case 6:
	    		cout<<"\n";
	    		cout<<"Junio"<<endl;
	   break;
	   case 7:
	    		cout<<"\n";
	    		cout<<"Julio"<<endl;
	   break;
	   case 8:
	    		cout<<"\n";
	    		cout<<"Agosto"<<endl;
	   break;
	   case 9:
	    		cout<<"\n";
	    		cout<<"Septiembre"<<endl;
	   break;
	   case 10:
	   			cout<<"\n";
	   			 cout<<"Octubre"<<endl;
	   break;
	   case 11:
	   			cout<<"\n";
	    		cout<<"Noviembre"<<endl;
	   break;
	   case 12:
	   			cout<<"\n";
	    		cout<<"Diciembre"<<endl;
	   break;
	   
	   default:
	   			cout<<"\n";
	   			cout<<"El numero introducido no es valido como Mes."<<endl;
	  }                                                                //intruccion default que se desplegara si el numero no es de 1 al 12
	  
	  if(dia>=1 && dia<=31){ //si dia es mayor a 1 y menor 31 se desplega y se cumple la condicion del mes se imprime en la pantalla
        	cout<<"\n";
        	cout << "la fecha es el dia numero: "<<dia<<endl;
         	if (mes<=12){
         		cout<<"del mes numero: "<< mes << endl;
        	}
		}
    	else{
        	cout << "el numero ingresado no es un dia del Mes." << endl;  //setencia else se imprime si el el numero ingresado no es un dia del mes
		}
	   	
  return 0;
}
