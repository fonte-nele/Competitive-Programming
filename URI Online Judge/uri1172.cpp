#include<iostream>
using namespace std;
int main()
{
	int i,v[10];
	for(i=0;i<10;i++)
	{
		cin>>v[i];
		if(v[i]<=0)
		{
			v[i]=1;
		}
	}
	for(i=0;i<10;i++)
	{
		cout<<"X["<<i<<"] = "<<v[i]<<endl;
	}
	return 0;
}