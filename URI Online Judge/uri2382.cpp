/*input
10 20 30 30
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
    //int x, y, l1, h1, l2, h2;
    //cin >> x >> y;
    //cin >> l1 >> h1 >> l2 >> h2;
    int l, a, p, r;
    cin >> l >> a >> p >> r;

    /*
        Diagonal da caixa:
        d^2 = l^2 + a^2 + p^2

        d <= 2r
        d^2 <= 4r^2

        l^2 + a^2 + p^2 <= 4r^2 
    */

    if((pow(l,2) + pow(a,2) + pow(p, 2)) <= (4*pow(r,2)))
        cout << "S" << endl;
    else
        cout << "N" << endl;

    return 0;
}