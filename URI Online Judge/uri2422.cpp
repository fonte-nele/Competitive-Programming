/*input
4
1
2
3
5
8
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

void buscaBinaria(vector<int> &v, int k, int l, int r, int num, bool *flag)
{
    while(l <= r) 
    { 
        int m = l + (r-l)/2; 
  
        if (v[m] + num == k) {
            *flag = false;
            cout << num << " " << v[m] << endl;
            break; 
        }
  
        if (v[m] + num < k) 
            l = m + 1; 
        else
            r = m - 1; 
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    bool flag;

    cin >> n;
    vector<int> v(n);

    f(0, n)
        cin >> v[i];

    cin >> k;
    flag = true;
    f(0, n){
        if(flag)
            buscaBinaria(v, k, 0, n, v[i], &flag);
        else
            break;
    }

    
    return 0;
}