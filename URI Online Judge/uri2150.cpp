#include <bits/stdc++.h>
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string pal, frase;
    int i, soma, pos, tam;

    while(getline(cin, pal) && getline(cin, frase))
    {
        soma = 0;
        tam = pal.size();
        //cout << frase << endl;
        //cout << pal << endl;
        for(int j = 0; j < tam; j++)
        {    
            i = 0;
            pos = 0;
            while(pos != -1)
            {
                pos = frase.find(pal[j], i);
                if(pos == -1)
                    break;
                i = pos +1;
                soma ++;
            }
        }
        cout << soma << endl;
    }

    return 0;
}