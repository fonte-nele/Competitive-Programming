#include<iostream>
using namespace std;
int main()
{
	int v[3],v2[3],i,j,aux;
	for(i=0;i<3;i++)
	{
		cin>>v[i];
		v2[i]=v[i];
	}
	for(i=0;i<2;i++)
	{
		for(j=1;j<3-i;j++)
		{
			if(v[j]<v[j-1])
			{
				aux=v[j];
				v[j]=v[j-1];
				v[j-1]=aux;
			}
		}
	}
	for(i=0;i<3;i++)
	{
		cout<<v[i]<<endl;
	}
	cout<<endl;
	for(i=0;i<3;i++)
	{
		cout<<v2[i]<<endl;
	}
	
	return 0;
}