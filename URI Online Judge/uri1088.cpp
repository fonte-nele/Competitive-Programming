#include <bits/stdc++.h>
#define f(inicio, fim) for(int i = inicio; i < fim; i++)
#define fr(inicio, fim) for(int j = inicio; j < fim; j++)
using namespace std;

int fenwick[100005], n;

void update (int k, int v)
{
    for (k++; k <= 100005 - 1; k += k & -k)
        fenwick[k] += v;
}

int rqs (int b)
{
    int sum = fenwick[0];

    for (b++; b > 0; b -= (b) & (-b))
        sum += fenwick[b];

    return sum;
}


int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int quant, soma, valor;

    while (cin >> quant && quant != 0)
    {
        memset (fenwick, 0, sizeof fenwick);
        soma = 0;

        f(0, quant)
        {
            cin >> valor;
            soma += rqs(quant) - rqs(valor-1);
            update(valor, 1);
        }
        if(soma %2 )
            cout << "Marcelo";
        else
            cout << "Carlos";
        cout << endl;
    }

    return 0;
}
