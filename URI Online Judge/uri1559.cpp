/*input
3
0 0 0 8
0 0 2 16
0 0 2 32
2 8 16 32
0 0 0 0
0 0 0 0
0 0 0 0
2 0 0 0
2 4 8 16
4 8 16 32
8 16 32 64
16 32 64 128
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
    int t;
    
    cin >> t;
    while(t--)
    {
        int m[4][4];
        vector<bool> flag(4, false);
        bool ok = false;
        f(0, 4){
            fr(0, 4){
                cin >> m[i][j];
                if(m[i][j] == 2048)
                    ok = true;
            }
        }
        if(ok)
            cout << "NONE" << endl;
        else
        {
            for(int i = 0; i < 4; i++){
                for(int j = 1; j < 4; j++){
                    if((m[j][i] == m[j-1][i] && m[j][i] != 0)|| (m[j][i] == 0 && m[j-1][i] != 0))
                        flag[0] = true;
                }
            }

            for(int i = 0; i < 4; i++){
                for(int j = 3; j > 0; j--){
                    if((m[i][j] == m[i][j-1] && m[i][j] != 0)|| (m[i][j] != 0 && m[i][j-1] == 0))
                        flag[1] = true;
                }
            }

            for(int i = 0; i < 4; i++){
                for(int j = 1; j < 4; j++){
                    if((m[i][j] == m[i][j-1] && m[i][j] != 0)|| (m[i][j] == 0 && m[i][j-1] != 0))
                        flag[2] = true;
                }
            }
        
            for(int i = 3; i >= 0; i--){
                for(int j = 3; j > 0; j--){
                    //cout << m[j][i] << " " << m[j-1][i] << " ";
                    
                    if((m[j][i] == m[j-1][i] && m[j][i] != 0)|| (m[j][i] != 0 && m[j-1][i] == 0))
                        flag[3] = true;
                }
                //cout << endl;
            }

            if(flag[0])
                cout << "DOWN";

            if(flag[1]){
                if(flag[0])
                    cout << " LEFT";
                else
                    cout << "LEFT";
            }

            if(flag[2]){
                if(flag[0] || flag[1])
                    cout << " RIGHT";
                else
                    cout << "RIGHT";
            }

            if(flag[3]){
                if(flag[0] || flag[1] || flag[2])
                    cout << " UP";
                else
                    cout << "UP";
            }

            if(!flag[0] && !flag[1] && !flag[2] && !flag[3])
                cout << "NONE";

            cout << endl;
        }
    }
    return 0;
}