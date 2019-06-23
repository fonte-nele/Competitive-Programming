#include <bits/stdc++.h>
using namespace std;

int main (int argc, const char * argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int quant, saldoi, valor, menor;

    cin >> quant >> saldoi;

    menor = saldoi;

    for(int i = 0; i < quant; i++)
    {
        cin >> valor;

        saldoi += valor;

        if(saldoi < menor)
            menor = saldoi;
    }

    cout << menor << endl;
    
    return 0;
}
