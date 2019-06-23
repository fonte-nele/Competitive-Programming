/*input
3 5
1 1
1 0 0 0 1
1 0 0 1 1
1 1 1 1 0
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

const int di[] = {-1, 0, 1,  0};
const int dj[] = { 0, 1, 0, -1};

bool is_valid(int i, int j, int m, int n) {
    return i >= 0 and i < m and j >= 0 and j < n;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i, j, m, n, a, b;
    bool flag = true;
    
    cin >> m >> n >> a >> b;
    a -= 1;
    b -= 1;
    int mat[m][n];
    bool pos[m][n];

    f(0, m){
        fr(0, n){
            cin >> mat[i][j];
            pos[i][j] = true;
        }
    }
    queue<ii> fila;
    fila.push({a,b});
    while(!fila.empty())
    {
        i = fila.front().first;
        j = fila.front().second;
        fila.pop();

        for (int k = 0; k < 4; k++) 
        {
            int ii = i + di[k];
            int jj = j + dj[k];
            if (is_valid(ii, jj, m, n) and mat[ii][jj] == 1) {
                mat[ii][jj] = 0;
                fila.push({ii, jj});
            }
        }
    }


    cout << i+1 << " " << j+1 << endl;
    
    return 0;
}