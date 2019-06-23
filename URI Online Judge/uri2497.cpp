#include <bits/stdc++.h>
#define f(inicio, fim) for(int i = inicio; i < fim; i++)
#define fr(inicio, fim) for(int j = inicio; j < fim; j++)
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, cont = 1;

    while (cin >> n && n != -1)
    {
        cout << "Experiment " << cont << ": " << n/2 << " full cycle(s)" << endl;
        cont++;
    }
    return 0;
}