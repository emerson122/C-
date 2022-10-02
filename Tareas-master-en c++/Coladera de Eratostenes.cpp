#include<iostream>
using namespace std;
main()
{
	bool v[1000];
	int i,j;
	for (i=0;i<1000;i++)
		v[i]=true;
	for (i=2;i<1000;i++)
	{
		if (v[i])
		{
			for (j=2; i*j<1000;j++)
				v[i*j]=false;
		}
	}
	for (i=2;i<1000;i++)
	{
		if (v[i])
			cout<<i<<" ";
	}
}
