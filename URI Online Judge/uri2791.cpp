#include <bits/stdc++.h>
#define f(inicio, fim) for(int i = inicio; i < fim; i++)
#define fr(inicio, fim) for(int j = inicio; j < fim; j++)
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c, d;


    cin >> a >> b >> c >> d;

    if(a)
        cout << 1 << endl;
    else if(b)
        cout << 2 << endl;
    else if(c)
        cout << 3 << endl;
    else if(d)
        cout << 4 << endl;
    
    return 0;
}