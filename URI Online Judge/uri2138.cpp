/*input
10 15
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
    string num;
    int aux;

    while(cin >> num)
    {
        int tam = num.size();
        int quant = 0, maior = -1;
        map<int, int> m;
        map<int, int> :: iterator it;

        f(0, tam)
        {
            aux = num[i] - '0';
            //cout << aux;
            m[aux]++;
        }
        for(it = m.begin(); it != m.end(); it++)
        {
            //cout << "it->second " << it->second << endl;
            //cout << "it->first " << it->first << endl;
            if(it->second >= quant && it->first > maior){
                maior = it->first;
                quant = it->second;
            }
        }
        cout << maior << endl;
    }

    return 0;
}