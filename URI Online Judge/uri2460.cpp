/*input
8
5 100 9 81 70 33 2 1000
3
9 33 5
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
    
    int quant, n, num;
    cin >> quant;
    vector<int> v(quant);
    f(0, quant)
    {
        cin >> num;
        v[i] = num; 
    }
    cin >> n;
    int apagar[100005] = {0};
    f(0, n)
    {
        cin >> num;
        apagar[num] = 1;;
    }
    int cont = 0;
    f(0, quant)
    {
        if(apagar[v[i]] == 0)
        {
            if(cont == 0)
                cout << v[i];
            else
                cout << " " << v[i];

            cont++;
        }
    }
    cout << endl;

    return 0;
}