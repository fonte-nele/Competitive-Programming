#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int i,n,num1,num2;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>num1>>num2;
		if(num2==0)
		{
			cout<<"divisao impossivel"<<endl;	
		}
		else
		{
			cout<<fixed<<setprecision(1)<<(double)num1/num2<<endl;
		}
	}
	return 0;
}