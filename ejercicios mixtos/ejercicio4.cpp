/*     4. Codifique un programa que permita al usuario convertir el número ingresado por el usuario a su valor correspondiente de acuerdo a las siguientes opciones listadas a continuación:
    1. Kilómetros a millas 
    2. Pies a metros
    3. Centímetros a pulgadas
El programa debe proporcionar el resultado de la operación elegida por el usuario.*/
#include<iostream>
using namespace std;
void mensaje(){
	cout<<"\tPrograma que encuetra el valor de las unidades de longitud\n";
	}
void opciones(){
	cout<<"Convertir de:\n";
	cout<<"1.kilometros a millas\t";
	cout<<"2.Pies a metros\n";
	cout<<"3.Centimetro a pulgadas\n";
	cout<<"\nIngrese el numero de la opcion\n";
	}
float kilometros(float fnum){
	  return fnum*0.621371;
	}
float pies(float fnum){
	  return fnum/3.281;
	
	}
float centimetros(float fnum){
	return fnum/2.54;
	} 
int main(){
	int opci,num=0;
	float resul=0;
	mensaje();
	cout<<"\tOpciones\n";
	opciones();
	cin>>opci;
	if(opci<4){ 
	cout<<"Ingrese el valor de la  unidad a convertir: ";
	cin>>num;
}
	switch(opci){
		case 1: resul=kilometros(num);
				cout<<"\nKilometro a millas son: "<<resul;						
		break;
		case 2: resul=pies(num);
				cout<<"\npies a metros son: "<<resul<<endl;
		break;
		case 3: resul=centimetros(num);
				cout<<"\ncentrimetros a pulgadas son: "<<resul<<endl;
		
		break;
		default:
		cout<<"la opcion elegida no es valida";
		
		}
	return 0;
	}
