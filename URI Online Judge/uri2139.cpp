#include <iostream>
using namespace std;

int main () 
{
	int mes, dia;

	while(cin >> mes >> dia)
	{
		switch(mes)
		{
			case 1:
				cout << "Faltam " << 31+29+31+30+31+30+31+31+30+31+25+30 - dia << " dias para o natal!" << endl;
				break;
			case 2:
				cout << "Faltam " << 29+31+30+31+30+31+31+30+31+25+30 - dia << " dias para o natal!" << endl;
				break;
			case 3:
				cout << "Faltam " << 31+30+31+30+31+31+30+31+25+30 - dia << " dias para o natal!" << endl;
				break;
			case 4:
				cout << "Faltam " << 30+31+30+31+31+30+31+25+30 - dia << " dias para o natal!" << endl;
				break;
			case 5:
				cout << "Faltam " << 31+30+31+31+30+31+25+30 - dia << " dias para o natal!" << endl;
				break;
			case 6:
				cout << "Faltam " << 30+31+31+30+31+25+30 - dia << " dias para o natal!" << endl;
				break;
			case 7:
				cout << "Faltam " << 31+31+30+31+25+30 - dia << " dias para o natal!" << endl;
				break;
			case 8:
				cout << "Faltam " << 31+30+31+25+30 - dia << " dias para o natal!" << endl;
				break;
			case 9:
				cout << "Faltam " << 30+31+25+30 - dia << " dias para o natal!" << endl;
				break;
			case 10:
				cout << "Faltam " << 31+25+30 - dia << " dias para o natal!" << endl;
				break;
			case 11:
				cout << "Faltam " << 25+30 - dia << " dias para o natal!" << endl;
				break;
			case 12:
				if(dia == 24)
				{
					cout << "E vespera de natal!" << endl;
				}
				else
				{
					if(dia == 25)
					{
						cout << "E natal!" << endl;
					}
					else
					{
						if(dia > 25)
						{
							cout << "Ja passou!" << endl;
						}
						else
						{
							cout << "Faltam " << 25 - dia << " dias para o natal!" << endl;
						}
					}
				}
				break;
		}
	}
	

	return 0;
}