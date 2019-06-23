#include<iostream>
using namespace std;
int main()
{
	int i,cont=0;
	double v[5];
	for(i=0;i<6;i++)
	{
		cin>>v[i];
	}
	for(i=0;i<6;i++)
	{
		if(v[i]>0)
		{
			cont++;
		}
	}
	cout<<cont<<" valores positivos"<<endl;
	return 0;
}