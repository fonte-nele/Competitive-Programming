/*input
04:16
07:31
08:32
00:00
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
#define INF 0x3f3f3f3f3f3f3f3fLL
typedef long long ll;
typedef unsigned long long int ull;
typedef string st;
typedef vector <string> vs;
typedef pair <int, int> ii;
typedef pair <int, pair <int, int> > iii;
typedef vector <int> vi;
typedef vector <ii> vii;
typedef map <int, int> mii;

int h8, h4, h2, h1, m32, m16, m8, m4, m2, m1;

void printWatch(int h, int m)
{
    h8 = h4 = h2 = h1 = m32 = m16 = m8 = m4 = m2 = m1 = 0;

    h8 = h / 8; h %= 8;
    h4 = h / 4; h %= 4;
    h2 = h / 2; h %= 2;

    m32 = m / 32; m %= 32;
    m16 = m / 16; m %= 16;
    m8 = m / 8; m %= 8;
    m4 = m / 4; m %= 4;
    m2 = m / 2; m %= 2;

    //printf("%d %d %d %d\n", h8, h4, h2, h1);
    //printf("%d %d %d %d %d %d\n", m32, m16, m8, m4, m2, m1);

    printf(" ____________________________________________\n");
    printf("|                                            |\n");
    printf("|    ____________________________________    |_\n");
    printf("|   |                                    |   |_)\n");
    printf("|   |   8         4         2         1  |   |\n");
    printf("|   |                                    |   |\n");
    
    printf("|   |   ");
    if(h8 == 1) printf("o         ");
    else printf("          ");
    if(h4 == 1) printf("o         ");
    else printf("          ");
    if(h2 == 1) printf("o         ");
    else printf("          ");
    if(h == 1) printf("o  |   |\n");
    else printf("   |   |\n");

    printf("|   |                                    |   |\n"); 
    printf("|   |                                    |   |\n");
    
    printf("|   |   ");
    if(m32 == 1) printf("o     ");
    else printf("      ");
    if(m16 == 1) printf("o     ");
    else printf("      ");
    if(m8 == 1) printf("o     ");
    else printf("      ");
    if(m4 == 1) printf("o     ");
    else printf("      ");
    if(m2 == 1) printf("o     ");
    else printf("      ");
    if(m == 1) printf("o  |   |\n");
    else printf("   |   |\n");

    printf("|   |                                    |   |\n");
    printf("|   |   32    16    8     4     2     1  |   |_\n");
    printf("|   |____________________________________|   |_)\n");
    printf("|                                            |\n");
    printf("|____________________________________________|\n");
    printf("\n");
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int num, num2;
    char a;

    while(cin >> num >> a >> num2)
    {
        printWatch(num, num2);
    }

    return 0;
}