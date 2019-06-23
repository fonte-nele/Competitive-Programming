/*input
3 3
5 1
10 2
20 3
4 2
1 2 
2 1 
4 1 
2 2
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
    int v;
    int t;
}Tarefas;

bool comp(const Tarefas& b1, const Tarefas& b2)
{
    
    return b1.v > b2.v;
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int quant, horas, soma, maior = 0;

    while(cin >> quant >> horas)
    {
        soma = 0;
        maior = 0;
        vector<Tarefas> v(quant);
        //mem(v, 0);
        f(0, quant)
        {
            cin >> v[i].v >> v[i].t;
            soma += v[i].v;
            if(v[i].t > maior)
                maior = v[i].t;
        }
        
        sort(all(v), comp);
        /*f(0, quant)
        {
            cout << v[i].v << " " << v[i].t << endl;
        }*/
        int total_profit = 0;
        while(maior > 0 )
        {
            for(int i = 0; i < quant; i++ )
            {
                if(v[i].t >= maior && v[i].v != 0)
                {
                    total_profit += v[i].v;
                    v[i].v = 0;
                    break;
                }
            }
            maior--;
        }

        cout << soma - total_profit << endl;
    }

    return 0;
}