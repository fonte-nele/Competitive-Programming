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

const int N = 10000001;
const ll md = (int)1e9 + 7LL;

char s[N];

int main() {
  scanf(" %s", s);
  int n = strlen(s);
  int c = 0;
  ll ans = 0;
  int fst = 0;
  for(int i = 0; i < n; ++i) {
    c += (s[i] == 'M') ? 1 : -1;
    if(c == 0) {
      if(!fst) ans = 1;
      else {
        ans *= 2LL;
        ans %= md;
      }
      fst = 1;
    }
  }
  if(c) puts("0");
  else printf("%lld\n", ans);
  return 0;
}