/*input
1
0
-1
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

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, cont = 1;
    while(cin >> n && n != -1)
    {
        cout << "Teste " << cont << endl;
        switch(n)
        {
            case 0:
                cout << 4 << endl;
                break;
            case 1:
                cout << 9 << endl;
                break;
            case 2:
                cout << 25 << endl;
                break;
            case 3:
                cout << 81 << endl;
                break;
            case 4:
                cout << 289 << endl;
                break;
            case 5:
                cout << 1089 << endl;
                break;
            case 6:
                cout << 4225 << endl;
                break;
            case 7:
                cout << 16641 << endl;
                break;
            case 8:
                cout << 66049 << endl;
                break;
            case 9:
                cout << 263169 << endl;
                break;
            case 10:
                cout << 1050625 << endl;
                break;
            case 11:
                cout << 4198401 << endl;
                break;
            case 12:
                cout << 16785409 << endl;
                break;
            case 13:
                cout << 67125249 << endl;
                break;
            case 14:
                cout << 268468225 << endl;
                break;
            case 15:
                cout << 1073807361 << endl;
                break;
        }
        cout << endl;
        cont++;
    }

    return 0;
}