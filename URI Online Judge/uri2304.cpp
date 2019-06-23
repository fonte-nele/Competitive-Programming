/*input
1000 1
C D 500
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
    int ini, n;
    cin >> ini >> n;

    int d, e, f, valor;
    char op1, op2;
    d = ini;
    e = ini;
    f = ini;

    f(0, n)
    {
        cin >> op1 >> op2;
        if(op1 == 'A')
        {
            cin >> op1 >> valor;;
            if(op2 == 'D')
                d += valor;
            else if(op2 == 'E')
                e += valor;
            else
                f += valor;

            if(op1 == 'D')
                d -= valor;
            else if(op1 == 'E')
                e -= valor;
            else
                f -= valor;
        }
        else if(op1 == 'C')
        {
            cin >> valor;
            if(op2 == 'D')
                d -= valor;
            else if(op2 == 'E')
                e -= valor;
            else
                f -= valor;
        }
        else
        {
            cin >> valor;
            if(op2 == 'D')
                d += valor;
            else if(op2 == 'E')
                e += valor;
            else
                f += valor;
        }
    }
    cout << d << " " << e << " " << f << endl;

    return 0;
}