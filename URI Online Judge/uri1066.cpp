#include<iostream>
using namespace std;
int main()
{
	int num1,num2,num3,num4,num5,par=0,pos=0,impar=0,neg=0;
	cin>>num1>>num2>>num3>>num4>>num5;
	if(num1>0)
		pos++;
	if(num1<0)
		neg++;
	if(num1%2==0)
		par++;
	else
		impar++;
	if(num2>0)
		pos++;
	if(num2<0)
		neg++;
	if(num2%2==0)
		par++;
	else
		impar++;
	if(num3>0)
		pos++;
	if(num3<0)
		neg++;
	if(num3%2==0)
		par++;
	else
		impar++;
	if(num4>0)
		pos++;
	if(num4<0)
		neg++;
	if(num4%2==0)
		par++;
	else
		impar++;
	if(num5>0)
		pos++;
	if(num5<0)
		neg++;
	if(num5%2==0)
		par++;
	else
		impar++;
	cout<<par<<" valor(es) par(es)"<<endl;
	cout<<impar<<" valor(es) impar(es)"<<endl;
	cout<<pos<<" valor(es) positivo(s)"<<endl;
	cout<<neg<<" valor(es) negativo(s)"<<endl;
	return 0;
}