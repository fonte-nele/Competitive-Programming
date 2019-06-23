#include <bits/stdc++.h>
#define f(inicio, fim) for(int i = inicio; i < fim; i++)
#define fr(inicio, fim) for(int j = inicio; j < fim; j++)
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int i, quant, pos;
    string nome, aux;
    
    cin >> quant;
    getline(cin, nome);

    for(i = 0; i < quant; i++)
    {
        getline(cin, nome);
        set<string> lista;
        pos = 0;
        for(int j = 0; j < (int)nome.size(); j++)
        {
            if(nome[j] == ' ')
            {
                aux = nome.substr(pos, j - pos);
                lista.insert(aux);
                pos = j+1;
            }
        }
        aux = nome.substr(pos, (int)nome.size()-pos);
        lista.insert(aux);

        for(set<string> :: iterator it = lista.begin(); it != lista.end(); it++)
        {
            if(it == lista.begin())
                cout << *it;
            else
                cout << " " << *it ;
        }
        cout << endl;
    }
    
    return 0;
}