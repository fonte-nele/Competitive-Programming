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

vi pai;
vi rank1;
vector<vii> AdjList;

void initSet(int N)
{
    pai.assign(N+1, 0);
    rank1.assign(N+1, 0);
    
    for(int i = 0; i <= N; i++)
        pai[i] = i;
}

int findSet(int x)
{
    return (pai[x] == x) ? x : (pai[x] = findSet(pai[x]));
}

bool isSameSet(int x, int y)
{
    return findSet(x) == findSet(y);
}

void unionSet(int i, int j)
{
    if(!isSameSet (i, j))
    {
        int x = findSet (i);
        int y = findSet (j);

        if (rank1[x] > rank1[y])
            pai[y] = x;
        else
        {
            pai[x] = y;
            if (rank1[x] == rank1[y])
                rank1[y]++;
        }
        //_numDisjointSets--;
        //setSize[findSet(j)] += setSize[findSet(i)];
        //pset[findSet(i)] = findSet(j);
    }
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int V, E, u, v, w;

    while(cin >> V >> E)
    {
        AdjList.assign(V+1, vii());
        vector<pair <int, ii> > EdgeList;

        f(0, E)
        {
            cin >> u >> v >> w;
            EdgeList.push_back(make_pair(w, ii(u, v)));
            AdjList[u].push_back(ii(v, w));
            AdjList[v].push_back(ii(u,w));
        }
        sort(all(EdgeList));
        int mst_cost = 0;
        initSet(V);

        int cont = V;

        f(0, E)
        {
            pair<int, ii> front = EdgeList[i];
            if(!isSameSet(front.second.first, front.second.second))
            {
                cont--;
                //cout << front.second.second << " " << front.second.first << endl;
                mst_cost += front.first;
                unionSet(front.second.first, front.second.second);
            }
        }

        if(cont <= 1)
            cout << mst_cost << endl;
        else
            cout << "impossivel" << endl;
    }

    return 0;
}