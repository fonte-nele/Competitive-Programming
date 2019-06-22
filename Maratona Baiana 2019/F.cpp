/*input
2 4 
abcd
efgh
wxyz
tugv
*/

// F - Jogo dos 7 erros
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

typedef struct pos
{
    int lin;
    int col;
}Pos;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<Pos> res;
    int l, c;

    cin >> l >> c;
    char quadros[l][c], jogo[l][c];
    f(0, l){
        fr(0, c){
            cin >> quadros[i][j];
        }
    }

    f(0, l){
        fr(0, c){
            cin >> jogo[i][j];
        }
    }

    f(0, l){
        fr(0, c){
            if(jogo[i][j] != quadros[i][j]){
                res.push_back({i+1, j+1});
            }
        }
    }

    f(0, 7){
        cout << res[i].lin << " " << res[i].col << endl;
    }
    return 0;
}