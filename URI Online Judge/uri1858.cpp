#include<iostream>
using namespace std;
int main()
{
	int i,n,*v,menor=21,pos;
	cin>>n;
	while(n<1 || n>100)
	{
		cin>>n;
	}
	v = new int [n+1];
	for(i=1;i<=n;i++)
	{
		cin>>v[i];
		while(v[i]<0 || v[i]>20)
		{
			cin>>v[i];
		}
		if(v[i]<menor)
		{
			menor=v[i];
			pos=i;
		}
	}
	cout<<pos<<endl;
	delete []v;
	return 0;
}