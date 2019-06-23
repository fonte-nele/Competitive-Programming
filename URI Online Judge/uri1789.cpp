#include<iostream>
using namespace std;
int main()
{
	int i,n,*v,cont1=0,cont2=0,cont3=0;
	
	while(cin>>n)
	{
		
		v = new int [n];
		for(i=0;i<n;i++)
		{
			cin>>v[i];
			if(v[i]<10)
			{
				cont1++;
			}
			else
			{
				if(v[i]<20)
				{
					cont2++;
				}
				else
				{
					cont3++;
				}
			}
		}
		if(cont3>0)
		{
			cout<<"3"<<endl;
		}
		else
		{
			if(cont2>0)
			{
				cout<<"2"<<endl;
			}
			else
			{
				cout<<"1"<<endl;
			}
		}
		cont1=0;
		cont2=0;
		cont3=0;
		delete []v;
	}
	
	return 0;
}