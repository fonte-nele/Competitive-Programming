/*input
5
1 3 4 3 1
3
1 1 1
7
1 1 3 3 5 5 5
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
    int n;
    long long num;

    while(cin >> n && n != 0)
    {
        map<long long, int> m;
        map<long long, int> :: iterator it;
        f(0, n){
            cin >> num;
            m[num] ++;
        }
        //cout << n << endl;
        for(it = m.begin(); it != m.end(); it++)
        {
            //cout << it->first << " -> " << it->second << endl;
            if(it->second % 2 != 0){
                cout << it->first << endl;
                break;
            }
        }
    }
    
    return 0;
}