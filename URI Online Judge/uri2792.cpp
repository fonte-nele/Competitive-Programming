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
typedef vector <int> vi;
typedef map <int, int> mii;
typedef pair <int, int> ii;
typedef pair <int, pair <int, int> > iii;

const int N = 5 * (int)(1e5 + 10);

int bit[N];

void up(int x) 
{
    x += 2;
    while(x < N)
    {
        bit[x]++;
        x += LSONE(x);
    }
}

int query(int x) 
{
    x += 2;
    int ret = 0;
    while(x) {
        ret += bit[x];
        x -= LSONE(x);
    }
    return ret;
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    f(0, n) 
    {
        int x; 
        cin >> x;

        if(i) 
            cout << " ";
        int a = x - query(x);
        cout << a;
        up(x);
    }
    cout << endl;
    return 0;
}