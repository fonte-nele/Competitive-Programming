#include <iostream>
using namespace std;

int main()
{
	int quant, bonus, at1, at2, df1, df2, treinador1, treinador2;
	float total1, total2;

	cin >> quant;
	for(int i = 0; i < quant; i++)
	{
		cin >> bonus >> at1 >> df1 >> treinador1 >> at2 >> df2 >> treinador2;
		
		if(treinador1 % 2 ==0)
		{
			total1 = (at1 + df1)/2.0 + bonus;
		}
		else
		{
			total1 = (at1 + df1)/2.0;
		}
		if(treinador2 % 2 == 0)
		{
			total2 = (at2 + df2)/2.0 + bonus;
		}
		else
		{
			total2 = (at2 + df2)/2.0;
		}
		if(total1 > total2)
			cout << "Dabriel" << endl;
		else
			if(total1 < total2)
				cout << "Guarte" << endl;
			else
				cout << "Empate" << endl;
	}
	return 0;
}