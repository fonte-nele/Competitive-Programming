/*input
3
3 3
asa
bao
oab
6
a
asa
bao
boa
aob
ab
5 5
abcde
fghij
klmno
pqrst
uvwxy
6
agm
cdef
imq
ye
au
gfji
4 3
aaa
aaa
aaa
aaa
3
a
aa
aaa
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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, l, c, p;
    st busca;
    cin >> t;
    while(t--)
    {
        int cont = 0, pos = -1;
        cin >> l >> c;
        vector<string> m(l);
        vector<string> inv(c);

        f(0, l){
            cin >> m[i];
        }
        f(0, c){
            fr(0, l)
                inv[i] += m[j][i];

        }
        // f(0, c){
        //     cout << inv[i] << endl;
        // }

        cin >> p;
        f(0, p){
            cont = 0;
            pos = -1;
            cin >> busca;

            fr(0, l)
            {
                do{
                    pos = m[j].find(busca, pos+1);
                    //cout << "Pos = " << pos << endl;
                    if(pos == -1)
                        break;
                    cont++;
                }while(pos != -1);
                //cout << endl;
            }
            if((int)busca.size() > 1)
            {
                fr(0, c)
                {
                    do{
                        pos = inv[j].find(busca, pos+1);
                        //cout << "Pos = " << pos << endl;
                        if(pos == -1)
                            break;
                        cont++;
                    }while(pos != -1);
                }
            }
            cout << cont << endl;
        }
    }

    return 0;
}