/*input
1
aabccbba
2
abc
abbc
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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m, pos;
    char ant;
    cin >> n;
    
    while(n--)
    {
        bool flag = true;
        cin >> m;
        vector<char> v(m);
        cin >> v[0];
        ant = v[0];
        f(1, m)
        {
            cin >> v[i];
            if(ant > v[i])
                pos = i;

            ant = v[i];
        }
        //cout << v[pos] << endl;

        f(0, m)
        {
            if(v[i] > v[pos])
            {
                //cout << v[i] << endl;
                ant = v[i];
                v[i] = v[pos];
                v[pos] = ant;
                break;
            }
        }

        ant = v[0];
        f(1, m)
        {
            if(ant > v[i])
            {
                flag = false;
                break;
            }
            ant = v[i];
        }
        if(flag)
            cout << "There are the chance." << endl;
        else
            cout << "There aren't the chance." << endl;
    }

    return 0;
}