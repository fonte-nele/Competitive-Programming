#include<iostream>
using namespace std;
int main()
{
	int i,j,temp;
	for(i=1,j=7;i<=9;i+=2,j+=2)
	{
		temp=j;
		cout<<"I="<<i<<" J="<<j<<endl;
		j--;
		cout<<"I="<<i<<" J="<<j<<endl;
		j--;
		cout<<"I="<<i<<" J="<<j<<endl;
		j--;
		j=temp;
	}
	return 0;
}