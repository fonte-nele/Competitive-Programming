#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double valor,imp,temp,temp2;
	cin>>valor;
	if(valor<=2000)
	{
		cout<<"Isento"<<endl;
	}
	else
	{
		if(valor<=3000)
		{
			imp = ((valor-2000)/100)*8;
			cout<<"R$ "<<fixed<<setprecision(2)<<imp<<endl;
		}
		else
		{
			if(valor<=4500)
			{
				temp = (1000/100)*8;
				imp = ((valor-3000)/100)*18;
				cout<<"R$ "<<fixed<<setprecision(2)<<(imp+temp)<<endl;
			}
			else
			{
				if(valor>=4500)
				{
					temp = (1000/100)*8;
					temp2 = (1500/100)*18;
					imp = ((valor-4500)/100)*28;
					cout<<"R$ "<<fixed<<setprecision(2)<<(imp+temp+temp2)<<endl;
				}
			}
		}
	}
	
	return 0;
}