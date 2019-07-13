/*input
5
*/

// Problem M - Overflow
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
#define MAX 10005
#define endl "\n"
#define M_PI 3.14159265358979323846
#define M_E 2.71828182845904523536
typedef long long int ll;
typedef unsigned long long int ull;
typedef string st;
typedef vector <string> vs;
typedef pair <int, int> ii;
typedef pair <double, ii > iii;
typedef vector <int> vi;
typedef vector <ii> vii;
typedef map <int, int> mii;

long long fat(ll n) 
{
    if (n < 0) 
        return 0; 
    if (n <= 1) 
        return 1; 
  
    // Use Kamenetsky formula to calculate the number of digits
    double x = ((n * log10(n / M_E) +  log10(2 * M_PI * n) / 2.0)); 
  
    return floor(x) + 1; 
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;

    cout << fat(n) << endl;

    return 0;
}
