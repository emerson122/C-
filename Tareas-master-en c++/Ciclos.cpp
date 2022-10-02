#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int opcion;
	int num=1, fact=1;
	int nveces;
	int i=1;
	float suma=1;
	int x;
	float exponente;
	
	cout<<"Que quieres hacer? \n";
	cout<<"(1)Aproximacion de e? \n";
	cout<<"(2)Aproximacion de e elevado a la x? \n";
	cout<<"(0)Salir\n"; cin>>opcion;
	switch(opcion)
	{
		case 1:
			cout<<"Cuantas veces? "; cin>>nveces;
			while (num<=nveces)
			{
		
				while(i<=num)
				{
					//fact=fact*i;
					fact*=i;
					//cout<<"eso es i "<<i<<"\n"<<"esto es fact "<<fact<<"\n";
					i++;
				}
		
				//cout<<"\nEl factorial es: "<<fact;//<<"\n"<<i;
				suma+=(1.00/fact);
				//cout<<"\n 1/cfact--->  "<<suma;
				num++;
			}
			cout<<"e = "<<suma;
			break;
		case 2:
			cout<<"Cuantas veces? "; cin>>nveces;
			cout<<"Cuanto vale X? ";cin>>x;
			while (num<=nveces)
			{
		
				while(i<=num)
				{
					//fact=fact*i;
					fact*=i;
					//cout<<"eso es i "<<i<<"\n"<<"esto es fact "<<fact<<"\n";
					exponente=pow(x,i);
					//cout<<"esto es x"<<x<<"\n esto es i"<<i<<"\n";
					i++;
				}
		
				//cout<<"\nEl factorial es: "<<fact;//<<"\n"<<i;
				suma+=(exponente/fact);
				//cout<<"\n 1/cfact--->  "<<suma;
				num++;
			}
			cout<<"e = "<<suma;
			break;
		case 0:
			cout<<"ADIOS";
			break;
		default:
			cout<<"ERROR";
	}
}
