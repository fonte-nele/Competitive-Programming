#include<iostream>
using namespace std;
int main()
{
	int n,i,*v;
	cin>>n;
	v = new int[n];
	for(i=0;i<n;i++)
	{
		cin>>v[i];
	}
	for(i=0;i<n;i++)
	{
		if(v[i]>0)
		{
			if(v[i]%2==0)
			{
				cout<<"EVEN POSITIVE"<<endl;
			}
			else
			{
				cout<<"ODD POSITIVE"<<endl;
			}
		}
		else
		{
			if(v[i]<0)
			{
				if(v[i]%2==0)
				{
					cout<<"EVEN NEGATIVE"<<endl;
				}
				else
				{
					cout<<"ODD NEGATIVE"<<endl;
				}
				
			}
			else
			{
				cout<<"NULL"<<endl;
			}
		}
		
	}
	delete []v;
	return 0;
}