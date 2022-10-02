#include<iostream>
using namespace std;
int serieF(int n);
main()
{
	int n, res;
	cout<<"SERIE FIBONACCI"<< endl <<"Dame la cantidad de veces "<<endl;
	cin>>n;
	cout<<"El resultado es "<<endl<<serieF(n);
	return 0;
}
int serieF(int n)
{
	if(n==1 || n==2)
	{
		return 1;
	}
	else
	{
		return (serieF(n-1)+serieF(n-2));
	}
}
