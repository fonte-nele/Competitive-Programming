/*input
7
5 3 9 4 6 3 7
*/

// H - Smider Pan
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

void lis(vector<int> altura, int *dp, int n){
    
    dp[0] = 1;

    f(1, n){
        dp[i] = 1;
        fr(0, i){
            if(altura[i] > altura[j] && dp[i] < dp[j] +1)
                dp[i] = dp[j] + 1;
        }
    }
    //return *max_element(dp, dp+n);
}

void lis2(vector<int> altura, int *dp, int n){
    
    dp[n-1] = 1;

    for(int i = n-2; i >= 0; i--){
        dp[i] = 1;
        for(int j = n-1; j >= i; j--){
            if(altura[i] > altura[j] && dp[i] < dp[j] +1)
                dp[i] = dp[j] + 1;
        }
    }
    //return *max_element(dp, dp+n);
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;

    cin >> n;
    int dp[10005], dp2[10005], maior = 0;
    vector<int> altura(n);

    f(0, n){
        cin >> altura[i];
    }

    lis(altura, dp, n);    
    //reverse(altura.begin(), altura.end());
    lis2(altura, dp2, n);

    for(int i = 0; i < n; i++){
        //cout << "dp[i] " << dp[i] << " - dp2[j] " << dp2[i] << endl;
        if(dp[i] + dp2[i] > maior)
            maior = dp[i] + dp2[i];
    }
    cout << maior << endl;
    return 0;
}