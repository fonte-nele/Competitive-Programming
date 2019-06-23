/*input
4c
2b
2c
3d
4f
5d
7a
7d
7g
0
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

int conv(char a)
{
    if(a == 'a')
        return 0;
    else if(a == 'b')
        return 1;
    else if(a == 'c')
        return 2;
    else if(a == 'd')
        return 3;
    else if(a == 'e')
        return 4;
    else if(a == 'f')
        return 5;
    else if(a == 'g')
        return 6;
    else if(a == 'h')
        return 7;
    return -1;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int cont = 1, lin , col, l1, c1;
    string n, pos;

    while(cin >> n && n != "0")
    {
        int m[8][8], ans = 0;
        memset(m, 0, sizeof(m));
        l1 = n[0] - '0';
        l1--;
        c1 = conv(n[1]);
        m[l1][c1] = 2;
        f(0, 8){
            cin >> pos;
            lin = pos[0] - '0';
            col = conv(pos[1]);
            lin--;

            // if((lin+1 < 8 && col+1 < 8) && (lin+1 != l1 || col+1 != c1))
            //     m[lin+1][col+1] = 1;
            // if((lin+1 < 8 && col-1 >= 0) && (lin+1 != l1 || col-1 != c1))
            //     m[lin+1][col-1] = 1;

            if((lin-1 >= 0 && col-1 >= 0) && (lin-1 != l1 || col-1 != c1))
                m[lin-1][col-1] = 1;
            if((lin-1 >= 0 && col+1 < 8) && (lin-1 != l1 || col+1 != c1))
                m[lin-1][col+1] = 1;
        }
        // f(0, 8){
        //     fr(0, 8)
        //         cout << m[i][j] << " ";
        //     cout << endl;
        // }

        if(m[l1+2][c1+1] != 1 && (l1+2 < 8 && c1+1 < 8))
            ans++;
        if(m[l1+2][c1-1] != 1 && (l1+2 < 8 && c1-1 >= 0))
            ans++;
        if(m[l1+1][c1+2] != 1 && (l1+1 < 8 && c1+2 < 8))
            ans++;
        if(m[l1-1][c1+2] != 1 && (l1-1 >= 0 && c1+2 < 8))
            ans++;
        if(m[l1-2][c1+1] != 1 && (l1-2 >= 0 && c1+1 < 8))
            ans++;
        if(m[l1-2][c1-1] != 1 && (l1-2 >= 0 && c1-1 >= 0))
            ans++;
        if(m[l1+1][c1-2] != 1 && (l1+1 < 8 && c1-2 >= 0))
            ans++;
        if(m[l1-1][c1-2] != 1 && (l1-1 >= 0 && c1-2 >= 0))
            ans++;

        cout << "Caso de Teste #" << cont << ": " << ans << " movimento(s)." << endl;
        cont++;
    }

    return 0;
}