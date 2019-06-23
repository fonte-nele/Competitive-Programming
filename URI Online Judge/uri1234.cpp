#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main () 
{
    string linha;
    int i, tam, cont;

    while(getline(cin,linha))
    {
        tam = linha.size();
        cont = 0;

        for(i = 0; i < tam; i++)
        {
            if(linha[i] != ' ')
            {
                if(cont % 2 == 0)
                {
                    linha[i] = toupper(linha[i]);
                }
                else
                {
                    linha[i] = tolower(linha[i]); 
                }

                cont++;
            }
        }

        cout << linha << endl;
    }

    return 0;
}