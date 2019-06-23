#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main()
{
	int tam;
	string nome;
	
	cin >> tam;

	for(int i = 0; i < tam; i++)
	{
		cin >> nome;
		if(nome == "Batmain")
		{
			cout << "N" << endl;
		}
		else
		{
			if(nome == "batmain")
				cout << "N" << endl;
			else
				cout << "Y" << endl;
		}
	}
	return 0;
}