#include <bits/stdc++.h>
#define f(inicio, fim) for(int i = inicio; i < fim; i++)
#define fr(inicio, fim) for(int j = inicio; j < fim; j++)
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int l, c, cor;

    cin >> l >> c;

    if((l % 2 == 0) && (c % 2 == 0))
        cor = 1;
    else if((l % 2 == 0) && (c % 2 != 0))
        cor = 0;
    else if((l % 2 != 0) && (c % 2 == 0))
        cor = 0;
    else if((l % 2 != 0) && (c % 2 != 0))
        cor = 1;

    cout << cor << endl;

    return 0;
}
