#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int quant1, quant2, pos1, pos2;
    string frase;
    char aux;
    cin >> quant1 >> quant2;

    string p="", p1="";
    for(int i = 0; i < quant1; i++)
    {
        cin >> aux;
        p += aux;
        cin >> aux;
        p1 += aux;
    }
    //cout << p << endl;
    //cout << p1 << endl;
    getline(cin, frase);
    for(int j = 0; j < quant2; j++)
    {
        getline(cin, frase);
        //cout << frase << endl;

        for(int k = 0; k < (int)frase.size(); k++)
        {
            pos1 = p.find(frase[k]);
            pos2 = p1.find(frase[k]);
            
            if(pos1 == -1 && pos2 == -1)
                continue;

            if(pos1 != -1)
            {
                frase[k] = p1[pos1];
            }
            if(pos2 != -1)
            {
                frase[k] = p[pos2];
            }
            //cout << pos1 << "    " << pos2 << endl;

        }
        cout << frase << endl;
    }

    return 0;
}