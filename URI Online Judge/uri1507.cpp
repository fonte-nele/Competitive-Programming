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
    
    int n, q;
    string caso, querie;
    cin >> n;
    
    while(n--)
    {
        cin >> caso;        
        cin >> q;
        while(q--)
        {
            bool flag = false;
            cin >> querie;
            int tam = querie.size(), tam2 = caso.size();
            int pos = 0, pos1 = 0;

            while(pos < tam && pos1 < tam2)
            {
                if(querie[pos] == caso[pos1])
                {
                    pos++;
                    pos1++;
                }
                else
                    pos1++;

                if(pos == tam)
                    flag = true;
            }

            if(flag)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }

    return 0;
}