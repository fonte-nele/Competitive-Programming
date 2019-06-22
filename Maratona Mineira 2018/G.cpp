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

int n;
vii v;

int main() {
  scanf("%d", &n);
  for(int i = 0; i < n; ++i) {
    int x, y; scanf("%d %d", &x, &y);
    v.pb(mp(x, y));
  }
  sort(v.begin(), v.end());
  for(int i = 1; i < v.size(); ++i) {
    if(v[i - 1].S < v[i].S) {
      puts("N");
      return 0;
    }
  }
  puts("S");
  return 0;
}