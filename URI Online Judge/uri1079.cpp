#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double *v,n1,n2,n3;
	int i,n;
	cin>>n;
	v = new double [n];
	for(i=0;i<n;i++)
	{
		cin>>n1>>n2>>n3;
		v[i] = (n1*2 + n2*3 + n3*5)/10;
	}
	for(i=0;i<n;i++)
	{
		cout<<fixed<<setprecision(1)<<v[i]<<endl;
	}
	
	delete []v;
	return 0;
}