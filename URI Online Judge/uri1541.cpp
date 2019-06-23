#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a=1,b=1,c=1,mult,total,total2;
	while(a!=0 || b!=0 || c!=0)
	{
		cin>>a;
		if(a==0)
		{
			break;
		}
		cin>>b;
		if(b==0)
		{
			break;
		}
		cin>>c;
		if(c==0)
		{
			break;
		}
		mult=a*b;
		total=(mult*100)/c;
		total2=sqrt(total);
		cout<<total2<<endl;	
	}
	return 0;
}