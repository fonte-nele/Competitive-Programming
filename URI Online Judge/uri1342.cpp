/*input
2 10
2 4 8
4
1 1
3 4
1 2
6 5
3 7
4 5 7
7
1 2
2 2
2 1
1 1
1 2
1 1
1 1
0 0
*/
#include <bits/stdc++.h>
using namespace std;

#define f(inicio, fim) for(int i = inicio; i < fim; i++)
#define fr(inicio, fim) for(int j = inicio; j < fim; j++)
#define all(x) x.begin (), x.end ()
//#define sz(x) (int) x.size ()
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


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int p, s, t1, t2, t3 , n, d1, d2, pos, vencedor;
    
    while(cin >> p >> s && p != 0 && s != 0)
    {
        vector<int> v(p);
        vector<bool> flag(p, true);
        pos = 0;

        cin >> t1 >> t2 >> t3;

        cin >> n;

        f(0, n)
        {
            cin >> d1 >> d2;
            
            if(flag[pos])
            {
                v[pos] += (d1+d2);
                if(v[pos] == t1 || v[pos] == t2 || v[pos] == t3)
                {
                    flag[pos] = false;
                }
            }
            else
            {
                while(!flag[pos])
                {
                    flag[pos] = true;
                    pos++;
                    if(pos == (int)v.size())
                        pos = 0;
                }
                v[pos] += (d1+d2);
                if(v[pos] == t1 || v[pos] == t2 || v[pos] == t3)
                {
                    flag[pos] = false;
                }
            }

            if(v[pos] > s)
            {
                cout << pos+1 << endl;
                break;
            }
            pos++;
            if(pos == (int)v.size())
                pos = 0;
        }


    }

    return 0;
}