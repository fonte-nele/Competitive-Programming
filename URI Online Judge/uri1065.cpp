#include<iostream>
using namespace std;
int main()
{
	int num1,num2,num3,num4,num5,par=0;
	cin>>num1>>num2>>num3>>num4>>num5;
	if(num1%2==0)
		par++;
	if(num2%2==0)
		par++;
	if(num3%2==0)
		par++;
	if(num4%2==0)
		par++;
	if(num5%2==0)
		par++;
	cout<<par<<" valores pares"<<endl;
	return 0;
}