#include <bits/stdc++.h>
#define f(inicio, fim) for(int i = inicio; i < fim; i++)
#define fr(inicio, fim) for(int j = inicio; j < fim; j++)
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, c, soma;

    while (cin >> a >> c && a != 0 && c != 0)
    {
        vector<int> v(c);

        f(0, c)
        {
            cin >> v[i];
        }
        soma = a - v[0]; // Laser ativado por a - v[0] vezes

        f(1, c)
        {
            if(v[i] > v[i-1]) // Altura atual maior que a anterior. Ignora
                continue;
            else
                soma += v[i-1] - v[i];  // Diferenca atual menor com anterior maior
        }
        cout << soma << endl;
    }
    return 0;
}
