#include<iostream>
using namespace std;
int factorial(int n);
main()
{
	int n;
	cout<<"FACTORIALES"<<endl<<"Dame el numero a sacar factorial "<<endl;
	cin>>n;
	cout<<"El factorial es: "<<factorial(n);
}
int factorial(int n)
{
	if (n<=2)
		return n;
	else
	{
		return (n*factorial(n-1));
	}
}
