/*input
10 1998
fulano de tal
cirardo vatares iloveira
    frederico  dilson    teves  
glauber leite
gimo laerte gomes
gerson
antovo matadouro    silva do rego
clovis varins ito
crevo   vigrgula inova
basse nordgren
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

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a, soma;
    st num;
    while(cin >> n >> a)
    {
        map<st,int > m;
        getline(cin, num);
        while(n--)
        {
            soma = 0;
            st res = "";
            getline(cin, num);
            //cout << num << endl;

            if(num[0] != ' ')
                res += num[0];

            f(1, int(num.size()))
            {
                if(num[i] != ' ' && num[i-1] == ' ')
                {
                    res += num[i];
                    
                }
            }
            m[res]++;
            //cout << m.size()<< " rama " <<endl;
            //cout << res << endl;
            
        }
        for(map<st,int> :: iterator it = m.begin(); it != m.end(); it++)
        {
            //cout << (*it).se << endl;
            if((*it).se > 1)
            {
                soma += ((*it).se-1);
            }
        }
        cout << soma << endl;
    }

    return 0;
}
