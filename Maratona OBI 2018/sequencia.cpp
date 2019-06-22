/*input
14 3 4
9 0 -23 -12 7 1 -13 2 -1 9 -16 -1 14 12
1 0 0 1 0 1 0 0 1 1 0 0 1 1
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

    int quant;
    cin >> quant;
    vector<int> v(quant);

    f(0, quant)
    {
        cin >> v[i];
    }

    f(0, quant)
    {
        cout << v[i] << endl;
    }

    return 0;
}