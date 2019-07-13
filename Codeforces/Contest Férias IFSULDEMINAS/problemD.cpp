/*input
2
258JAA73Q4K
56AK2Q4J3K7AQ
*/

// Problem D - Truco da Galera 2.0
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
        
        bool ok = false;

        int tam = num.size(), pos = 0;
        f(0, tam){
            if(pos == 0 && num[i] == 'Q'){
                pos = 1;
            }else if(pos == 1 && num[i] == 'J'){
                pos++;
            }else if(pos == 2 && num[i] == 'K'){
                pos++;
            }else if(pos == 3 && num[i] == 'A'){
                ok = true;
                break;
            }
        }
        if(ok)
            cout << "Agora vai" << endl;
        else
            cout << "Agora apertou sem abracar" << endl;
    }

    return 0;
}
