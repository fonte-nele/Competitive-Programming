/*input
4
4 9 43 10
3
0 100 50
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
    int n, letalidade, pos1, pos2;

    while(cin >> n)
    {
        letalidade = 0;
        std::vector<int> v(n);
        f(0, n)
            cin >> v[i];
        
        sort(v.begin(), v.end());
        // f(0, n)
        //     cout << v[i] << " ";
        int tam = v.size();
        if(tam > 3){
            pos1 = 0;
            pos2 = tam-1;
            while(pos1 < pos2)
            {
                letalidade += (v[pos2] - v[pos1]);
                pos1++;
                pos2--;
            }
        }
        else if(tam == 1)
            letalidade = v[0];
        else
            letalidade = (v[tam-1] - v[0]);


        cout << letalidade << endl;
    }
    
    return 0;
}