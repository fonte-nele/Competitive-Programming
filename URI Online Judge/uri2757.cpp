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

    int a, b, c;

    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    
    cout << "A = " << a << ", B = " << b << ", C = " << c << endl;
    cout << "A = " << setfill(' ') << setw(10) << right << a
         << ", B = " << setfill(' ') << setw(10) << b
         << ", C = " << setfill(' ') << setw(10) << c << endl;

    cout << "A = " << setfill('0') << setw(10) <<  internal << a
         << ", B = " << setfill('0') << setw(10) << b
         << ", C = " << setfill('0') << setw(10) << c << endl;

    cout << "A = " << setfill(' ') << setw(10) << left << a
         << ", B = " << setfill(' ') << setw(10) << b
         << ", C = " << setfill(' ') << setw(10) << c << endl;
    return 0;
}