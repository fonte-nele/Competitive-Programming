/*input
4
Pikachu 81
35 7 22850
55 8 23140
30 13 17280
90 5 24795
Bulbasaur 50
45 9 20000
49 12 40000
49 3 60000
45 8 10000
Charmander 30
39 5 35000
52 14 60000
43 7 38000
65 15 200000
Squirtle 90
44 10 180000
48 2 220000
65 11 175000
43 8 192000
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
    
    int n, nivel, bs, iv, ev, cont = 1, hp, at, df, sp;
    string nome;
    cin >> n;
    f(0, n)
    {
        cin >> nome >> nivel;
        cin >> bs >> iv >> ev;

        hp = ((iv+bs+sqrt(ev)/8 + 50) * nivel)/50 + 10;

        cout << "Caso #" << cont << ": " << nome << " nivel " << nivel << endl;
        cout << "HP: " << hp << endl;
        
        cin >> bs >> iv >> ev;
        at = ((iv+bs+sqrt(ev)/8) * nivel)/50 + 5;
        cout << "AT: " << at << endl;
        
        cin >> bs >> iv >> ev;
        df = ((iv+bs+sqrt(ev)/8) * nivel)/50 + 5;
        cout << "DF: " << df << endl;
        
        cin >> bs >> iv >> ev;
        sp = ((iv+bs+sqrt(ev)/8) * nivel)/50 + 5;
        cout << "SP: " << sp << endl;
        cont++;
    }

    return 0;
}