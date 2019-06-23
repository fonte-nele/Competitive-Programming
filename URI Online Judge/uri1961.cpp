#include<iostream>
using namespace std;
int main()
{
	int n,tam,i,*v,temp,cont=0;
	cin>>n;
	while(n<1 || n>5)
	{
		cin>>n;
	}
	cin>>tam;
	while(tam<2 || tam>100)
	{
		cin>>tam;
	}
	v=new int [tam];
	for(i=0;i<tam;i++)
	{
		if(i==0)
		{
			cin>>v[i];
			temp=v[i];
		}
		else
		{
			cin>>v[i];
			if(v[i]>temp)
			{
				if((v[i]-temp)>n)
				{
					cout<<"GAME OVER"<<endl;
					break;
				}
			}
			else
			{
				if((temp-v[i])>n)
				{
					cout<<"GAME OVER"<<endl;
					break;
				}
			}
			
			temp=v[i];
		}
		cont++;
	}
	if(cont==tam)
	{
		cout<<"YOU WIN"<<endl;
	}
	delete []v;
	return 0;
}