#include<iostream>
using namespace std;
int main()
{
	int n1,n2,temp,cont=1;
	cin>>n1>>n2;
	while(n2<=n1)
	{
		cin>>n2;
	}
	temp=n1+1;
	while(n2>n1)
	{
		n1 += temp;
		temp++;
		cont++;
	}
	cout<<cont<<endl;
	return 0;
}