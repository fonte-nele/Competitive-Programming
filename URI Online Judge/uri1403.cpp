/*input
4 5
20 33 25 32 99
32 86 99 25 10
20 99 10 33 86
19 33 74 99 32
3 6
2 34 67 36 79 93
100 38 21 76 91 85
32 23 85 31 88 1
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
    int n, m;

    while(cin >> n >> m && n != 0 && m != 0)
    {
        map<int,int> jog;
        int pos;
        f(0, n)
        {
            fr(0, m)
            {
                cin >> pos;
                jog[pos]++;
            }
        }
        int maior = 0, maior2 = 0;

        for(map<int,int> :: iterator it = jog.begin(); it != jog.end(); it++)
        {
            //cout << (*it).fi << " = " << (*it).se << endl;
            if((*it).se > maior)
            {
                maior2 = maior;
                maior = (*it).se;
            }
            else if((*it).se > maior2)
            {
                maior2 = (*it).se;
            }
        }
        for(map<int,int> :: iterator it = jog.begin(); it != jog.end(); it++)
        {
            if((*it).se == maior2)
            {
                cout << (*it).fi << " ";
            }
        }
        cout << endl;
    }
    return 0;
}