#include <bits/stdc++.h>

#pragma comment(linker, '/STACK:200000')

using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef pair< ll, ll > ii;
typedef vector< ll > vi;
typedef vector< ii > vii;

#define INF 0x3F3F3F3F
#define LINF 0x3F3F3F3F3F3F3F3FLL
#define pb push_back
#define mp make_pair
#define pq priority_queue
#define LSONE(s) ((s)&(-s))
#define DEG_to_RAD(X)   (X * PI / 180)
#define F first
#define S second

#ifdef ONLINE_JUDGE
#define debug(args...)
#else
#define debug(args...) fprintf(stderr,args)
#endif

const int N = 5010;
const int M = 20;

vi g[N];
int lca[N][M], h[N];

void dfs(int x, int ult) {
  lca[x][0] = ult;
  for(int i = 1; i < M; ++i) lca[x][i] = lca[lca[x][i - 1]][i - 1];
  for(int i = 0; i < g[x].size(); ++i) {
    int y = g[x][i];
    if(y == ult) continue;
    h[y] = h[x] + 1;
    dfs(y, x);
  }
}

int getLca(int a, int b) {
  if(h[a] < h[b]) swap(a, b);
  int d = h[a] - h[b];
  for(int i = M - 1; i >= 0; --i) if((d >> i) & 1) a = lca[a][i];
  if(a == b) return a; 
  for(int i = M - 1; i >= 0; --i) if(lca[a][i] != lca[b][i]) {
    a = lca[a][i];
    b = lca[b][i];
  }
  return lca[a][0];
}

int n, d;
int m;
ll c[N], v[N];
ll qa[N];
ll pd[N][N];

void solve(int x, int ult) {
  for(int i = 0; i < g[x].size(); ++i) {
    int y = g[x][i];
    if(y == ult) continue;
    solve(y, x);
    qa[x] += qa[y];
  }
}

ll func(int pos, int qtd) {
  if(pos == m) return 0;
  if(pd[pos][qtd] != -1) return pd[pos][qtd];
  ll ret = func(pos + 1, qtd);
  if(v[pos] <= qtd) ret = max(ret, qa[c[pos]] + func(pos + 1, qtd - v[pos]));
  return pd[pos][qtd] = ret;
}

int main() {
  scanf("%d %d", &n, &d);
  for(int i = 0; i + 1 < n; ++i) {
    int x, y; scanf("%d %d", &x, &y);
    g[x].pb(y);
    g[y].pb(x); 
  }
  dfs(1, 0);
  scanf("%d", &m);
  for(int i = 0; i < m; ++i) {
    scanf("%lld %lld", c + i, v + i);
  }
  int q; scanf("%d", &q);
  while(q--) {
    int x, y, l; scanf("%d %d %d", &x, &y, &l);
    int a = getLca(x, y);
    qa[x] += l;
    qa[y] += l;
    qa[a] -= l;
    qa[lca[a][0]] -= l;
  }
  solve(1, 0);
  memset(pd, -1, sizeof pd);
  printf("%lld\n", func(0, d));
  return 0;
}