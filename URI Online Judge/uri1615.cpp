/*input
3
2 3
1 1 2
2 5
1 2 2 1 2
3 4
1 2 3 1
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
    int quant, n, m, cand, maior, pos;

    cin >> quant;
    while(quant--)
    {
        cin >> n >> m;
        map<int, int> cont;
        maior = 0;

        f(0, m)
        {
            cin >> cand;
            cont[cand]++;
        }
        f(1, n+1)
        {
            if(cont[i] > maior)
            {
                maior = cont[i];
                pos = i;
            }
        }
        //out << "maior " << maior << endl; 
        //cout << "mcad  " << pos << endl; 
        if((((double)maior/m)*100) > 50.0)
            cout << pos << endl;
        else
            cout << -1 << endl;

    }

    return 0;
}