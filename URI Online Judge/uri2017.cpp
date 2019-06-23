/*input
cbufllatkz
5
cbofllafkz
cbhflluteq
cbuzqzatmz
msrzlxaekz
xbufpltpkl
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
typedef long long ll;
typedef unsigned long long int ull;
typedef string st;
typedef vector <string> vs;
typedef pair <int, int> ii;
typedef pair <int, pair <int, int> > iii;
typedef vector <int> vi;
typedef vector <ii> vii;
typedef map <int, int> mii;

/*int memo[10005][10005];

int dist(string pal1, string pal2, int tam1, int tam2)
{
    for(int i=0; i<=tam1; i++)
        memo[i][0] = i;

    for(int j=0; j<=tam2; j++)
        memo[0][j] = j;

    int c;
    for(int i=1; i<=tam1; i++)
    {
        for(int j=1; j<=tam2; j++)
        {
            if(pal1[i-1] == pal2[j-1])
                c=0;
            else
                c=1;

            memo[i][j] = min(min(memo[i-1][j-1]+c, memo[i][j-1]+1),memo[i-1][j]+1);
        }
    }
    return memo[tam1][tam2];
}*/

int hammingDist(string str1, string str2)
{
    int i = 0, count = 0;
    f(0, (int)str1.size())
    {
        if (str1[i] != str2[i])
            count++;
    }
    return count;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    st x, compar;
    int menor = INT_MAX, k, custo, pos;
    cin >> x >> k;
    //cout << x << endl;

    f(0, 5)
    {
        cin >> compar;
        custo = hammingDist(x, compar);

        if(custo < menor)
        {
            menor = custo;
            pos = i + 1;
        }
        //cout << custo << " " << compar << endl;
    }
    
    if(menor > k)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << pos << endl;
        cout << menor << endl;
    }

    return 0;
}