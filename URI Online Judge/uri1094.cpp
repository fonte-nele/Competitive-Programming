#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n,c=0,r=0,s=0,temp;
	double total=0;
	char tipo;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>temp>>tipo;
		if(tipo=='C')
		{
			c+=temp;
		}
		else
		{
			if(tipo=='R')
			{
				r+=temp;
			}
			else
			{
				if(tipo=='S')
				{
					s+=temp;
				}
			}
		}
		total+=temp;
	}
	cout<<"Total: "<<total<<" cobaias"<<endl;
	cout<<"Total de coelhos: "<<c<<endl;
	cout<<"Total de ratos: "<<r<<endl;
	cout<<"Total de sapos: "<<s<<endl;
	cout<<"Percentual de coelhos: "<<fixed<<setprecision(2)<<(double)c/(total/100)<<" %"<<endl;
	cout<<"Percentual de ratos: "<<fixed<<setprecision(2)<<(double)r/(total/100)<<" %"<<endl;
	cout<<"Percentual de sapos: "<<fixed<<setprecision(2)<<(double)s/(total/100)<<" %"<<endl;
	return 0;
}