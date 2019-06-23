#include <bits/stdc++.h>
#define f(inicio, fim) for(int i = inicio; i < fim; i++)
#define fr(inicio, fim) for(int j = inicio; j < fim; j++)
using namespace std;
#define mp make_pair
#define pb push_back
#define db(x) cerr << #x << " == " <<  x << endl;
#define _ << " " <<
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> ii;

const long double EPS = 1e-9;
const int N=1e5+5;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

int n, r, ans;
ll cost;
int sp[30][N], m[30][N], h[N], vis[N];
set<ii> roads;
map<ii, int> wt;

vector<int> adj[N];

void mst() {
  priority_queue<pair<int, ii>> pq;
  pq.push(mp(0, mp(1, 1)));

  while(!pq.empty()) {
    int a, b, c;
    c = -pq.top().first;
    a = pq.top().second.first;
    b = pq.top().second.second;

    pq.pop();
    if(vis[b]) continue;

    cost += c;
    vis[b] = 1;

    roads.insert(mp(a,b));

    h[b] = h[a] + 1;
    sp[0][b] = a;
    m[0][b] = c;

    for(int v : adj[b]) {
      pq.push(mp(-wt[mp(b,v)], mp(b, v)));
    }
  }
}

int lca(int a, int b) {
  int ans = 0;
  if(h[a] > h[b]) swap(a, b);

  for(int i=19; i>=0; i--) if((1<<i) & (h[b] - h[a])) {
    ans = max(ans, m[i][b]);
    b = sp[i][b];
  }

  if(b == a) return ans;

  for(int i=19; i>=0; i--) if(sp[i][a] != sp[i][b]) {
    ans = max(ans, m[i][a]);
    ans = max(ans, m[i][b]);
    a = sp[i][a];
    b = sp[i][b];
  }

  ans = max(ans, m[0][a]);
  ans = max(ans, m[0][b]);

  return ans;
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    scanf("%d %d", &n, &r);
  for(int i=0; i<r; i++) {
    int u, v, c;
    scanf("%d %d %d", &u, &v, &c);

    adj[u].pb(v);
    adj[v].pb(u);
    wt[mp(u,v)] = wt[mp(v,u)] = c;
  }

  mst();

  for(int i=1; i<20; i++) {
    for(int j=1; j<=n; j++) {
      sp[i][j] = sp[i-1][sp[i-1][j]];
      m[i][j] = max(m[i-1][sp[i-1][j]], m[i-1][j]);
    }
  }

  int q;
  scanf("%d", &q);
  for(int i=0; i<q; i++) {
    int u, v;
    scanf("%d %d", &u, &v);
    if(roads.count(mp(v,u)) or roads.count(mp(u,v))) {
      printf("%lld\n", cost);
    }
    else {
      printf("%lld\n", cost + wt[mp(u,v)] - lca(u,v));
    }
  }

    return 0;
}
