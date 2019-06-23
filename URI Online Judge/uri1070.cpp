#include<iostream>
using namespace std;
int main()
{
	int num;
	cin>>num;
	for(int i=num+1;i<num+12;i++)
	{
		if(i%2!=0)
		{
			cout<<i<<endl;
		}
	}
	return 0;
}