/*input
+ 2 2
- 5 * 2 * 7 8
/ 2 0
/ 0 2
2 3 +
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

#define MAX_N 2*(1000000)
char line[MAX_N + 10];

int ZERO = 0;
int op(int a, int b, char ch){
    if(ch=='-') return b-a;
    if(ch=='+') return b+a;
    if(ch=='*') return a*b;
    if(ch=='/') {
        if(!a) { ZERO = 1; return 1;}
        return b/a;
    }
}

int N;
bool OK;
ii fi(int p){
    if(p >= N) return make_pair(0,-1);
    if(line[p]==' ') return fi(p+1);
    if(isdigit(line[p]) ) return make_pair(line[p]-'0', p+1);
    ii p1 = fi(p+1); 
    if(p1.second == -1 || !OK ) {OK=0; return make_pair(-1,-1); }
    ii p2 = fi(p1.second);
    int r = op(p1.first, p2.first, line[p]);
    return make_pair(r, p2.second);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    while(gets(line))
    {
        N = strlen(line);
        OK = 1;
        ZERO = 0;
        ii r= fi(0);

        if(!OK || r.second != N) 
            printf("Invalid expression.\n");
        else if( ZERO ) 
            printf("Division by zero.\n");
        else{
            printf("The answer is %d.\n", r.first);
        }
    }

    return 0;
}