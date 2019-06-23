#include<iostream>
using namespace std;
int main()
{
	int n,i,quad;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			quad=i*i;
			cout<<i<<"^2 = "<<quad<<endl;
		}
	}
	return 0;
}