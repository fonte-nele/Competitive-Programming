#include<iostream>
using namespace std;
int main()
{
	int i,j,num1,num2,soma=0,flag=0;
	cin>>num1;
	while(num1<1 || num1>20)
	{
		cin>>num1;
	}
	for(i=1;i<=num1;i++)
	{
		cin>>num2;
		while(num2<1)
		{
			cin>>num2;
		}
		for(j=1;j<num2;j++)
		{
			soma+=j;
			if(soma==num2)
			{
				cout<<num2<<" eh perfeito"<<endl;
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			cout<<num2<<" nao eh perfeito"<<endl;
		}
		soma=0;
		flag=0;
	}
	
	return 0;
}