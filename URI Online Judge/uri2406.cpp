/*input
12
()
[]
{}
(]
}{
([{}])
{}()[]
()]
{[]
(
(([{}{}()[]])(){}){}
(((((((((({([])}])))))))))
*/

// URI 2406 - Expressões
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
#define pi 3.1415926535897
#define MAX 305
typedef long long int ll;
typedef unsigned long long int ull;
typedef string st;
typedef vector <string> vs;
typedef pair <int, int> ii;
typedef pair <double, ii > iii;
typedef vector <int> vi;
typedef vector <ii> vii;
typedef map <int, int> mii;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    string entrada;
    cin >> n;
    f(0, n){
        cin >> entrada;
        stack<char> pilha;

        int tam = entrada.size();
        fr(0, tam){
            if(entrada[j] == '(')
                pilha.push('(');
            else if(entrada[j] == ')'){
                if(pilha.size() > 0)
                {
                    if(pilha.top() == '('){
                        pilha.pop();
                    }else{
                        pilha.push(')');
                    }
                }else
                    pilha.push(')');
            }else if(entrada[j] == '['){
                pilha.push('[');
            }else if(entrada[j] == ']'){
                if(pilha.size() > 0)
                {
                    if(pilha.top() == '[')
                        pilha.pop();
                    else
                        pilha.push(']');
                }else
                    pilha.push(']');
            }else if(entrada[j] == '{'){
                pilha.push('{');
            }else if(entrada[j] == '}'){
                if(pilha.size() > 0){
                    if(pilha.top() == '{')
                        pilha.pop();
                    else
                        pilha.push('}');
                }else
                    pilha.push('}');
            }
        }
        if(pilha.size() == 0){
            cout << "S" << endl;
        }else
            cout << "N" << endl;
    }

    return 0;
}