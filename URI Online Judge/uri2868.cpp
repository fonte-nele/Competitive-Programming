/*input
3
7 + 6 = 10
7 x 6 = 50
7 - 6 = 5
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
    
    int n, num1, num2, resultado, resp, dif;
    string op, ig;
    cin >> n;

    f(0, n){
        cin >> num1 >> op >> num2 >> ig >> resultado;
        //cout << num1 << " " << num2 << " " << resultado << endl;  
        if(op == "+")
            resp = num1 + num2;
        else if(op == "x")
            resp = num1 * num2;
        else
            resp = num1 - num2;

        dif = abs(resp - resultado);
        //cout << resp << " " << resultado << " " << dif << endl;
        cout << "E";
        fr(0, dif)
            cout << "r";
        cout << "ou!" << endl;
    }

    return 0;
}