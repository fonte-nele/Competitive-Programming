/*input
99999999999999999999999999999999999999999999999999999999
465789546
*/

// Problem L - Resto 2.0
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
typedef long long int ll;
typedef unsigned long long int ull;
typedef string st;
typedef vector <string> vs;
typedef pair <int, int> ii;
typedef pair <double, ii > iii;
typedef vector <int> vi;
typedef vector <ii> vii;
typedef map <int, int> mii;

void resto(string a, ll b){
	vector<int> v;
	ll mod = 0;

	f(0, (int)a.size()) { 
           
        int digit = a[i] - '0'; 
        mod = mod * 10 + digit;
        int quo = mod / b; 
        v.push_back(quo); 
  
        mod = mod % b;         
    } 
  
    cout << mod << endl; 
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a;
    ll b;
    cin >> a >> b;

    resto(a, b);

    return 0;
}
