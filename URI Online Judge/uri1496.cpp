/*input
5
0 10000 100000 884813 0
7
0 100000 0 200000 180000 200000 0
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
//typedef string st;
typedef vector <string> vs;
typedef pair <int, int> ii;
typedef pair <double, ii > iii;
typedef vector <int> vi;
typedef vector <ii> vii;
typedef map <int, int> mii;

int n;
ii p[1000005];
int st[4000005], v[1000005];

void build(int p, int l, int r) 
{
    if (l == r) 
        st[p] = v[l];
    else 
    {
        build(2*p, l, (l+r)/2);
        build(2*p+1, (l+r)/2+1, r);
        st[p] = min(st[2*p], st[2*p+1]);
    }
}

void build() {build(1, 0, n-1);}

int query(int p, int l, int r, int i, int j) 
{
    if (i>r || j<l) 
        return INF;
    if (l >= i && r <= j) 
        return st[p];
    int p1 = query(2*p, l, (l+r)/2, i, j);
    int p2 = query(2*p+1, (l+r)/2+1, r, i, j);
    return min(p1, p2);
}

int query(int i, int j) {return query(1, 0, n-1, i, j);}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    while(cin >> n) 
    {
        for (int i = 0; i < n; ++i){ 
            cin >> v[i];
            p[i] = make_pair(-v[i], i);
        }
        build();

        sort(p, p+n);

        vector<int> a, t;
        set<int> s;
        for (int i = 0; i < n; ++i) 
        {
            int x = p[i].second, vx = -p[i].first;
            int l=0, r=n-1;

            set<int>::iterator it;
            it = s.lower_bound(x);
            if (it != s.begin()) 
                it--, l = *it;
            it = s.upper_bound(x);
            if (it != s.end()) 
                r = *it;

            if (vx-max(query(l, x), query(x, r)) >= 150000)
                a.pb(x+1);

            if (i == n-1 or p[i].first != p[i+1].first) {
                s.insert(x);
                for (int j = 0; j < (int)t.size(); ++j) 
                    s.insert(t[j]);
                t.clear();
            }
            else {
                t.pb(x);
            }
        }

        sort(a.begin(), a.end());
        for (int i = 0; i < (int)a.size(); ++i) 
            cout << a[i] << (i==(int)a.size()-1?'\n':' ');
    }

    return 0;
}