/*input
5
1 102 2 62
1 128 3 127
1 144 4 80
1 102 5 101
2 62 3 61
2 100 4 80
2 88 5 82
3 79 4 90
3 87 5 100
4 110 5 99
0
*/
#include <bits/stdc++.h>
using namespace std;

#define f(inicio, fim) for(int i = inicio; i < fim; i++)
#define fr(inicio, fim) for(int j = inicio; j < fim; j++)
#define all(x) x.begin (), x.end ()
#define sz(x) (int) x.size ()
#define pb push_back
#define mk make_pair
#define fi first
#define se second
#define eps 1e-9
#define mem(x, val) memset ((x), (val), sizeof (x))
#define LSONE(s) ((s)&(-s))
#define INF 0x3f3f3f3f3f3f3f3fLL
typedef long long ll;
typedef unsigned long long int ull;
typedef string st;
typedef vector <string> vs;
typedef pair <int, int> ii;
typedef pair <int, pair <int, int> > iii;
typedef vector <int> vi;
typedef vector <ii> vii;
typedef map <int, int> mii;

typedef struct aux
{
    int id;
    int pontos;
    int soma1;
    int soma2;
    int contador;
    float cesta;
}Basquete;

bool comp(const Basquete& b1, const Basquete& b2)
{
    if(b1.pontos != b2.pontos)
        return b1.pontos > b2.pontos;
    else if(b1.cesta != b2.cesta)
        return b1.cesta > b2.cesta;
    else if(b1.soma1 != b2.soma1)
        return b1.soma1 > b2.soma1;
    else
        return b1.contador < b2.contador;
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int quant, t1, t2, pontos1, pontos2, cont = 1;

    while(cin >> quant && quant != 0)
    {
        if(cont > 1)
            cout << endl;
        vector<Basquete> v(quant);
        //mem(v, 0);
        f(0, (quant *(quant-1) / 2))
        {
            cin >> t1 >> pontos1 >> t2 >> pontos2;

            (pontos1 > pontos2) ? (v[t1-1].pontos+=2, v[t2-1].pontos--):(v[t2-1].pontos+=2, v[t1-1].pontos--);
            v[t1-1].id = t1;
            v[t2-1].id = t2;
            v[t1-1].contador++;
            //v[t2-1].contador++;

            v[t1-1].soma1 += pontos1;
            v[t1-1].soma2 += pontos2;
            v[t2-1].soma1 += pontos2;
            v[t2-1].soma2 += pontos1;
        }
        f(0, quant)
        {
            if(v[i].soma2 != 0)
                v[i].cesta = (double)v[i].soma1/v[i].soma2;
            else
                v[i].cesta = (double)v[i].soma1;
        }
        sort(all(v), comp);

        cout << "Instancia " << cont << endl;
         
        f(0, quant)
        {
            if(i == 0)
                cout << v[i].id;
            else
                cout << " " << v[i].id;
        }
        cout << endl;
        
        cont++;
    }

    return 0;
}