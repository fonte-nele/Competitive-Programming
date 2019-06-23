/*input
2000
3600
4515
2001
*/

// URI 1279 - Ano Bissexto ou Ano não Bissexto
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
typedef long long int ll;
typedef unsigned long long int ull;
typedef string st;
typedef vector <string> vs;
typedef pair <int, int> ii;
typedef pair <double, ii > iii;
typedef vector <int> vi;
typedef vector <ii> vii;
typedef map <int, int> mii;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long i, l, le, f, m4, m15, m55, m100, m400, linha = 0;
    st ano;

    while(cin >> ano)
    {
        if(linha == 1){
            printf("\n");
        }
        linha = 1;
        le = f = m4 = m15 = m55 = m100 = m400 = 0;
 
        l = ano.size();
 
        for (i = 0; i < l; ++i)
        {
            m4 = ((m4 * 10) + (ano[i] - '0')) % 4;
            m15 = ((m15 * 10) + (ano[i] - '0')) % 15;
            m55 = ((m55 * 10) + (ano[i] - '0')) % 55;
            m100 = ((m100 * 10) + (ano[i] - '0')) % 100;
            m400 = ((m400 * 10) + (ano[i] - '0')) % 400;
        }
 
        if((m4 == 0 && m100 != 0) || (m400 == 0)){
            printf("This is leap year.\n");
            le = f = 1;
        }
 
        if(m15 == 0){
            printf("This is huluculu festival year.\n");
            f = 1;
        }
 
        if(le == 1 && m55 == 0) printf("This is bulukulu festival year.\n");
        if(f == 0) printf("This is an ordinary year.\n");
    }

    return 0;
}