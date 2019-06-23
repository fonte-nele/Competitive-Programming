/*input
2
4
sapo chirrion
bala charrin
vela chirrin
copo chirrin
3
galo chirrin
galo chirrion
raposa chirrin
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
    int quant, num;
    st nome, chirrin;

    cin >> quant;
    while(quant--)
    {
        cin >> num;
        set<st> s;
        f(0, num)
        {
            cin >> nome >> chirrin;
            

            if(chirrin == "chirrin")
            {
                s.insert(nome);
            }
            else if(chirrin == "chirrion")
            {   
                s.erase(nome);
            }
        }
        cout << "TOTAL" << endl;
        for(set<st> :: iterator it1 = s.begin(); it1 != s.end(); it1++)
        {
            cout << *it1 << endl;
        }

    }

    return 0;
}