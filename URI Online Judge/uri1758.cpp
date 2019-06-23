/*input
2
3 5
3.1 7.7 0.5
0.5 5.9 5.5
0.1 8.5 9.2
9.3 4.6 8.0
5.4 3.5 0.0
5 3
9.0 10.0 6.0 6.0 6.0
10.0 5.0 5.0 5.0 5.0
10.0 5.0 5.0 4.0 0.0
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
    int t, p, n;
    cin >> t;

    while(t--)
    {
        cin >> p >> n;
        double m[n][p], soma, media, maior1, maior2;
        f(0, n)
        {
            fr(0, p)
            {
                cin >> m[i][j];
            }
        }
        f(0, n){
            soma = 0.0;
            maior1 = 0.0;
            maior2 = 0.0;
            fr(0, p){
                if(m[i][j] >= 7.0){
                    if(m[i][j] > maior1)
                        maior1 = m[i][j];
                }
                else if(m[i][j] > maior2)
                    maior2 = m[i][j];
                soma += m[i][j];
            }
            media = soma / p;
            if(media < 4.0)
                cout << fixed << setprecision(2) << media << endl;
            else if(media < 7.0)
            {
                if(media < maior2)
                    cout << fixed << setprecision(2) << maior2 << endl;
                else
                    cout << fixed << setprecision(2) << media << endl;
            }
            else
            {
                if(media < maior1)
                    cout << fixed << setprecision(2) << maior1 << endl;
                else
                    cout << fixed << setprecision(2) << media << endl;
            }
        }
    }

    return 0;
}