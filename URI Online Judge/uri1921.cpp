#include<iostream>
using namespace std;
int main() 
{
	int i;
	long long int resp,num,aux=0;
	cin>>num;
	if(num==3)
	{
		cout<<"0"<<endl;
	}
	else
	{
		for(i=2;i<num-1;i++)
		{
			resp=aux+i;
			aux=resp;
		}
		cout<<resp<<endl;
	}
	return 0;
}