/*input
10 20 30 40 50 60 
6 
6 1 2 3 4 5 6 
7 4 5 6 7 8 9 10 
8 10 20 30 40 41 42 43 44 
6 11 22 33 44 55 59 
9 23 24 25 26 27 31 32 33 34 
6 7 20 21 30 50 60
*/

// G - Mega Sena
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
#define MAX 305
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

    vector<int> res(6);
    int n, quant, valor, quadra, quina, sena;

    quadra = quina = sena = 0;
    f(0, 6){
        cin >> res[i];
    }
    cin >> n;

    f(0, n){
        cin >> quant;
        int cnt = 0;
        fr(0, quant){
            cin >> valor;

            if(find(res.begin(), res.end(),valor) != res.end()){
                cnt++;
            }
        }
        if(cnt == 4)
            quadra++;
        else if(cnt == 5)
            quina++;
        else if(cnt == 6)
            sena++;
        //cout << "cnt = " << cnt << endl;
    }
    cout << sena << " " << quina << " " << quadra << endl;

    return 0;
}