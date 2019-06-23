/*input
5
4 498 500 498 498
10 60 60 70 70 70 70 80 90 90 100
5 200 190 180 170 160
2 1000 900
4 20 20 20 20
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
    int n, quant, menor = INT_MAX, dif, dif2, pos;

    cin >> n;
    f(0, n)
    {
        dif = 0;
        dif2 = 0;
        cin >> quant;
        vector<int> v(quant);
        fr(0, quant)
        {
            cin >> v[j];
        }
        fr(1, quant)
        {
            if(v[j] - v[j-1] >= 0)
            {
                dif += v[j] - v[j-1];
            }
        }
        //cout << "Dif " << dif << endl;
        reverse(v.begin(), v.end());
        fr(1, quant)
        {
            if(v[j] - v[j-1] >= 0)
            {
                dif2 += v[j] - v[j-1];
            }
        }
        //cout << "Dif2 " << dif2 << endl;
        if(dif < menor || dif2 < menor)
        {
            pos = i+1;
            menor = min(dif, dif2); 
        }
    }
    cout << pos << endl;

    return 0;
}