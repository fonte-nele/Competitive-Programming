#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int op=1;
	double nota1,nota2;
	while(op!=2)
	{
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
		cout<<"novo calculo (1-sim 2-nao)"<<endl;
		cin>>op;
		while(op!=1 && op!=2)
		{
			cout<<"novo calculo (1-sim 2-nao)"<<endl;
			cin>>op;
		}
	}
	
	return 0;
}