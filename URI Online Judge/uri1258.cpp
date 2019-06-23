#include <bits/stdc++.h>
using namespace std;

typedef struct cam
{
    string nome;
    string cor;
    char tam;
}Camiseta;

bool Ehmenor(const Camiseta& c1, const Camiseta& c2)
{
    if(c1.cor != c2.cor)
        return c1.cor < c2.cor;
    else if(c1.tam != c2.tam)
        return c1.tam > c2.tam;
    else
        return c1.nome < c2.nome;

}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int quant, cont = 0;
    string aux;

    while(cin >> quant && quant != 0)
    {
        vector<Camiseta> v(quant);

        if(cont > 0)
            cout << endl;

        for(int i = 0; i < quant; i++)
        {
            getline(cin,aux);
            getline(cin,v[i].nome);

            cin >> v[i].cor >> v[i].tam;

            //cout << v[i].nome << ", " << v[i].cor << ", " << v[i].tam << endl;
        }
        sort(v.begin(), v.end(), Ehmenor);

        for(int i = 0; i < quant; i++)
        {
            cout << v[i].cor << " " << v[i].tam << " " << v[i].nome << endl;
        }
        cont ++;
    }

    return 0;
}