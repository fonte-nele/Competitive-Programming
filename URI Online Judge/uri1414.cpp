#include <bits/stdc++.h>
#define f(inicio, fim) for(int i = inicio; i < fim; i++)
#define fr(inicio, fim) for(int j = inicio; j < fim; j++)
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, soma, pontos;
    string tim;
    
    while(cin >> t >> n && t != 0)
    {
        soma = 0;
        f(0, t)
        {
            cin >> tim >> pontos;
            soma += pontos;
        }

        int empates = 3*n - soma;

        cout << empates << endl;


    }
    
    return 0;
}