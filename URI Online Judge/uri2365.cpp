/*input
3 4
Dilson
Barcelona 10 Santos 0
Atletico 9 Cruzeiro 2
Atletico 1 Barcelona 0
PontePreta 2 Cruzeiro 0
Henrique
Barcelona 34 Santos 0
Atletico 0 Cruzeiro 1
Atletico 0 Barcelona 52
PontePreta 0 Cruzeiro 3
Filipe
Barcelona 7 Santos 1
Atletico 0 Cruzeiro 1
Atletico 0 Barcelona 10
PontePreta 0 Cruzeiro 0
Barcelona 10 Santos 0
Atletico 9 Cruzeiro 2
Atletico 3 Barcelona 0
PontePreta 2 Cruzeiro 0
0 0
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
    int P, N;

    while(cin >> P >> N && P)
    {
        vector<pair<int,string>> player(P);
        vector<pair<int,int>> hunch[P];

        for(int i = 0; i < P; i++)
        {
            cin >> player[i].second;

            player[i].first = 0;

            string a, b;
            int pa, pb;

            for(int j = 0; j < N; j++) {
                cin >> a >> pa >> b >> pb;
                hunch[i].push_back({pa, pb});
            }
        }

        for(int i = 0; i < N; i++)
        {
            string a, b;
            int pa, pb;

            cin >> a >> pa >> b >> pb;

            for(int j = 0; j < P; j++)
            {
                if(hunch[j][i].first == pa && hunch[j][i].second == pb)
                    player[j].first -= 10;
                else if(hunch[j][i].first > hunch[j][i].second && pa > pb || hunch[j][i].first == hunch[j][i].second && pa == pb || hunch[j][i].first < hunch[j][i].second && pa < pb)
                {
                    if(hunch[j][i].first == pa || hunch[j][i].second == pb)
                        player[j].first -= 7;
                    else
                        player[j].first -= 5;
                }
                else if(hunch[j][i].first == pa || hunch[j][i].second == pb)
                    player[j].first -= 2;
            }
        }

        sort(player.begin(), player.end());

        for(auto p : player)
            cout << p.second << ' ' << -p.first << endl;

    }
    return 0;
}