#include<iostream>
#include<string>
using namespace std;
int main()
{
	int num,i,n;
	string nome;
	cin>>num;
	for(i=0;i<num;i++)
	{
		cin>>nome;
		cin>>n;
		if(nome=="Thor")
		{
			cout<<"Y"<<endl;
		}
		else
		{
			cout<<"N"<<endl;
		}
	}
	return 0;
}