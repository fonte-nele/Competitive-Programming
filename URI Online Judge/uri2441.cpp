/*input
0 200 400
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
    int f1, f2, f3;

    cin >> f1 >> f2 >> f3;

    vector<int> janela(600, 0);
    f(0, 200)
    {
        janela[f1+i] = 1;
        janela[f2+i] = 1;
        janela[f3+i] = 1;
    }
    int soma = 0;

    f(0, 600)
    {
        if(janela[i] == 0)
            soma++;
    }
    cout << soma*100 << endl;

    return 0;
}