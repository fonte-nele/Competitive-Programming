#include<iostream>
using namespace std;
int main()
{
	int n,v[5],i,total=0;
	cin>>n;
	for(i=0;i<5;i++)
	{
		cin>>v[i];
		if(v[i]==n)
		{
			total++;
		}
	}
	cout<<total<<endl;
	return 0;
}