#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string frase;
    int quant, n, m, peso, cont, temp;
    cin >> quant;

    while (quant--)
    {
        cont = 1, temp = 0;
        cin >> n >> m;
        for(int i = 0; i < n; i++)
        {
            cin >> peso;
            temp += peso;
            if(temp > m)
            {
                cont ++;
                temp = peso;
            }
        }

        cout << cont << endl;
    }
    return 0;
}