/*input
3
50 50 50
5
50 100 100 100 100
9
25 50 75 100 25 50 75 100 25
5
35 45 20 22 33
3
100 100 100
-1
*/

// URI 2044 - Em Dívida
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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    while(cin >> n && n != -1){
        int cnt = 0, num, soma = 0;
        f(0, n){
            cin >> num;
            soma += num;
            if(soma % 100 == 0){
                cnt++;
                soma = 0;
            }
        }

        cout << cnt << endl;
    }

    return 0;
}