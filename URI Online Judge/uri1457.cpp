/*input
4
3!
10!!!
19!!!!
4!!
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

    int quant;
    cin >> quant;
    
    while(quant--)
    {
        st num;
        st x;

        cin >> x;

        //cout << x << endl;
        int tam = x.size();
        ll fat;
        f(0, tam)
        {
            if(x[i] == '!')
            {
                num = x.substr(0, i);
                fat = tam - i;
                break;
            }
        }
        ll v = 0;
        stringstream valor(num);
        valor >> v;

        //cout << v << endl;
        //cout << fat << endl;
        ll resp = 1;
        for(ll i = v; i >= 2; i-=fat)
        {
            //cout << resp << " " << i << endl;
            resp *= i;
        }
        cout << resp << endl;
    }

    return 0;
}