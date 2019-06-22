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

const int N = (int)1e3 + 10;

int n, m, c;
int v[N][N];
int f[N];

int main() {
  scanf("%d %d %d", &n, &m, &c);
  for(int i = 1; i <= n; ++i) for(int j = 1; j <= m; ++j) {
    scanf("%d", &v[i][j]);
    if(!v[i][j]) continue;
    f[j] = 1;
  }

  for(int i = 1; i <= m; ++i) {
    if(f[i] && f[i - 1]) {
      puts("N");
      return 0;
    }
  }
  for(int j = 1; j <= m; ++j) {
    int lst[2];
    lst[0] = lst[1] = -1;
    for(int i = 1; i <= n; ++i) {
      if(!v[i][j]) continue;
      int x = v[i][j] - 1;
      if(lst[x] != -1) {
        int d = i - lst[x] - 1;
        if(d < c) {
          puts("N");
          return 0;
        }
      }
      lst[x] = i;
    }
  }
  puts("S");
  return 0;
}