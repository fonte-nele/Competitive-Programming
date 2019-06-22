/*input
30 1 95
*/

// D - Formatando Datas 
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

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;

    cin >> a >> b >> c;
    if((a > 12 && b > 12 && c > 12) || (a > 30 && b > 30) || (a > 30 && c > 30) || (b > 30 && c > 30)) 
        cout << "invalida" << endl;
    else if((a <= 12 && b <= 12) || (b <= 12 && c <= 12) || (a <= 12 && c <= 12) || (a <= 30 && b <= 30 && c <=30) || (b <= 30 && c <= 30 && a<=30) || (a <= 30 && c <= 30 && b <=30))
        cout << "ambigua" << endl;
    else if(a <= 30 && b <= 12)
        cout << "d-m-a" << endl;
    else if(a <= 30 && c <= 12)
        cout << "d-a-m" << endl;
    else if(a <= 12 && b <= 30)
        cout << "m-d-a" << endl;
    else if(a <= 12 && c <= 30)
        cout << "m-a-d" << endl;
    else if(b <= 12 && c <= 30)
        cout << "a-m-d" << endl;
    else if(b <= 30 && c <= 12)
        cout << "a-d-m" << endl;

    return 0;
}