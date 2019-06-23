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
		cout<<temp<<" "<<(temp*temp)+1<<" "<<(temp*temp*temp)+1<<endl;
	}
	return 0;
}