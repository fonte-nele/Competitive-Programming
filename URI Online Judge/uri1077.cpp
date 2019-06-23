/*input
3
A*2
(A*2+c-d)/2
(2*4/a^b)/(2*c)
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

bool isoperator(char c)
{
    return c=='+'||c=='-'||c=='*'||c=='/'||c=='^';
}

bool relevance(char op1, char op2)
{
    if(op1 == '(') {
        return false;
    }
    else if(op2 == '+' || op2 == '-') {
        return true;
    } 
    else if((op1 == '*' || op1 == '/') && op2 != '^') {
        return true;
    }   
    else if(op1 == '^') {
        return true;
    }
    return false;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int num;

    cin >> num;
    string frase;

    while(num--){
        cin >> frase;
        stack<char> pilha;
        f(0, (int)frase.size())
        {
            if(isalnum(frase[i]))
                cout << frase[i];
            else if(isoperator(frase[i]))
            {
                while(!pilha.empty() && relevance(pilha.top(), frase[i]))
                {
                    cout << pilha.top(); 
                    pilha.pop();
                }

                pilha.push(frase[i]);
            }
            else
            {
                if(frase[i] == '(') 
                {
                    pilha.push(frase[i]);
                }
                else if(frase[i] == ')') 
                {
                    while(!pilha.empty()) 
                    {
                        if(pilha.top() != '(')
                            cout << pilha.top(); 
                        else 
                        {
                            pilha.pop(); break;
                        }
                        pilha.pop();                      
                    }
                }
            }
        }
        while(!pilha.empty()) 
        {
            if(pilha.top() != '(')
                cout << pilha.top(); 
            pilha.pop();
        }
        cout << endl;

    }
    
    return 0;
}