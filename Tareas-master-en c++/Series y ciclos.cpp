#include<iostream>
#include<math.h>
using namespace std;
int menu();
float logX(int n, int x, float &ln);
float seno(int n, int x, float &sen);
float coseno(int n, int x, float &cos);
int main()
{
	float nveces,x,ln=0,sen,cos;
	int op;
	do
	{
		op=menu();
		switch (op)
		{
			case 1:
				cout<<"Cuantas veces? \n";
				cin>>nveces;
				cout<<"Cuanto vale x? \n";
				cin>>x;
				logX(nveces,x,ln);
				cout<<"El ln es: "<<ln<<"\n";
				break;
			case 2:
				cout<<"Cuantas veces? \n";
				cin>>nveces;
				cout<<"Cunto vale x? \n";
				cin>>x;
				seno(nveces,x,sen);
				cout<<"El seno es: "<<sen<<"\n";
				break;
			case 3:
				cout<<"Cuantas veces? \n";
				cin>>nveces;
				cout<<"Cunto vale x? \n";
				cin>>x;
				coseno(nveces,x,cos);
				cout<<"El coseno es: "<<cos<<"\n";
				break;
				break;
			case 0:
				cout<<"ADIOS";
				break;
			default:
				cout<<"ERROR\n";
		}
	}while (op!=0);
}
int menu()
{
	cout<<"***********MENU DE OPCIONES*********** \n";
	cout<<"(1) Calcular Logaritmo Natural  \n";
	cout<<"(2) Calcular Sen  \n";
	cout<<"(3) Calcular Cos  \n";
	cout<<"(0) SALIR \n";
	int op;
	cin>>op;
	return op;
}
float logX(int n, int x, float &ln)
{
	for(int i=1;i<=n;i++)
		{
			ln+=(1.00/i)*(pow(((x-1.00)/x),i));
		}
	return ln;
}
float seno(int n, int x, float &sen)
{
	int f=1;
	int s=1;
	for(int i=1;i<=n;i++)
	{
		int fa=1;
		for(int j=1;j<=f;j++)
		{
			fa*=j;
		}
		sen+=(pow(x,f)/fa)*s;
		f+=2;
		s*=-1;
	}
	return sen;
}
float coseno(int n, int x, float &cos)
{
	int f=0;
	int s=1;
	for(int i=1;i<=n;i++)
	{
		int fa=1;
		for(int j=1;j<=f;j++)
		{
			fa*=j;
		}
		cos+=((pow(x,f)/fa))*s;
		f+=2;
		s*=-1;
	}
	return cos;
}
