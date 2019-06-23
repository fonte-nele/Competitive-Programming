#include <iostream>
#include <string>
using namespace std;

int main () 
{
	int i, num, quant;
	string acao;
	cin >> num >> quant;

	for(i = 0; i < quant; i++)
	{
		cin >> acao;
		if(acao == "fechou")
		{
			num++;
		}
		else
		{
			if(acao == "clicou")
			{
				num--;
			}	
		}
	}
	cout << num << endl;

	return 0;
}