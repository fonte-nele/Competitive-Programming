#include<iostream>
using namespace std;
int main()
{
	int v[5],v1[5],n,cont1=0,cont2=0,i;
	
	for(i=0;i<15;i++)
	{
		cin>>n;
		if(n%2==0)
		{
			v[cont1++]=n;
			if(cont1==5)
			{
				for(int j=0;j<5;j++)
				{
					cout<<"par["<<j<<"] = "<<v[j]<<endl;
					v[j]=0;
				}
				cont1=0;
			}
		}
		else
		{
			v1[cont2++]=n;
			if(cont2==5)
			{
				for(int j=0;j<5;j++)
				{
					cout<<"impar["<<j<<"] = "<<v1[j]<<endl;
					v1[j]=0;
				}
				cont2=0;
			}
		}
	}
	for(i=0;i<cont2;i++)
	{
		cout<<"impar["<<i<<"] = "<<v1[i]<<endl;
	}
	for(i=0;i<cont1;i++)
	{
		cout<<"par["<<i<<"] = "<<v[i]<<endl;
	}
	return 0;
}
