#include<iostream>
using namespace std;
int main()
{
	int i,n,temp;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		temp=i;
		cout<<temp<<" "<<temp*temp<<" "<<temp*temp*temp<<endl;
	}
	return 0;
}