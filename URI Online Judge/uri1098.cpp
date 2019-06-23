#include<iostream>
using namespace std;
int main()
{
	double i,j,temp;
	for(i=0,j=1;i<=2;i+=0.2,j+=0.2)
	{
		temp=j;
		cout<<"I="<<i<<" J="<<j<<endl;
		j++;
		cout<<"I="<<i<<" J="<<j<<endl;
		j++;
		cout<<"I="<<i<<" J="<<j<<endl;
		j++;
		j=temp;
	}
	return 0;
}