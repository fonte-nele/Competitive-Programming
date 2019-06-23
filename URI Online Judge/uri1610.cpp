/*input
3
2 1
1 2
2 2
1 2
2 1
4 4
2 3
3 4
4 2
1 3
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

list<int> *grafo;

bool detectarCicloUtil(int v, bool visitado[], bool *recStack) 
{ 
    if(visitado[v] == false) 
    { 
        // Marcar todos os vertices como não visitado e não faz parte da recursão
        visitado[v] = true; 
        recStack[v] = true; 
  
        // Recorrer à todos os vértices adjacentes a este vértice
        list<int>::iterator i; 
        for(i = grafo[v].begin(); i != grafo[v].end(); ++i) 
        { 
            if(!visitado[*i] && detectarCicloUtil(*i, visitado, recStack)) 
                return true; 
            else if (recStack[*i]) 
                return true; 
        } 
  
    } 
    recStack[v] = false;  // remover o vértice da pilha de recursão
    return false; 
} 

bool detectarCiclo(int V) 
{ 
    bool *visitado = new bool[V]; // Marcar todos os vertices como não visitado e não faz parte da recursão
    bool *recStack = new bool[V]; // Pilha
    for(int i = 0; i < V; i++) 
    { 
        visitado[i] = false; 
        recStack[i] = false; 
    } 
  
    // Call the recursive helper function to detect cycle in different 
    // DFS trees 
    for(int i = 0; i < V; i++) 
        if (detectarCicloUtil(i, visitado, recStack)) 
            return true; 
  
    return false; 
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, v, e, v1, v2;
    bool flag;
    
    cin >> n;
    f(0, n) 
    {
        cin >> v >> e;
        grafo = new list<int>[v];
        
        fr(0, e)
        {
            cin >> v1 >> v2;
            grafo[v1-1].push_back(v2-1);
        }
        flag = detectarCiclo(v);
        if(flag)
            cout << "SIM" << endl;
        else
            cout << "NAO" << endl;
    }
    return 0;
}