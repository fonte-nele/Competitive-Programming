#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() 
{
    int caso = 1,
        NUMERO;

    bool podePular = false;

    while(cin >> NUMERO) 
    {
        if(podePular)
        	cout << endl;
        else 
        	podePular = true;

        string line;
        int numero,
            feminino = 0,
            masculino = 0;
        char genero;

        getline(cin >> ws, line);

        stringstream ss(line);

        cout << "Caso " << caso++ << ":\n";
        while(ss >> numero >> genero) 
        {
            if(numero == NUMERO) 
            {
                if(genero == 'F') 
                	feminino++;
                else 
                	masculino++;
            }
        }

        cout << "Pares Iguais: " << (feminino + masculino) << endl;
        cout << "F: " << feminino << endl;
        cout << "M: " << masculino << endl;
    }
    return 0;
}