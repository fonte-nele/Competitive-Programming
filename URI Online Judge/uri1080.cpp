#include<iostream>
#define n 100
using namespace std;
int main()
{
	int i,v[n],maior=0,pos;
	for(i=0;i<n;i++)
	{
		cin>>v[i];
	}
	for(i=0;i<n;i++)
	{
		if(v[i]>maior)
		{
			maior = v[i];
			pos = i+1;
		}
	}
	cout<<maior<<endl;
	cout<<pos<<endl;
	return 0;
}