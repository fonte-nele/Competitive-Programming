/*input
21
1 2 1 1 2 1 2 1 1 1 2 3 1 2 3 1 2 1 1 2 3
5
22 6 8 4 15
3
24 1 1
26
22 10 6 4 13 16 16 12 5 1 4 20 1 21 21 5 10 7 16 6 15 12 5 3 8 9
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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int m, num, cont = 1, cont2;
    char aux, aux2;

    while(cin >> m && m)
    {
        list<char> pos;
        list<char> :: iterator it;
        aux = 'A';
        cont2 = 1;
        f(1, 27)
        {
            pos.push_back(aux);
            aux++;
        }

        cout << "Instancia " << cont << endl;
        f(0, m){
            cin >> num;
            for(it = pos.begin(), cont2 = 1; cont2 < num; it++, cont2++);
            
            cout << *it;
            aux2 = *it;
            pos.remove(*it);
            pos.push_front(aux2);
            
        }
        cout << endl << endl;
        cont++;
    }
    return 0;
}