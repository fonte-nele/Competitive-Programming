/*input
2 
Foulupukki mielellaan saa kirjetta. doulupukkA.
Joulupukku saapuu sinne huomenna. Joulupukke rakastaa sinua ja siskosi.
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
    
    int n, ind, pos ;
    string frase;
    cin >> n;
    getline(cin, frase);

    while(n--)
    {
        ind = 0;
        getline(cin, frase);
        //cout << frase << endl;

        pos = frase.find("oulupukk", ind);
        while(pos != -1)
        {
            //cout << pos << endl;
            frase[pos-1] = 'J';
            frase[pos+8] = 'i';
            ind+=8;
            if(ind > frase.size())
                break;
            pos = frase.find("oulupukk", ind);
            if(pos == -1)
                break;
        }
        cout << frase << endl;
    }

    return 0;
}