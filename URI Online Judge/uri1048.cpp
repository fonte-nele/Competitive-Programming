#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double valor,novo,dif;
	cin>>valor;
	if(valor<=400)
	{
		dif=(valor/100)*15;
		novo=valor+dif;
		cout<<"Novo salario: "<<fixed<<setprecision(2)<<novo<<endl;
		cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<dif<<endl;
		cout<<"Em percentual: 15 %"<<endl;
	}
	else
	{
		if(valor<=800)
		{
			dif=(valor/100)*12;
			novo=valor+dif;
			cout<<"Novo salario: "<<fixed<<setprecision(2)<<novo<<endl;
			cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<dif<<endl;
			cout<<"Em percentual: 12 %"<<endl;
		}
		else
		{
			if(valor<=1200)
			{
				dif=(valor/100)*10;
				novo=valor+dif;
				cout<<"Novo salario: "<<fixed<<setprecision(2)<<novo<<endl;
				cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<dif<<endl;
				cout<<"Em percentual: 10 %"<<endl;
			}
			else
			{
				if(valor<=2000)
				{
					dif=(valor/100)*7;
					novo=valor+dif;
					cout<<"Novo salario: "<<fixed<<setprecision(2)<<novo<<endl;
					cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<dif<<endl;
					cout<<"Em percentual: 7 %"<<endl;
				}
				else
				{
					if(valor>2000)
					{
						dif=(valor/100)*4;
						novo=valor+dif;
						cout<<"Novo salario: "<<fixed<<setprecision(2)<<novo<<endl;
						cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<dif<<endl;
						cout<<"Em percentual: 4 %"<<endl;
					}
				}
			}
		}
	}
	return 0;
}