/*input
6
10
15 5
23 4
21 2
16 4
19 5
18 2
2
15
47 12
39 4
5
23
43 9
4 1
17 2
13 5
54 17
6
7
14 4
21 2
26 7
18 4
30 13
10 2
0
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

int mochila(int peso, vector<int> &val, vector<int> &p, int pos)
{
    if(pos == 0 || peso == 0)
        return 0;

    if(p[pos-1] > peso)
        return mochila(peso, val, p, pos-1);
    else
        return max(val[pos-1] + mochila(peso-p[pos-1], val, p, pos-1), mochila(peso, val, p, pos-1));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, peso;
    
    while(cin >> n && n != 0)
    {
        vector<int> val(n);
        vector<int> p(n);

        cin >> peso;

        f(0, n)
            cin >> val[i] >> p[i];

        int pos = n;//sizeof(val)/sizeof(val[0]); 
        cout << mochila(peso, val, p, pos) << " min." << endl;
    }

    return 0;
}