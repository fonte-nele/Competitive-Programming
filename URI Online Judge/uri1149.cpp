#include<iostream>
using namespace std;
int main()
{
	int a,n,soma=0,temp;
	cin>>a>>n;
	temp=a;
	while(n<=0)
	{
		cin>>n;
	}
	for(int i=1;i<=n;i++,temp++)
	{
		soma+=temp;	
	}
	cout<<soma<<endl;
	return 0;
}