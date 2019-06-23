#include <iostream>
#include <string>
using namespace std;

int main()
{
	int tam;
	string nome;
	getline(cin, nome);
	tam = nome.size();

	if(tam <= 140)
	{
		cout << "TWEET" << endl;
	}
	else
	{
		cout << "MUTE" << endl;
	}

	return 0;
}