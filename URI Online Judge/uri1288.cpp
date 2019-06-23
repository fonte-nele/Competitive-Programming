/*input
3
3
500 5
300 4
30 2
10
680
5
500 5
300 4
100 1
120 1
200 3
12
1120
5
500 5
300 4
100 1
120 1
200 3
12
1020
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

/*int mochila(int peso, vector<int> &val, vector<int> &p, int pos)
{
    if(pos == 0 || peso == 0)
        return 0;

    if(p[pos-1] > peso)
        return mochila(peso, val, p, pos-1);
    else
        return max(val[pos-1] + mochila(peso-p[pos-1], val, p, pos-1), mochila(peso, val, p, pos-1));
}*/

int mochila(int W, vector<int> v, vector<int> wt, int n)
{
    int ks[n+1][W+1];
    for(int i = 0; i <= n; i++)
    {
        for(int w = 0; w <= W; w++)
        {
            if(i == 0 || w == 0) 
                ks[i][w] = 0;
            else if(wt[i-1] > w) 
                ks[i][w] = ks[i-1][w];
            else 
                ks[i][w] = max(ks[i-1][w], v[i-1] + ks[i-1][w-wt[i-1]]);
        }
    }
    return ks[n][W];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int quant, n, capac, r, resultado;
    cin >> quant;

    while(quant--)
    {
        cin >> n;
        vector<int> val(n);
        vector<int> p(n);

        f(0, n)
            cin >> val[i] >> p[i];

        cin >> capac >> r;
        int pos = n;//sizeof(val)/sizeof(val[0]); 
        resultado = mochila(capac, val, p, pos);

        if(resultado >= r)
            cout << "Missao completada com sucesso" << endl;
        else
            cout << "Falha na missao" << endl;
    }

    return 0;
}