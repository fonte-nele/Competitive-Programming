#include<iostream>
using namespace std;
int main()
{
	int i,n;
	cin>>n;
	while(n<0)
	{
		cin>>n;
	}
	for(i=0;i<n;i++)
	{
		if(i!=(n-1))
		{
			cout<<"Ho ";
		}
		else
		{
			cout<<"Ho!"<<endl;
		}
	}
	
	return 0;
}