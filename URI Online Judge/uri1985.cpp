#include<iostream>
#include<iomanip>
using namespace std;
int main() 
{
	int num,i,cod,quant;
	double preco,soma=0;
	cin>>num;
	for(i=0;i<num;i++)
	{
		cin>>cod>>quant;
		switch(cod)
		{
			case 1001:
				preco=quant*1.5;
				soma+=preco;
				break;
			case 1002:
				preco=quant*2.5;
				soma+=preco;
				break;
			case 1003:
				preco=quant*3.5;
				soma+=preco;
				break;
			case 1004:
				preco=quant*4.5;
				soma+=preco;
				break;
			case 1005:
				preco=quant*5.5;
				soma+=preco;
				break;
		}
	}
	cout<<fixed<<setprecision(2)<<soma<<endl;
	return 0;
}