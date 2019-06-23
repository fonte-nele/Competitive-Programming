#include<iostream>
using namespace std;
int main()
{
	int j,i,n,n2,total=0;
	cin>>n;
	while(n<1 || n>1000)
	{
		cin>>n;
	}
	for(j=0;j<n;j++)
	{
		cin>>n2;
		for(i=1;i<=n2;i++)
		{
			if(i%2==0)
			{
				total-=1;
			}
			else
			{
				total+=1;
			}
		}
		cout<<total<<endl;
		total=0;
	}
	
	return 0;
}