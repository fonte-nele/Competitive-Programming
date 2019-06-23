/*input
7
5
>.....v
.......
.......
.......
^.....<
*/

// URI 1855 - Mapa do Meistre
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
    int m, n, visited[105][105];
    string mapa[105];
    bool flag = false;

    cin >> n >> m;
    f(0, m){
        cin >> mapa[i];
    }

    int i, j, avi, avj;
    i = j = avi = 0;
    avj = 1;
    memset(visited, 0, sizeof(visited));
    while(true)
    {
        if(mapa[i][j] == '>'){
            avi = 0;
            avj = 1;
        }else if(mapa[i][j] == '<'){
            avi = 0;
            avj = -1;
        }else if(mapa[i][j] == 'v'){
            avi = 1;
            avj = 0;
        }else if(mapa[i][j] == '^'){
            avi = -1;
            avj = 0;
        }else if(mapa[i][j] == '*'){
            flag = true;
            break;
        }
        i += avi;
        j += avj;
        if(visited[i][j] || i >= m || j >= n)
            break;
        visited[i][j] = 1;
    }
    if(!flag)
        cout << "!" << endl;
    else
        cout << "*" << endl;

    return 0;
}