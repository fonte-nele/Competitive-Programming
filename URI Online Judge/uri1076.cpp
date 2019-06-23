/*input
2
0
16 15
0 4
2 3
6 2
8 9
10 9
8 12
14 15
14 10
6 5
10 11
11 7
4 8
0 1
1 2
12 13
1
9 6
1 2
1 4
4 7
7 8
4 1
4 3
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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, v, a, v1, v2, cont;

    cin >> t;
    while(t--)
    {
        cont = 0;
        cin >> n;
        cin >> v >> a;
        map<pair<int,int>,int> m;

        f(0, a){
            cin >> v1 >> v2;
            m[make_pair(v1,v2)] ++;
            m[make_pair(v2,v1)] ++;
        }
        map<pair<int,int>,int> :: iterator it;
        for(it = m.begin(); it != m.end(); it++)
        {
            if(it->second >= 2)
                cont++;
        }

        cont /= 2;
        cout << 2*(a - cont) << endl;
    }

    return 0;
}