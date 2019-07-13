/*input
3
AJ23456QK
AJ23456Q
QJJJJ754AK
*/

// Problem C - Truco da Galera 1.0
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
#define pi 3.1415926535897
#define MAX 10005
#define endl "\n"
typedef long long int ll;
typedef unsigned long long int ull;
typedef string st;
typedef vector <string> vs;
typedef pair <int, int> ii;
typedef pair <double, ii > iii;
typedef vector <int> vi;
typedef vector <ii> vii;
typedef map <int, int> mii;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    string num;

    cin >> t;

    while(t--){
        cin >> num;
        
        bool flag[4] = {false}, ok = false;

        if(num.find('Q') != -1)
            flag[0] = true;
        if(num.find('J') != -1)
            flag[1] = true;
        if(num.find('K') != -1)
            flag[2] = true;
        if(num.find('A') != -1)
            flag[3] = true;

        f(0, 4){
            if(!flag[i]){
                cout << "Ooo raca viu" << endl;
                ok = true;
                break;
            }
        }
        if(!ok)
            cout << "Aaah muleke" << endl;
    }

    return 0;
}
