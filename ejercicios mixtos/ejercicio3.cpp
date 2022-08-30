/*Realice un programa que permita al usuario convertir kilómetros a millas utilizando parámetro por referencia.*/

#include<iostream>

using namespace std;

void mensaje(){
	cout<<"\tPrograma que permite al usuario convertir kilometro a millas\n\t\tutilizando parametros por referencia\n";
	}
void operac(float pkilom,float*mil){
	*mil = pkilom*0.621371;
	}

int main(){
	float kilom=0,mil=0;
	mensaje();
	cout<<"\nIngrese las unidades a convertir: ";
	cin>>kilom;
	operac(kilom,&mil);
	cout<<"las millas son: "<<mil<<endl;
	return 0;
	}
