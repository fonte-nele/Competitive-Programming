/*input
6
2 1 5 3 6 4 
*/

// URI 2135 - Recuperação
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
#define rp(i, n) for(int i = 0; i < (int)n; ++i)

int findAns(vector<int>& vec)
{
    rp(i, vec.size())
    {
        int sum = 0;
        rp(j, i)
            sum += vec[j];
        if(sum == vec[i]) return vec[i];
    }
    return -1000;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, t = 1;

    while(cin >> n)
    {
        vector<int> vec(n);
        rp(i, n)
        {
            cin >> vec[i];
        }

        int resp = findAns(vec);

        cout << "Instancia " << t++ << endl;
        if(resp == -1000)
            cout << "nao achei" << endl;
        else
            cout << resp << endl;

        cout << endl;
    }
    return 0;
}