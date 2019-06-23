/*input
13 17
*/

// URI 1896 - É Hora do Duelo!
/*#include <bits/stdc++.h>
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
    
    int n, a, d, h, x, y, z;
    
    cin >> n >> a >> d >> h;

    std::vector<int> v;
    f(0, n)
    {
        cin >> x >> y >> z;

    }

    return 0;
}*/

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

unsigned long int rev(unsigned long int num)
{
    unsigned long int aux = 0;
    while(num > 0){
        aux = aux*10 + num%10; 
        num = num/10; 
    } 
    return aux; 
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, valor;
    string op;
    cin >> n;

    stack<int> pilha;

    f(0, n){
        cin >> op;
        if(op == "PUSH"){
            cin >> valor;
            pilha.push(valor);
        }else if(op == "POP"){
            if(pilha.empty())
                cout << "EMPTY" << endl;
            else
                pilha.pop();
        }else if(op == "MIN"){
            int menor = INT_MAX;

            stack<int> p;
            p = pilha;
            while(!p.empty()){
                if(p.top() < menor)
                    menor = p.top();
                p.pop();
            }
            if(menor == INT_MAX)
                cout << "EMPTY" << endl;
            else
                cout << menor << endl;
        }
    }


    return 0;
}