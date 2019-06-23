#include<iostream>
using namespace std;
int main()
{
	int i,j,n,num1,num2,soma=0;
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		cin>>num1>>num2;
		if(num1>num2)
		{
			for(j=num2+1;j<num1;j++)
			{
				if(j%2!=0)
				{
					soma+=j;
				}
			}
			cout<<soma<<endl;
			soma=0;
		}
		else
		{
			for(j=num1+1;j<num2;j++)
			{
				if(j%2!=0)
				{
					soma+=j;
				}
			}
			cout<<soma<<endl;
			soma=0;
		}
	}
	
	return 0;
}