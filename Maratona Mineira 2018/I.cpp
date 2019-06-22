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

const int N = 1011;
const int M = 511;

struct TBL {
  int c, l; 
  TBL(){};
  void read() {
    scanf("%d %d", &c, &l);
  }
  bool operator < (TBL t) const {
    if(c * l != t.c * t.l) return c * l > t.c * t.l;
    return l > t.l;
  }
};

int n, m;
int v[N][N];
TBL all[N * N + 10];
int lft[N][N];
int b[M + 100];

inline bool ok(TBL t) {
  return b[t.l] >= t.c || b[t.c] >= t.l;
}

inline void process(int x, int y) {
  int mx = INF;
  for(int i = x; i >= 1; --i) {
    if(v[i][y]) break;
    if(x - i + 1 >= M) break;
    mx = min(mx, y - lft[i][y]);
    b[x - i + 1] = max(b[x - i + 1], mx);
  }
}

int main() {
  scanf("%d %d", &n, &m);
  for(int i = 1; i <= n; ++i) {
    for(int j = 1; j <= m; ++j) {
      char c; scanf(" %c", &c);
      v[i][j] = (c == '#');
    }
  }

  for(int i = 1; i <= n; ++i) {
    for(int j = 1; j <= m; ++j) {
      if(v[i][j]) lft[i][j] = j;
      else lft[i][j] = lft[i][j - 1];
    }
  }

  for(int i = 1; i <= n; ++i) for(int j = 1; j <= m; ++j) process(i, j);
  for(int i = M; i >= 0; --i) b[i] = max(b[i], b[i + 1]);

  int q; scanf("%d", &q);
  for(int i = 0; i < q; ++i) all[i].read();
  sort(all, all + q);
  for(int i = 0; i < q; ++i) {
    if(ok(all[i])) {
      printf("%d %d\n", all[i].c, all[i].l);
      return 0;
    }
  }
  return 0;
}