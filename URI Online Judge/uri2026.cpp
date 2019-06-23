/*input
3
3
30
30 15
10 12
12 18
4
32
12 10
15 8
18 19
22 23
5
40
22 12
35 30
10 16
9 7
17 10
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
#define INF 0x3f3f3f3f
#define pi 3.14159265359
typedef long long ll;
typedef unsigned long long int ull;
typedef string st;
typedef vector <string> vs;
typedef pair <int, int> ii;
typedef pair <double, ii > iii;
typedef vector <int> vi;
typedef vector <ii> vii;
typedef map <int, int> mii; 

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
    int cont = 1, t, n, capac;

    cin >> t;
    while(t--)
    {
        cin >> n >> capac;
        vector<int> val(n);
        vector<int> p(n);

        f(0, n)
        {
            cin >> val[i] >> p[i];
        }

        cout << "Galho " << cont << ":" << endl;
        cout << "Numero total de enfeites: " << mochila(capac, val, p, n) << endl << endl;
        cont++;
    }
    
    return 0;
}