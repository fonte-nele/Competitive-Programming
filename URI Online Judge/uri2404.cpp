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


vi pset(1000), setSize(1000);
int _numDisjointSets;
vector<vii> AdjList;
vi taken;
priority_queue<ii> pq;

void initSet(int N)
{
    setSize.assign(N, 1);
    _numDisjointSets = N;
    pset.assign(N, 0);
    for(int i = 0; i < N; i++)
        pset[i] = i;
}

int findSet(int i)
{
    return (pset[i] == i) ? i : (pset[i] = findSet(pset[i]));
}

bool isSameSet(int i, int j)
{
    return findSet(i) == findSet(j);
}

void unionSet(int i, int j)
{
    if(!isSameSet (i, j))
    {
        _numDisjointSets--;
        setSize[findSet(j)] += setSize[findSet(i)];
        pset[findSet(i)] = findSet(j);
    }
}

int numDisjointSets()
{
    return _numDisjointSets;
}

int sizeOfSet(int i)
{
    return setSize[findSet(i)];
}

void process(int vtx)
{
    taken[vtx] = 1;
    f(0, (int)AdjList[vtx].size())
    {
        ii v = AdjList[vtx][i];
        if(!taken[v.first])
            pq.push(ii(-v.second, -v.first));
    }
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int V, E, u, v, w;

    cin >> V >> E;

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

    f(0, E)
    {
        pair<int, ii> front = EdgeList[i];
        if(!isSameSet(front.second.first, front.second.second))
        {
            mst_cost += front.first;
            unionSet(front.second.first, front.second.second);
        }
    }

    cout << mst_cost << endl;

    return 0;
}