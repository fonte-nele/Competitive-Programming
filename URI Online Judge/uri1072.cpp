#include<iostream>
using namespace std;
int main()
{
	int n,i,*v,cont1=0,cont2=0;
	cin>>n;
	v= new int [n];
	for(i=0;i<n;i++)
	{
		cin>>v[i];
	}
	for(i=0;i<n;i++)
	{
		if(v[i]>=10 && v[i]<=20)
		{
			cont1++;
		}
		else
		{
			cont2++;
		}
	}
	cout<<cont1<<" in"<<endl;
	cout<<cont2<<" out"<<endl;
	delete []v;
	return 0;
}