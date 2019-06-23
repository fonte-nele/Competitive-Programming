#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int num;
	double valor=0,cont=0;
	cin>>num;
	while(num>0)
	{
		valor+=num;
		cont++;
		cin>>num;
	}
	cout<<fixed<<setprecision(2)<<valor/cont<<endl;
    return 0;
}
