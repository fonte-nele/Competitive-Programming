#include <bits/stdc++.h>
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int quant, ano, inicio, menor;
    string plan, resul;

    while(cin >> quant && quant != 0)
    {
        cin >> plan >> ano >> inicio;
        resul = plan;
        menor = ano - inicio;
        for(int i = 0; i < quant-1; i++)
        {
            cin >> plan >> ano >> inicio;
            if(menor > ano-inicio)
            {
                resul = plan; 
                menor = ano-inicio;
            }

        }
        cout << resul << endl;
    }

    return 0;
}