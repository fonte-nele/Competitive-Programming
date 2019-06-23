#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int i, quant, soma;
    string nome;

    cin >> quant;
    for(i = 0; i < quant; i++)
    {
        soma = 0;
        cin >> nome;
        soma = atoi(nome.substr(2,2).c_str());
        soma += atoi(nome.substr(5,3).c_str());
        soma += atoi(nome.substr(11,2).c_str());
        cout << soma << endl;
    }
    return 0;
}