#include <bits/stdc++.h>
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int quant, soma=0, lata, copo;

    cin >> quant;

    for(int i = 0; i < quant; i++)
    {
        cin >> lata >> copo;
        if(lata > copo)
            soma += copo;
    }

    cout << soma << endl;

    return 0;
}