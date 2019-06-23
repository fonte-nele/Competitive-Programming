/*input
4
E C F A
A C E F
F E C A
A F C E
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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int num, cont = 0;
    cin >> num;
    stack <st> pilha;
    char letra;

    f(0, num)
    {
        st pal, pal2;
        fr(0, 4)
        {
            cin >> letra;
            pal += letra;
        }
        pal2 = pal;
        if(pilha.empty())
        {
            pilha.push("FACE");
        }
        reverse(pal2.begin(), pal2.end());

        if(pilha.top() == pal2)
        {
            pilha.pop();
            cont++;
        }
        else
        {
            pilha.push(pal);
        }
    }
    cout << cont << endl;
    return 0;
}