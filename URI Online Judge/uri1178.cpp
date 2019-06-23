#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double v[100],n,temp;
	int i;
	cin>>n;
	v[0]=n;
	for(i=1;i<100;i++)
	{
		temp=n/2;
		v[i]=temp;
		n=temp;
	}
	
	for(i=0;i<100;i++)
	{
		cout<<"N["<<i<<"] = "<<fixed<<setprecision(4)<<v[i]<<endl;
	}
	return 0;
}