#include<iostream>
using namespace std;
int main()
{
	int i,n,temp;
	cin>>n;
	
	for(i=1;i<=10;i++)
	{
		temp=i;
		cout<<i<<" x "<<n<<" = "<<temp*n<<endl;
	}
	
	return 0;
}