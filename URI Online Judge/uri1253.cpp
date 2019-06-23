#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main () 
{
    string linha;
    int i, j, quant, tam, cont, desloc;

    cin >> quant;

    for(i = 0; i < quant; i++)
    {
        cin >> linha;
        cin >> desloc;

        tam = linha.size();
        for(j = 0; j < tam; j++)
        {
            cont = 0;            
            if(linha[j] - desloc < 'A')
            {
                while(linha[j] != 'A')
                {
                    linha[j] -= 1;
                    cont++;
                }
                linha[j] = 'Z' - (desloc-cont-1);
            }
            else
            {
                linha[j] -= desloc;
            }
            cout << linha[j];
        }
        cout << endl;

        //cout << linha + desloc << endl;
    }

    return 0;
}