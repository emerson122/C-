#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
int menu();
int lanzar();
void histogram(int prob);
main()
{
	srand(time(NULL));
	int op,tiro,tiro2;
	int vec[12]={0};
	int nose,suma;
	do{
		
		op=menu();
		switch(op)
		{
			case 1:
				for (int i=1;i<=100;i++)
				{
					tiro=lanzar();
					vec[tiro-1]++;
				}
				for (int i=0;i<=5;i++)
				{
					nose=vec[i];
					histogram(nose);
				}
				break;
			case 2:
				for (int i=1;i<=100;i++)
				{
					tiro=lanzar();
					tiro2=lanzar();
					suma=tiro+tiro2;
					vec[suma-1]++;
				}
				for (int i=0;i<=11;i++)
				{
					nose=vec[i];
					histogram(nose);
				}
				break;
			case 0:
				cout<<"ADIOS";
				break;
			default:
				cout<<"ERROR \n";
		}
	}while(op!=0);
}
int menu()
{
	cout<<"***********MENU DE OPCIONES*********** \n";
	cout<<"(1) UN DADO \n";
	cout<<"(2) DOS DADOS\n";
	cout<<"(0) SALIR \n";
	int op;
	cin>>op;
	return op;
}
int lanzar()
{
	int dado;
	
	rand();
	dado=1+rand()%6;
	return dado;
}
void histogram(int prob)
{
	for(int i=1;i<=prob;i++)
	{
		cout<<i<<"* ";
	}
	cout<<endl;
}
