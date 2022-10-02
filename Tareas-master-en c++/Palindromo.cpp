#include<iostream>
#include <string.h>
using namespace std;
int esPalindromo(char c[],int i,int f);
main()
{
	char palabras[80];
	int res,i,j;
    cout<<"Escribe la palabra: "<<endl;
    cin.getline(palabras,80);
    j=strlen(palabras)-1;
    i=0;
    res=esPalindromo(palabras,i,j);
	if(res==0)
		cout<<"Es Palindrimo.";
    else
        cout<<"No es Palindrimo.";
    return 0;
}
int esPalindromo(char c[],int i,int f)
{
	if (i<f)
	{
		if (c[i]==' ')
			return esPalindromo(c,++i,f);
		else
		{
			if (c[f]==' ')
				return esPalindromo(c,i,--f);
			else
			{
				if (c[i]==c[f])
					return esPalindromo(c,i,--f);	
				else
					return 0;
			}
		}
	}
	else
		return 1;
}
