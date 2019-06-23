#include<iostream>
using namespace std;
int main()
{
	int num1,num2,cont=0;
	cin>>num1>>num2;
	if(num1>=num2)
	{
		for(int i=num2+1;i<num1;i++)
		{
			if(i%2!=0)
			{
				cont+=i;
			}
		}
	}
	else
	{
		for(int i=num1+1;i<num2;i++)
		{
			if(i%2!=0)
			{
				cont+=i;
			}
		}
	}
	cout<<cont<<endl;
	return 0;
}