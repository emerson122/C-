//Programa que calcula las cuatro operaciones básicas con funciones y parametros por valor

#include<iostream>
using namespace std;
void imprimirMensaje(void) {
	cout<<"Programa que calcula las cuatro operaciones basicas\n";
	cout<<"utilizando funciones y parametros por valor\n";
	cout<<"1.- Suma \t\t 2.- Resta\n";
	cout<<"3.- Multiplicacion \t 4.- Division\n";	
}

float suma(float pn1, float pn2) {
	return pn1 + pn2;
}//fin de la funcion suma

float resta(float pn1, float pn2) {
	return pn1 - pn2;
}//fin de la funcion resta
float multi(float pn1, float pn2) {
	return pn1 * pn2;
}
float div(float pn1, float pn2){
		return  pn1 / pn2;
}
int main() {
	float num1, num2, res=0;
	int opcion;
	imprimirMensaje();
	cout<<"Elija una opcion: ";
	cin>>opcion;
	
	if(opcion<5){ 
	cout<<"Ingrese dos numeros: ";
	cin>>num1>>num2;
}
	switch (opcion) {
		case 1: res = suma(num1, num2);
				cout<<"La suma es: "<< res<<endl;
				break;
		case 2: res = resta(num1, num2);
				cout<<"La resta es: "<< res<<endl;
				break;
		case 3: res = multi(num1,num2);
				cout<<"La multiplicacion es: "<< res<<endl;
				break;
		case 4: res = div(num1,num2);
				cout<<"La division es: "<< res<<endl;
				break;
		default:
				cout<<"\n";
				cout<<"La opcion elegida no es valida"<<endl;
		
		
	}//fin del switch
	
	return 0;
}
