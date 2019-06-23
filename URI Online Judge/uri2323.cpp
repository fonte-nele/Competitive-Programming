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

typedef long long int ll;
typedef unsigned long long int ull;
typedef string st;
typedef vector <string> vs;
typedef vector <int> vi;
typedef map <int, int> mii;
typedef pair <int, int> ii;
typedef pair <int, pair <int, int> > iii;

vector <vector<int> > mobile;
int ok = 1;

int analisar(int no)
{
    int n, peso, atual, total;
    
    n = (int) mobile[no].size();
    total = 1;

    f(0, n)
    {
        atual = analisar(mobile[no][i]);
        if(!i)
            peso = atual;

        else if (atual != peso)
            ok = 0;

        total += atual;
    }
    return(total);
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, u, v;
    
    cin >> n;
    mobile.resize(n + 1);

    f(0, n)
    {
        cin >> u >> v;
        mobile[v].pb(u);
    }
    analisar(0);
    cout << (ok ? "bem" : "mal") << endl;

    return 0;
}