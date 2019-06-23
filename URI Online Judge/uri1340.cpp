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
typedef vector <int> vi;
typedef map <int, int> mii;
typedef pair <int, int> ii;
typedef pair <int, pair <int, int> > iii;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int quant;

    while(cin >> quant) 
    {
        int op, valor;
        bool flag1 = true, flag2 = true, flag3 = true;

        stack<int> pilha;
        queue<int> fila;
        priority_queue<int> fila_prioridade;

        f(0, quant)
        {
            cin >> op >> valor;

            if(op == 1)
            {
                pilha.push(valor);
                fila.push(valor);
                fila_prioridade.push(valor);
            }
            else if(op == 2)
            {
                if(valor != pilha.top())
                {
                    flag1 = false;
                }
                if(valor != fila.front())
                {
                    flag2 = false;   
                }
                if(valor != fila_prioridade.top())
                {
                    flag3 = false;
                }
                pilha.pop();
                fila.pop();
                fila_prioridade.pop();
            }
        }
        if((flag1 && flag2) || (flag1 && flag3) || (flag2 && flag3))
            cout << "not sure" << endl;
        else if(flag1)
            cout << "stack" << endl;
        else if(flag2)
            cout << "queue" << endl;
        else if(flag3)
            cout << "priority queue" << endl;
        else
            cout << "impossible" << endl;
    }
    return 0;
}