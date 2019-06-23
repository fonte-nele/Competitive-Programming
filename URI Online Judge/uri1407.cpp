/*input
5 4 6
6 2 3 4
3 4 6 5
2 3 6 5
4 5 2 6
2 3 6 4
4 3 4
3 2 1
2 1 4
4 3 2
1 4 3
0 0 0 
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
    int n, c, k;

    while(cin >> n >> c >> k && n != 0 && c != 0 && k != 0)
    {
        map<int,int> jog;
        int pos;
        f(0, n)
        {
            fr(0, c)
            {
                cin >> pos;
                jog[pos]++;
            }
        }
        f(1,k+1)
        {
            if(jog[i] == 0)
                jog[i] = 0;
        }

        int menor = INT_MAX;
        for(map<int,int> :: iterator it = jog.begin(); it != jog.end(); it++)
        {
            //cout << (*it).fi << " = " << (*it).se << endl;
            if((*it).se < menor)
            {
                menor = (*it).se;
            }
        }
        int cont = 0;
        for(map<int,int> :: iterator it = jog.begin(); it != jog.end(); it++)
        {
            if((*it).se == menor)
            {
                if(cont == 0)
                    cout << (*it).fi;
                else
                    cout << " " << (*it).fi;
                cont++;
            }
        }
        cout << endl;
    }
    return 0;
}