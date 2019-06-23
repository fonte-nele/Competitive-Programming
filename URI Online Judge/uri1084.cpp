/*input
4 2
3759
6 3
123123
7 4
1000000
7 3
1001234
6 2
103759
0 0
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
    long n, d;
    string num;

    while(cin >> n >> d && n != 0 && d != 0)
    {
        cin >> num;
        int i, removidos;
        deque<char> dig;

        for(i=0, removidos=0; i < n && removidos < d; i++)
        {
            char digito = num[i];
            if (dig.empty() || digito < dig.back()) 
                dig.push_back(num[i]);
            else 
            {
                while (!dig.empty() && dig.back() < digito && removidos < d) 
                {
                    dig.pop_back();                    
                    removidos++;
                }    
                dig.push_back(digito);         
            }
        }

        for (; i < n; i++) 
            dig.push_back(num[i]);
        
        for (int i = 0, q = n - d; i < q; i++) {
            cout << dig.front();
            dig.pop_front();
        }
        cout << endl;

    }

    return 0;
}