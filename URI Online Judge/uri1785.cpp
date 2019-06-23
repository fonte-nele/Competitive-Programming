/*input
3
3524
0
10
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
const int N = 1e5+5;

int vis[N], d[5];

int krapekar(int x, int dep)
{
    if(vis[x])
        return -1;
    vis[x] = 1;
    if(x  == 6174)
        return dep;

    f(0, 4)
        d[i] = x%10, x /= 10;

    sort(d, d+4);
    int maior = d[3]*1000 + d[2]*100 + d[1]*10 + d[0];
    int menor = d[0]*1000 + d[1]*100 + d[2]*10 + d[3];
    return krapekar(maior - menor, dep + 1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, num, cont = 1, ans;
    cin >> n;

    while(n--)
    {
        cin >> num;

        memset(vis, 0, sizeof(vis));
        ans = krapekar(num, 0);

        cout << "Caso #" << cont << ": " << ans << endl;
        cont++;
    }


    return 0;
}