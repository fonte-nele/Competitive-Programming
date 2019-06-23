#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cin>>n;
	while(n!=0)
	{
		for(i=1;i<=n;i++)
		{
			cout<<i;
			if(i!=n)
			{
				cout<<" ";
			}
			else
			{
				cout<<endl;
			}
		}
		cin>>n;
	}
	return 0;
}