#include <iostream>
#include <string>
using namespace std;

int main()
{
	int tam;
	string nome;
	getline(cin, nome);
	tam = nome.size();

	if(tam <= 80)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}

	return 0;
}