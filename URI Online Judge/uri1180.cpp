#include<iostream>
using namespace std;
int main()
{
	int *v,n,i,menor,pos=0;
	cin>>n;
	v = new int [n];
	for(i=0;i<n;i++)
	{
		cin>>v[i];
	}
	menor=v[0];
	for(i=0;i<n;i++)
	{
		if(v[i]<menor)
		{
			menor=v[i];
			pos=i;
		}
	}
	cout<<"Menor valor: "<<menor<<endl;
	cout<<"Posicao: "<<pos<<endl;
	delete []v;
	return 0;
}