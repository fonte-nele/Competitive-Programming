/*input
Arremesso de duende
Finlandia
Noruega
Sri Lanca
Levantamento de Saco de Brinquedos
Russia
Africa do Sul
Estonia
Escalada de Pinheiro
Estados Unidos
Canada
Sri Lanca
Hipismo com Renas
Finlandia
Estados Unidos
Finlandia
Mergulho em Buraco no Gelo
Islandia
Estonia
Russia
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

typedef struct
{
    st p;
    int ouro;
    int prata;
    int bronze;
}Paises;

bool comp(const Paises &p1, const Paises &p2)
{
    if(p1.ouro != p2.ouro)
        return p1.ouro > p2.ouro;
    else if(p1.prata != p2.prata)
        return p1.prata > p2.prata;
    else if(p1.bronze != p2.bronze)
        return p1.bronze > p2.bronze;
    else
        return p1.p < p2.p;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int cont = 0;
    st modalidade, pais;
    vector<Paises> v(301);

    while(getline(cin, modalidade))
    {
        int pos = 0;
        f(0, 3)
        {
            pos = 0;
            getline(cin, pais);
            //cout << pais << endl;
            fr(0, cont)
            {
                if(v[j].p == pais)
                {
                    pos = j;
                    cont--;
                    break;
                }
                pos++;
            }
            //cout << pos << " Pos " << endl;
            v[pos].p = pais;
            if(i == 0)
                v[pos].ouro++;
            else if(i == 1)
                v[pos].prata++;
            else if(i == 2)
                v[pos].bronze++;
            cont++;
        }
    }
    sort(all(v), comp);
    cout << "Quadro de Medalhas" << endl;
    f(0, cont)
    {
        cout << v[i].p << " " << v[i].ouro << " " << v[i].prata << " " << v[i].bronze << endl;
    }

    return 0;
}