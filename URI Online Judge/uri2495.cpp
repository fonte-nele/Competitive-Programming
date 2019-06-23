/*input
50
14 17 16
48 15 43
1 33 49
2 8 41
21 6 30
35 37 32
50 40 13
34 12 5
39 9 47
4 46 18
23 31 7
24 10 3
42 29 19
45 27 25
38 26 44
36 22 11
28
40
16 26 15
36 37 38
20 40 23
19 24 1
22 13 2
9 7 29
39 30 21
3 18 17
35 27 11
5 8 6
12 25 14
4 31 28
34 32 33
10
5 2 3
1 6 8
4 9 7
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
    
    int num, valor; 
    while(cin >> num)
    {
        vector<int> v(num+1);
        v.assign(num+1, 0);
        f(0, num-1){
            cin >> valor;
            v[valor] = 1;
        }
        f(1, num+1)
        {
            if(v[i] == 0)
            {
                cout << i << endl;
                break;
            }
        }
    }

    return 0;
}