#include<iostream>
#include<string>
using namespace std;
int main()
{
	int i,n;
	string nome;
	cin>>n;
	for(i=0;i<n;i++)
	{
		getline(cin,nome);
		cin.ignore();
	}
	cout<<"Ciencia da Computacao"<<endl;
	return 0;
}