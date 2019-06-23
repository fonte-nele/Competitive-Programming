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
typedef long long int ll;
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
    
    int n , k, hc, hs, valor;
    bool flag;

    while(cin >> n >> k && n && k)
    {
        stack<int> v;
        flag = true;

        f(0, n)
        {
            cin >> hc >> hs;

            valor = hc;
            if(flag)
            {
                int aux = 0;    // Saida
                if(!v.empty()) 
                    aux = v.top();
                while(!v.empty() && v.top() <= hc) 
                {
                    if(v.top() < aux) 
                    {
                        flag = false;
                    }
                    aux = v.top();
                    v.pop();
                }
                // Chegada
                if((int)v.size() < k) 
                {
                    v.push(hs);
                } 
                else 
                {
                    flag = false;
                }
            }       
        }
        while(flag && !v.empty()) 
        {
            if(v.top() < valor) 
            {
                flag = false;
            }
            valor = v.top();
            v.pop();
        }

        cout << (flag ? "Sim" : "Nao") << endl;
    }

    return 0;
}