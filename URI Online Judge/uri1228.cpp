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

typedef long long int ll;
typedef unsigned long long int ull;
typedef string st;
typedef vector <string> vs;
typedef vector <int> vi;
typedef map <int, int> mii;
typedef pair <int, int> ii;
typedef pair <int, pair <int, int> > iii;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int quant, cont;
    
    while(cin >> quant)
    {
        cont = 0;
        vector<int> v(quant);
        vector<int> v2(quant);
        f(0, quant)
        {
            cin >> v[i];
        }
        f(0, quant)
        {
            cin >> v2[i];
        }

        f(0, quant)
        {
            fr(i, quant)
            {
                if(v2[i] == v[j])
                {
                    if(i == j)
                        break;

                    cont += j-i;

                    for(int k = j; k >= i; k--)
                        v[k] = v[k - 1];

                    v[i] = v2[i];
                    break;
                }
            }
        }
        cout << cont << endl;
    }

    return 0;
}