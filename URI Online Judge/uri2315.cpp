/*input
21 2
1 3
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

int valor(int m1, int d1)
{
    int soma1 = 0;
    if(m1 == 1)
        soma1 += d1;
    else if(m1 == 2)
        soma1 += 31+d1;
    else if(m1 == 3)
        soma1 += 59+d1;
    else if(m1 == 4)
        soma1 += 90+d1;
    else if(m1 == 5)
        soma1 += 120+d1;
    else if(m1 == 6)
        soma1 += 151+d1;
    else if(m1 == 7)
        soma1 += 181+d1;
    else if(m1 == 8)
        soma1 += 212+d1;
    else if(m1 == 9)
        soma1 += 243+d1;
    else if(m1 == 10)
        soma1 += 273+d1;
    else if(m1 == 11)
        soma1 += 304+d1;
    else if(m1 == 12)
        soma1 += 334+d1;

    return soma1;
}

int cont(int d1, int d2, int m1, int m2)
{
    int soma1 = 0, soma2 = 0;
    soma1 = valor(m1, d1);
    soma2 = valor(m2, d2);

    return soma2 - soma1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int d1, d2, m1, m2;
    cin >> d1 >> m1 >> d2 >> m2;

    if(d1 == d2 && m1 == m2)
        cout << 0 << endl;
    else if(m1 == m2)
        cout << d2 - d1 << endl;
    else
        cout << cont(d1, d2, m1, m2) << endl;

    return 0;
}