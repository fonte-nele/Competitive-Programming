/*input
3
2 5 3
4
2 1 4 3
5
1 2 3 4 5
4
1 3 1 3
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
    int n, esp, ans, num, cont;
    bool ok;

    while(cin >> n && n)
    {
        ans = 0;
        esp = 0;
        list<int> pos;
        list<int> :: iterator it;
        f(0, n)
        {
            cin >> num;
            cont = 1;
            ok = false;
            for(it = pos.begin(); it != pos.end(); it++)
            {
                if(*it == num)
                {
                    ok = true;
                    //cout << "It " << cont << endl;
                    ans += (cont);
                    break;
                }
                cont++;
            }
            pos.push_front(num);
            if(!ok)
            {
                ans += (num+esp);
                
            }
            esp++;
        }
        cout << ans << endl;
    }
    cout << endl;

    return 0;
}