#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double n1,n2,dif,total;
	cin>>n1>>n2;
	dif=n2-n1;
	total=dif/(n1/100);
	cout<<fixed<<setprecision(2)<<total<<"%"<<endl;
	return 0;
}