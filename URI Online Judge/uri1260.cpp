#include <bits/stdc++.h>
#define f(inicio, fim) for(int i = inicio; i < fim; i++)
#define fr(inicio, fim) for(int j = inicio; j < fim; j++)
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int num, cont, aux = 0;
    map<string, int> v;
    string nome; 
    
    cin >> num;
    getline(cin, nome);

    while(num--)
    {
        //cout << "Q" << endl;
        if (aux != 0)
        {
            cout << endl;
        }
        else
        {
            getline (cin, nome);
            //cout << nome << " sdfa" << endl;
        }
        cont = 0;

        while(true)
        {
            getline(cin, nome);
            //cout << nome << endl;
            if(nome[0] == ' ' || nome[0] == '\0')
                break;

            if (v.find (nome) == v.end ())
                v[nome] = 1;
            else
                v[nome] += 1;

            cont++;
        }
        for (auto i : v)
            cout << i.first << " " << fixed << setprecision (4) << (i.second / (double) cont) * 100 << endl;

        cont = 0;
        aux++;
        v.clear ();
    }

    return 0;
}