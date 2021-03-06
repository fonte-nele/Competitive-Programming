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

typedef long long int ll;
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
    long int n;

    cin >> n;

    int x, y;
    map<ii, int> m;
    ii coordenadas;
    bool flag = false;

    f(0, n)
    {
        cin >> x >> y;

        coordenadas = make_pair(x, y);

        m[coordenadas]++;
    }

    for(auto i : m)
    {
        if(i.second > 1)
            flag = true;
    }

    if(flag)
        cout << 1 << endl;
    else
        cout << 0 << endl;

    return 0;
}
