#include <iostream>
#include <string>
using namespace std;

int main () 
{
	int quant, op;
	string jog1, jog2;
	cin >> quant;

	for(int i=0; i<quant; i++)
	{
		cin >> jog1 >> jog2;
		if(jog1 == "ataque")
			op = 0;
		else
			if(jog1 == "pedra")
				op = 1;
			else
				op = 2;
		switch(op)
		{
			case 0:
				if(jog2 == "ataque")
					cout << "Aniquilacao mutua" << endl;
				else
					if(jog2 == "pedra")
						cout << "Jogador 1 venceu" << endl;
					else
						cout << "Jogador 1 venceu" << endl;
				break;
			case 1:
				if(jog2 == "ataque")
					cout << "Jogador 2 venceu" << endl;
				else
					if(jog2 == "pedra")
						cout << "Sem ganhador" << endl;
					else
						cout << "Jogador 1 venceu" << endl;
				break;
			case 2:
				if(jog2 == "ataque")
					cout << "Jogador 2 venceu" << endl;
				else
					if(jog2 == "pedra")
						cout << "Jogador 2 venceu" << endl;
					else
						cout << "Ambos venceram" << endl;
				break;
		}
	}

	return 0;
}