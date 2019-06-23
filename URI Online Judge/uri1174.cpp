#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int i;
	double v[100];
	for(i=0;i<100;i++)
	{
		cin>>v[i];
	}
	for(i=0;i<100;i++)
	{
		if(v[i]<=10)
		{
			cout<<"A["<<i<<"] = "<<fixed<<setprecision(1)<<v[i]<<endl;
		}
	}
	return 0;
}