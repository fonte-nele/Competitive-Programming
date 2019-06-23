#include <bits/stdc++.h>
#define f(inicio, fim) for(int i = inicio; i < fim; i++)
#define fr(inicio, fim) for(int j = inicio; j < fim; j++)
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int d;

    cin >> d;

    if(d <= 800)
        cout << 1 << endl;
    else if(d <= 1400)
        cout << 2 << endl;
    else if(d <= 2000)
        cout << 3 << endl;

    return 0;
}
