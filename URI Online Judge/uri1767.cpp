/*input
2
4
6 17
21 23
72 24
143 2
10
1 17
11 23
22 24
13 2
23 3
24 4
9 5
8 6
7 7
15 8
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

int mochila(int W, vector<int> v, vector<int> wt, int n, int *peso, int *sobra)
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

    int res = ks[n][W];
    int w = W;
    for(int i = n; i > 0; i--)
    {
        if(res <= 0)
            break;
        if(res == ks[i-1][w])
            continue;
        else
        {
            *(peso) += wt[i-1];
            *(sobra) -= 1;
            res -= v[i-1];
            w -= wt[i-1];
        }
    }
    return ks[n][W];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int quant, n, capac, resultado, peso, sobra;
    cin >> quant;

    while(quant--)
    {
        cin >> n;
        vector<int> val(n);
        vector<int> p(n);

        f(0, n)
            cin >> val[i] >> p[i];

        capac = 50;
        int pos = n;//sizeof(val)/sizeof(val[0]);
        peso = 0;
        sobra = n; 
        resultado = mochila(capac, val, p, pos, &peso, &sobra);

        
        cout << resultado << " brinquedos" << endl;
        cout << "Peso: " << peso << " kg" << endl;
        cout << "sobra(m) " << sobra << " pacote(s)" << endl << endl;
    }

    return 0;
}