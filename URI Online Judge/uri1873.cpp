#include <iostream>
#include <string>
using namespace std;

int main () 
{
    int i, j, quant;
    cin >> quant;

    for(i = 0; i < quant; i++) 
    {
		string rajesh, sheldon;
		cin >> rajesh >> sheldon;

		if(rajesh == "pedra")
		{
			if(sheldon == "pedra")
				cout << "empate" << endl;
			else if(sheldon == "papel")
				cout << "sheldon" << endl;
			else if(sheldon == "tesoura")
				cout << "rajesh" << endl;
			else if(sheldon == "lagarto")
				cout << "rajesh" << endl;
			else if(sheldon == "spock")
				cout << "sheldon" << endl;
		}
		else if(rajesh == "papel")
		{
			if(sheldon == "papel")
				cout << "empate" << endl;
			else if(sheldon == "pedra")
				cout << "rajesh" << endl;
			else if(sheldon == "tesoura")
				cout << "sheldon" << endl;
			else if(sheldon == "lagarto")
				cout << "sheldon" << endl;
			else if(sheldon == "spock")
				cout << "rajesh" << endl;	
		}
		else if(rajesh == "tesoura")
		{
			if(sheldon == "tesoura")
				cout << "empate" << endl;
			else if(sheldon == "pedra")
				cout << "sheldon" << endl;
			else if(sheldon == "papel")
				cout << "rajesh" << endl;
			else if(sheldon == "lagarto")
				cout << "rajesh" << endl;
			else if(sheldon == "spock")
				cout << "sheldon" << endl;
		}
		else if(rajesh == "lagarto")
		{
			if(sheldon == "lagarto")
				cout << "empate" << endl;
			else if(sheldon == "pedra")
				cout << "sheldon" << endl;
			else if(sheldon == "tesoura")
				cout << "sheldon" << endl;
			else if(sheldon == "papel")
				cout << "sheldon" << endl;
			else if(sheldon == "spock")
				cout << "rajesh" << endl;	
		}
		else
		{
			if(sheldon == "spock")
				cout << "empate" << endl;
			else if(sheldon == "pedra")
				cout << "rajesh" << endl;
			else if(sheldon == "papel")
				cout << "sheldon" << endl;
			else if(sheldon == "lagarto")
				cout << "sheldon" << endl;
			else if(sheldon == "tesoura")
				cout << "rajesh" << endl;	
		}
    }
    return 0;
}