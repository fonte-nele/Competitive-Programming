/*input
2
4 1 -2 3 0 -6
0 0 4 -2 6 8
*/

// Problem F - Kikoho
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
#define pi 3.1415926535897
#define MAX 10005
#define endl "\n"
typedef long long int ll;
typedef unsigned long long int ull;
typedef string st;
typedef vector <string> vs;
typedef pair <int, int> ii;
typedef pair <double, ii > iii;
typedef vector <int> vi;
typedef vector <ii> vii;
typedef map <int, int> mii;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    double x1, y1, x2, y2, x3, y3;
    cin >> n;

    while(n--){
    	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    	double det = ((x1 * y2 * 1) + (y1 * 1 * x3) + (1 * x2 * y3)) - ((x3 * y2 * 1) + (y3 * 1 * x1) + (1 * x2 * y1));  // Produto cartesiano

    	cout << fixed << setprecision(3) << abs(det)/2 << endl; 
    }

    return 0;
}
