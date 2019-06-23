/*input
2 2
2 1
2 1 1 1
2 1 1 0
5 4
3 2 1 4 5
5 1 1 1 1 1 1
5 0 0 1 0 1 0
3 0 0 1 0
2 1 0 1
0 0
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
#define INF 0x3f3f3f3f
#define pi 3.14159265359
typedef long long ll;
typedef unsigned long long int ull;
typedef string st;
typedef vector <string> vs;
typedef pair <int, int> ii;
typedef pair <double, ii > iii;
typedef vector <int> vi;
typedef vector <ii> vii;
typedef map <int, int> mii;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int p, r, quant, ordem, res, cont = 1;

    while(cin >> p >> r && p && r)
    {
        vector<int> part(p);
        f(0, p)
            cin >> part[i];

        f(0, r)
        {
            cin >> quant >> ordem;
            list<int> pos;
            list<int> :: iterator it;
            fr(0, quant)
            {
                cin >> res;
                if(res != ordem){
                    //cout << j << " == " << part[j] << endl;
                    pos.push_front(j);
                }
            }
            for(it = pos.begin(); it != pos.end(); it++)
            {
                part.erase(part.begin()+ *it);
            }
        }
        cout << "Teste " << cont << endl;
        cout << part[0] << endl << endl;
        cont++;
    }

    return 0;
}