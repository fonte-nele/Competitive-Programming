#include<iostream>
using namespace std;
int main()
{
	int num1,num2,aux,soma=0;
	cin>>num1>>num2;
	if(num1>num2)
	{
		aux=num1;
		num1=num2;
		num2=aux;
	}
	for(int i=num1;i<=num2;i++)
	{
		if(i%13!=0)
		{
			soma+=i;
		}
	}
	cout<<soma<<endl;
	return 0;
}