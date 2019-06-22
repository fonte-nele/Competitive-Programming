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

const int N = 1e5 + 10;

int n;
int v[N];

int main() {
  scanf("%d", &n);
  for(int i = 0; i < n; ++i) scanf("%d", v + i);
  int ans = INF;
  for(int i = 1; i <= 6; ++i) {
    int f = 0;
    for(int j = 0; j < n; ++j) {
      if(i + v[j] == 7) f += 2;
      else if(i != v[j]) f++;
    }
    ans = min(ans, f);
  }
  printf("%d\n", ans);
  return 0;
}