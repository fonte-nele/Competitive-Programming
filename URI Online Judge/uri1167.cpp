/*input
3
Fernanda 7
Fernando 9
Gustavo 11
5
Maria 7
Pedro 9
Joao_Vitor 5
Isabel 12
Laura 8
3
Maria 4
Pedro 3
Joao 2
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
    int n, valor, inicio, pos;
    string nome;

    while(cin >> n && n != 0)
    {
        vector<pair<string, int>> v;
        vector<pair<string, int>> :: iterator it;
        
        f(0, n)
        {
            cin >> nome >> valor;
            v.push_back(make_pair(nome, valor));
        }
        // for(it = v.begin(); it != v.end(); it++)
        // {
        //     cout << it->first << " -> " << it->second << endl;
        // }
        it = v.begin();
        inicio = it->second;
        pos = 0;
        while((int)v.size() > 1){
            if(inicio % 2 == 0)
            {
                pos = (pos-(inicio% (int)v.size())) % (int)v.size();
                if (pos < 0)
                    pos = (int)v.size() + pos;
            }
            else
            {
                pos = (pos+inicio) % (int)v.size();
            }
            //cout << "pos " << pos << endl;
            it = (v.begin() + pos);
            inicio = it->second;

            //cout << "in " << inicio << endl;
            v.erase(v.begin()+pos);
            if(inicio % 2)
                pos--;
        }
        it = v.begin();
        cout << "Vencedor(a): " << it->first << endl;
    }

    return 0;
}