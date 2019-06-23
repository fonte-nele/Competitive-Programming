#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double num1,num2,num3,num4,num5,num6,media=0,cont=0;
	cin>>num1>>num2>>num3>>num4>>num5>>num6;
	if(num1>0)
	{
		media+=num1;
		cont++;
	}
	if(num2>0)
	{
		media+=num2;
		cont++;
	}
	if(num3>0)
	{
		media+=num3;
		cont++;
	}
	if(num4>0)
	{
		media+=num4;
		cont++;
	}
	if(num5>0)
	{
		media+=num5;
		cont++;
	}
	if(num6>0)
	{
		media+=num6;
		cont++;
	}
	media = media/cont;
	cout<<cont<<" valores positivos"<<endl;
	cout<<fixed<<setprecision(1)<<media<<endl;
	return 0;
}