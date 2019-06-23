/*input
3
1 85
2 91
3 73
5
12300 81
12601 99
15023 76
10111 99
212 99
0
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
    int quant, cont = 1, maior;
    
    while(cin >> quant && quant != 0) 
    {
        maior = 0;
        vector<pair<int, int>> v(quant);
    
        f(0, quant)
        {
            cin >> v[i].first >> v[i].second;
            if(v[i].second > maior)
                maior = v[i].second;
        }

        cout << "Turma " << cont << endl;
        f(0, quant)
        {
            //cout << v[i].first << " " << v[i].second << endl;
            if(v[i].second == maior)
                cout << v[i].first << " ";
        }
        cout << endl << endl;
        cont++;
    }
    return 0;
}