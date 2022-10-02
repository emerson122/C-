#include<iostream>
#include<string.h>
using namespace std;
int buscar(char texto[], char palabra[]);
main()
{
	int encontrar;
	char texto[200], palabra[20];
	cout<<"Escribe tu texto"<<endl;
	cin.getline(texto,200);	
	cout<<"Qué quieres buscar?"<<endl;
	cin>>palabra;
	encontrar=buscar(texto,palabra);
	if(encontrar==-1)
	{
		cout <<"No se encontro la palabra"<<endl;
	}
	else
	{
		cout <<"Esta en la posicion: " << encontrar << endl;
	}
}
int buscar(char texto[], char palabra[])
{
	int j=0;
    for(int i=0;i<strlen(texto);i++)
    {
        if(palabra[j]==texto[i])
        {
            j++;
            if(j==strlen(palabra))
                return (2+ i-j);
        }
        else j=0;
    }
    return-1;
}
