#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include <cstdlib>
#include<time.h>
using namespace std;
void llenartablero(int v[],int tam);
void serpientesEscaleras(int v[], int tam);
int lanzar();
main()
{
	int tablero[101];
	int turno, ban=0, jugador1=0, jugador2=0, dado, tiro;
	llenartablero(tablero, 101);
	serpientesEscaleras(tablero,101);
	turno=1;
	while(ban==0)
	{
		srand((unsigned)time(0));
		if (turno==2)
		{
			turno=3;
		}
		if (turno==1)
		{
			cout<<"Jugador 1 Presiona una tecla para tirar..."<<endl;
			cin.get();
			dado=lanzar();
			jugador1=tablero[jugador1];
			cout<<"Dado = "<<dado<<endl;
			jugador1=jugador1+dado;
			cout<<"El jugador 1 esta en la posicion: "<<jugador1<<endl;
			if(jugador1>=100)
			{
				ban=3;
				cout<< "GANA JUGADOR 1  " << jugador1;
			}
			turno=2;
		}
		if (turno==3)
			{
			cout<<"Jugador 2 Presiona una tecla para tirar..."<<endl;
			cin.get();
			dado=lanzar();
			jugador2=tablero[jugador2];
			cout<<"Dado = "<<dado<<endl;
			jugador2=jugador2+dado;
			cout<<"El jugador 2 esta en la posicion: "<<jugador2<<endl;
			if(jugador2>=100)
			{
				ban=3;
				cout<< "GANA JUGADOR 2  ." << jugador2;
			}
			turno=1;
		}
	}
	cin.get();
	return(0);
}
void llenartablero(int v[],int tam)
{
	for (int i=0;i<=101;i++)
	{
		v[i]=i;
	} 
}
void serpientesEscaleras(int v[], int tam)
{
	v[5]=17;
	v[11]=20;
	v[16]=50;
	v[23]=35;
	v[34]=42;
	v[55]=66;
	v[69]=74;
	v[80]=92;
	
	v[99]=85;
	v[89]=77;
	v[62]=53;
	v[57]=47;
	v[46]=30;
	v[37]=21;
	v[27]=15;
	v[13]=4;
	/*int salto;
	for (int cont=1,i=5;cont<8;cont++,i+9)
	{
		rand();
		salto=(rand()%15)+5;
		v[i]+=salto;
	}
	for (int cont=1,i=7;cont<8;cont++,i+9)
	{
		rand();
		salto=(rand()%15)+5;
		v[i]-=salto;
	}*/
}
int lanzar()
{
	int dado;
	rand();
	dado=1+rand()%6;
	return dado;
}
