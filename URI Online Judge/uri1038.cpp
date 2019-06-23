#include<iostream>
#include<iomanip>
using namespace std;
 
int main() 
{
    int cod,quant;
	double total;
	cin>>cod>>quant;
	switch(cod)
	{
		case 1:
			total=quant*4;
			break;
		case 2:
			total=quant*4.5;
			break;
		case 3:
			total=quant*5;
			break;
		case 4:
			total=quant*2;
			break;
		case 5:
			total=quant*1.5;
			break;
	}
	cout<<"Total: R$ "<<fixed<<setprecision(2)<<total<<endl;
    return 0;
}