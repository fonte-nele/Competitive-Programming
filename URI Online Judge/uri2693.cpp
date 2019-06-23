/*input
5 
Samuel O 1 
Fabricio L 1 
Emanuel S 3 
Kaio S 20 
Hugo N 90 
*/
#include <bits/stdc++.h>
using namespace std;

#define f(inicio, fim) for(int i = inicio; i < fim; i++)
#define fr(inicio, fim) for(int j = inicio; j < fim; j++)
#define all(x) x.begin (), x.end ()
//#define sz(x) (int) x.size ()
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

typedef struct alunos
{
    st nome;
    char regiao;
    int dist;
}Vans;

bool comp(const Vans &v1, const Vans &v2)
{
    if(v1.dist != v2.dist)
        return v1.dist < v2.dist;
    else if(v1.regiao != v2.regiao)
        return v1.regiao < v2.regiao;
    else
        return v1.nome < v2.nome;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int quant;

    while(cin >> quant)
    {
        vector<Vans> v(quant);

        f(0, quant)
        {
            cin >> v[i].nome >> v[i].regiao >> v[i].dist;
        }

        sort(all(v),comp);

        f(0, quant)
        {
            cout << v[i].nome << endl;
        }
    }

    return 0;
}