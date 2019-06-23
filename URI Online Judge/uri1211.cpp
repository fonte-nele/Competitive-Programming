/*input
2
12345
12354
3
535456
535488
835456
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
    int n, cont;

    while(cin >> n)
    {
        cont = 0;
        vector<string> v(n);
        f(0, n){
            cin >> v[i];
        }
        sort(v.begin(), v.end());

        int tam = v[0].size();
        if(n == 1)
            cout << 0 << endl;
        else{
            f(1, n){
                if(v[i] == v[i-1]){
                    cont += tam;
                    continue;
                }
                fr(0, tam-1)
                {
                    if(v[i][j] == v[i-1][j])
                        cont++;
                    else
                        break;
                }
            }
            cout << cont << endl;
        }

    }

    return 0;
}