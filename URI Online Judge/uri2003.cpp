#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

int main () 
{
	int hora, min, tempo;
	string nome;
	while(cin >> nome)
	{
		hora = atoi(nome.c_str());
		nome = nome.erase(0,2);
		min = atoi(nome.c_str());
		hora += 1;
		tempo = hora*60 + min;
		if(tempo > 480)
		{
			cout << "Atraso maximo: " << tempo - 480 << endl;
		}
		else
		{
			cout << "Atraso maximo: 0\n";
		}
	}

	return 0;
}