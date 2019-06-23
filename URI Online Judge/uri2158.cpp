#include <iostream>
using namespace std;

int main() 
{
    long long int i = 1, face1, face2, vertices, arestas;

	while(cin >> face1 >> face2)
	{
		arestas = (5*face1 + 6*face2)/2;
		vertices = (arestas + 2) - (face1 + face2);

		cout << "Molecula #" << i << ".:." << endl;
		cout << "Possui " << vertices << " atomos e " << arestas << " ligacoes" << endl << endl;
		i++;
	}

    return 0;
}