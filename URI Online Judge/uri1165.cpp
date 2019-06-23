#include<iostream>
using namespace std;
int main()
{
	int i,j,num1,num2,soma=0;
	cin>>num1;
	for(i=1;i<=num1;i++)
	{
		cin>>num2;
		for(j=1;j<=num2;j++)
		{
			if(num2%j==0)
			{
				soma++;
			}
		}
		if(soma==2)
		{
			cout<<num2<<" eh primo"<<endl;
		}
		else
		{
			cout<<num2<<" nao eh primo"<<endl;
		}
		soma=0;
		
	}
	
	return 0;
}