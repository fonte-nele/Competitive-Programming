#include<iostream>
#include<string>
using namespace std;
int main()
{
	string nome1,nome2,op1,op2;
	int i,n;
	long int num1,num2,total;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>nome1>>op1>>nome2>>op2;
		cin>>num1>>num2;
		total=num1+num2;
		if(total%2==0)
		{
			if(op1=="PAR")
			{
				cout<<nome1<<endl;
			}
			else
			{
				cout<<nome2<<endl;
			}
		}
		else
		{
			if(op1=="IMPAR")
			{
				cout<<nome1<<endl;
			}
			else
			{
				cout<<nome2<<endl;
			}
		}
	}
	return 0;
}