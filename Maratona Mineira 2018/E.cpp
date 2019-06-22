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

const int N = 5 * (int)(1e5 + 10);

int bit[N];

void up(int x) {
  x += 2;
  while(x < N) {
    bit[x]++;
    x += LSONE(x);
  }
}

int query(int x) {
  x += 2;
  int ret = 0;
  while(x) {
    ret += bit[x];
    x -= LSONE(x);
  }
  return ret;
}

int n;

int main() {
  scanf("%d", &n);
  for(int i = 0; i < n; ++i) {
    int x; scanf("%d", &x);
    if(i) printf(" ");
    int a = x - query(x);
    printf("%d", a);
    up(x);
  }
  printf("\n");
  return 0;
}