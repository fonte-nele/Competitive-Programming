#include <bits/stdc++.h>
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int quant, a, b, somaA, somaB, cont = 1;

    while(cin >> quant && quant != 0)
    {
        somaA = 0;
        somaB = 0;
        for(int i = 0; i < quant; i++)
        {
            cin >> a >> b;
            somaA += a;
            somaB += b;
        }
        cout << "Teste " << cont << endl;
        if(somaA > somaB)
            cout << "Aldo" << endl << endl;
        else
            cout << "Beto" << endl << endl;

        cont ++;
    }

    return 0;
}