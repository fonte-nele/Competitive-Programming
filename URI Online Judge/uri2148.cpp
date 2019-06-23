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
typedef long long ll;
typedef unsigned long long int ull;
typedef string st;
typedef vector <string> vs;
typedef pair <int, int> ii;
typedef pair <int, pair <int, int> > iii;
typedef vector <int> vi;
typedef vector <ii> vii;
typedef map <int, int> mii;

ll memo[100][100];
int s, d;

ll solve(int soma, int dados)
{
    if(dados == d)
        return soma == s;
    if(soma >= s)
        return 0;
    if(memo[soma][dados] != -1)
        return memo[soma][dados];
    ll ans = 0;
    for(int i = 1; i <= 6; i++)
    {
        ans += solve(soma + i, dados +1);
    }
    return memo[soma][dados] = ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int quant;
    cin >> quant;

    while(quant--)
    {
        cin >> s >> d;
        mem(memo, -1);
        //long double result = solve(0,0);
        //cout << fixed << setprecision(15) << result/(long double)powl(6, d) << endl;
        printf("%.15Lf\n", solve(0, 0)/ (long double)powl(6, d));
    }

    return 0;
}