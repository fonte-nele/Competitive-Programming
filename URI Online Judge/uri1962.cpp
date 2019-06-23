#include<iostream>
using namespace std;
int main()
{
	int n,i,data;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>data;
		if(data>=2015)
		{
			cout<<(data-2015)+1<<" A.C."<<endl;
		}
		else
		{
			cout<<2015-data<<" D.C."<<endl;
		}
	}
	
	return 0;
}