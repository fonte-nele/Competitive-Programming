#include<iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		while(n<0 || n>100)
		{
			cin>>n;
		}
		if(n==0)
		{
			cout<<"vai ter copa!"<<endl;
		}
		else
		{
			cout<<"vai ter duas!"<<endl;
		}
	}
	
	return 0;
}