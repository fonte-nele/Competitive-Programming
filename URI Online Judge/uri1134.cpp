#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int cod,gas=0,alc=0,die=0;
	
	do{
		cin>>cod;
		switch(cod)
		{
			case 1:
			{
				alc++;
				break;
			}
			case 2:
			{
				gas++;
				break;
			}
			case 3:
			{
				die++;
				break;
			}
		}
	}while(cod!=4);
	cout<<"MUITO OBRIGADO"<<endl;
	cout<<"Alcool: "<<alc<<endl;
	cout<<"Gasolina: "<<gas<<endl;
	cout<<"Diesel: "<<die<<endl;
	return 0;
}