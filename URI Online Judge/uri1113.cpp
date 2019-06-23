#include<iostream>
using namespace std;
int main()
{
	int a,b;
	while(a!=b)
	{
		cin>>a>>b;
		if(a<b)
		{
			cout<<"Crescente"<<endl;
		}
		else
		{
			if(a>b)
			{
				cout<<"Decrescente"<<endl;
			}
		}
	}
	
	return 0;
}