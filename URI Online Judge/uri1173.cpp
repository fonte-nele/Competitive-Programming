#include<iostream>
using namespace std;
int main()
{
	int i,n,v[10],soma;
	cin>>n;
	soma=n;
	for(i=0;i<10;i++)
	{
		v[i]=soma;
		soma*=2;
	}
	for(i=0;i<10;i++)
	{
		cout<<"N["<<i<<"] = "<<v[i]<<endl;
	}
	return 0;
}
