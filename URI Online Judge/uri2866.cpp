/*input
3
NoTApasCAL
atEQUEatabELATERMINE
zoEIrrRRRRa
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
    
    int n;
    string frase;
    cin >> n;
    getline(cin, frase);

    f(0, n){
        string resp = "";
        getline(cin, frase);
        f(0, (int)frase.size()){
            if(islower(frase[i]))
                resp += frase[i];
        }
            
        reverse(resp.begin(), resp.end());
        cout << resp << endl;
    }

    return 0;
}