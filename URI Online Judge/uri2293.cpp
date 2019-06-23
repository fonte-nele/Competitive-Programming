/*input
3
3 4
81 28 240 10
40 10 100 240
20 180 110 35
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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m, maior = 0, soma;
    cin >> n >> m;
    vector<vector<int> > mat(n);
    f(0, n)
        mat[i].resize(m);

    f(0, n){
        fr(0, m)
            cin >> mat[i][j];
    }
    for(int i = 0; i < n; i++)
    {
        soma = 0;
        for(int j = 0; j < m; j++)
        {
            soma += mat[i][j];
        }
        if(soma > maior)
            maior = soma;
        //cout << soma << endl;
    }
    for(int i = 0; i < m; i++)
    {
        soma = 0;
        for(int j = 0; j < n; j++)
        {
            soma += mat[j][i];
        }
        if(soma > maior)
            maior = soma;
        //cout << soma << endl;
    }

    cout << maior << endl;
    return 0;
}