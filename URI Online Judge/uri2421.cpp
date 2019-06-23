/*input
7 5
3 4
3 4
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
    int x, y, l1, h1, l2, h2, ok = 0;
    cin >> x >> y;
    cin >> l1 >> h1 >> l2 >> h2;

    if (l1+l2 <= x and max(h1,h2) <= y) ok = 1;
    if (l1+h2 <= x and max(h1,l2) <= y) ok = 1;
    if (h1+h2 <= x and max(l1,l2) <= y) ok = 1;
    if (h1+l2 <= x and max(l1,h2) <= y) ok = 1;
    swap(x, y);
    if (l1+l2 <= x and max(h1,h2) <= y) ok = 1;
    if (l1+h2 <= x and max(h1,l2) <= y) ok = 1;
    if (h1+h2 <= x and max(l1,l2) <= y) ok = 1;
    if (h1+l2 <= x and max(l1,h2) <= y) ok = 1;
    cout << (ok == 1 ? "S" : "N") << endl;

    return 0;
}