#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double nota1,nota2;
	cin>>nota1;
	while(nota1<0 || nota1>10)
	{
		cout<<"nota invalida"<<endl;
		cin>>nota1;
	}
	cin>>nota2;
	while(nota2<0 || nota2>10)
	{
		cout<<"nota invalida"<<endl;
		cin>>nota2;
	}
	cout<<"media = "<<fixed<<setprecision(2)<<(nota1+nota2)/2<<endl;
	return 0;
}