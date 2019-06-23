#include <bits/stdc++.h>
#define f(inicio, fim) for(int i = inicio; i < fim; i++)
#define fr(inicio, fim) for(int j = inicio; j < fim; j++)
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int l, c;
    
    cin >> l >> c;
    cout << (l * c) + ((l-1) * (c-1)) << endl;
    cout << 2*(l-1) + 2*(c-1) << endl;
    
    return 0;
}