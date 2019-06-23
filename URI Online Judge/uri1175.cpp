#include<iostream>
using namespace std;
int main()
{
	int i,j,v[20],aux;
	for(i=0;i<20;i++)
	{
		cin>>v[i];
	}
	for(i=0,j=19;i<j;i++,j--)
	{
		aux=v[i];
		v[i]=v[j];
		v[j]=aux;
	}
	for(i=0;i<20;i++)
	{
		cout<<"N["<<i<<"] = "<<v[i]<<endl;
	}
	return 0;
}