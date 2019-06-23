/*input
10
14
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
    int num, a, b;

    f(1, 17){
        cin >> num;
        if(num == 1)
            a = i;
        else if(num == 9)
            b = i;
    }
    if(a > b)
        swap(a, b);

    if(a<=8 && b>8)
        cout << "final" << endl;
    else{
        if((a<=4 && b>4) || (a<=12 && b>12))
            cout << "semifinal" << endl;
        else{
            if (( a<= 2 && b > 2 ) || (a <= 6 && b > 6 ) || ( a <= 10 && b > 10 ) || ( a <= 14 && b > 14 ) ) 
                cout << "quartas" << endl;
            else
                cout << "oitavas" << endl;
        }
    }
    return 0;
}