#include <bits/stdc++.h>
#define f(inicio, fim) for(int i = inicio; i < fim; i++)
#define fr(inicio, fim) for(int j = inicio; j < fim; j++)
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    string nome;

    cin >> nome;

    if(nome == "roraima" || nome == "acre" || nome == "amapa" || nome == "amazonas" || nome == "para" || nome == "rondonia" || nome == "tocantins")
    {
        cout << "Regiao Norte" << endl;
    }
    else
        cout << "Outra regiao" << endl;
    
    return 0;
}