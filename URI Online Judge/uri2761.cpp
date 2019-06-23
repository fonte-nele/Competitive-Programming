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

typedef long long int ll;
typedef unsigned long long int ull;
typedef string st;
typedef vector <string> vs;
typedef vector <int> vi;
typedef map <int, int> mii;
typedef pair <int, int> ii;
typedef pair <int, pair <int, int> > iii;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a;
    float b;
    char c, s[51];
    scanf("%d",&a);
    scanf("%f",&b);
    getchar();
    scanf("%c",&c);
    getchar();
    gets(s);
    
    printf("%d%.6f%c%s\n", a, b, c, s);
    printf("%d\t%.6f\t%c\t%s\n", a, b, c, s);
    printf("%10d%10.6f%10c%10s\n", a, b, c, s);

    return 0;
}