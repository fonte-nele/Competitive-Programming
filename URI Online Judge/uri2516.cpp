#include <bits/stdc++.h>
#define f(inicio, fim) for(int i = inicio; i < fim; i++)
#define fr(inicio, fim) for(int j = inicio; j < fim; j++)
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double s, va, vb, soma;

    while (cin >> s >> va >> vb)
    {
        if(vb > va)
            cout << "impossivel" << endl;
        else
        {
            soma = s / (va - vb);
            cout << fixed << setprecision(2) << soma << endl;
        }
    }
    return 0;
}