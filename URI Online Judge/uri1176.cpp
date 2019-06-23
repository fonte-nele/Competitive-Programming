#include<iostream>
using namespace std;
int main()
{
	long long int v[61],n;
	int i,num;
	v[0]=0;
	v[1]=1;
	v[2]=1;
	for(i=3;i<=60;i++)
	{
		v[i]=v[i-1]+v[i-2];
	}
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>num;
		while(num<0 || num>60)
		{
			cin>>num;
		}
		cout<<"Fib("<<num<<") = "<<v[num]<<endl;
	}
	return 0;
}