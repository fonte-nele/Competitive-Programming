/*input
3
3 1
a c
10 10
a b
a c
a g
b c
c g
e d
d f
h i
i j
j h
6 4
a b
b c
c a
e f
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
vector<char> aux;
int cont;

void DFSUtil(int v, bool visitado[]) 
{ 
    visitado[v] = true; // Marcar todos os vertice atuais como visitado e imprimir 
    aux.push_back(v+97);   
  
    // Recur for all the vertices 
    // adjacent to this vertex 
    list<int>::iterator i; 
    for(i = grafo[v].begin(); i != grafo[v].end(); ++i) 
        if(!visitado[*i]) 
            DFSUtil(*i, visitado); 
} 

void componentesConexos(int V) 
{ 
    bool *visitado = new bool[V]; // Marcar todos os vertices não visitados!
    for(int v = 0; v < V; v++) 
        visitado[v] = false; 
  
    for (int v=0; v<V; v++) 
    { 
        if (visitado[v] == false) 
        { 
            // print all reachable vertices 
            // from v 
            DFSUtil(v, visitado); 
            sort(aux.begin(), aux.end());

            f(0, (int)aux.size())
                cout << aux[i] << ",";

            aux.clear();
            cont++;
            cout << "\n"; 
        } 
    } 
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, v, e;
    char v1, v2;

    cin >> n;
    f(0, n) 
    {
        cont = 0;
        cin >> v >> e;
        grafo = new list<int>[v];
        
        fr(0, e)
        {
            cin >> v1 >> v2;
            //cout << v1 - 'a' << "   " << v2 - 'a' << endl;
            grafo[v1-'a'].push_back(v2-'a');
            grafo[v2-'a'].push_back(v1-'a');
        }
        cout << "Case #" << i+1 << ":" << endl;
        componentesConexos(v); 
        cout << cont << " connected components" << endl << endl;
    }
    return 0;
}