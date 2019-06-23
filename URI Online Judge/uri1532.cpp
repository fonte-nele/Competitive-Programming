/*input
14 3
13 3
12 3
5 3
30 4
0 0
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
    int n, v, x, vv;
    bool flag;

    while(cin >> n >> v && n && v)
    {
        flag = false;
        if(!n)
            flag = true;
        for(int i = 1; i <= v; i++)
        {
            x = 0; vv = i;
            while (x <= n && vv > 0) 
            {
                for(int j = 0; j < vv; j++) 
                {
                    x += vv;
                    if (x == n) 
                        flag = true;
                }
                vv--;
            }
        }

        if(flag)
            cout << "possivel" << endl;
        else
            cout << "impossivel" << endl;
    }

    return 0;
}