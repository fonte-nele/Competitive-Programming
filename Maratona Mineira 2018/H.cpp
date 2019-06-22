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

const int N = 401;

int n, k;
char s[N];
int pdc[N][N], pds[N][N];

int getCost(int l, int r) {
  if(l == r) return 0;
  if(l + 1 == r) return min(26 - abs(s[l] - s[r]), abs(s[l] - s[r]));
  if(pdc[l][r] != -1) return pdc[l][r];
  return pdc[l][r] = getCost(l + 1, r - 1) + min(26 - abs(s[l] - s[r]), abs(s[l] - s[r]));
}

int solve(int pos, int qtd) {
  if(pos == n) return 0;
  if(pds[pos][qtd] != -1) return pds[pos][qtd];
  int &ret = pds[pos][qtd];
  ret = INF;
  if(qtd > 0) for(int i = pos; i < n; ++i) ret = min(ret, solve(i + 1, qtd - 1) + getCost(pos, i));
  return ret;
}

int main() {
  memset(pdc, -1, sizeof pdc);
  memset(pds, -1, sizeof pds);
  scanf("%d %d", &n, &k);
  scanf(" %s", s);
  printf("%d\n", solve(0, k));
  return 0;
}