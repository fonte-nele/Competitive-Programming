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

const int N = 200020;

ll n, m;
vi dis;
ll p[N];
vector< string > solution;

inline ll qd(ll x) {
  ll q = 0;
  while(x) q++, x /= 10;
  return q;
}

inline string toString(ll x) {
  string o = "";
  while(x) {
    o.pb((x % 10) + '0') ;
    x /= 10;
  }
  reverse(o.begin(), o.end());
  return o;
}

vector< pair<int, ii> > dad[N];

void generateAll(int y, string ant, string pos) {
  if(dis[y] == qd(n)) {
    string r = ant; reverse(r.begin(), r.end());
    string f = r + toString(n) + pos;
    ll correct = 0;
    for(int i = 0; i < f.size(); ++i) {
      correct *= 10LL;
      correct += f[i] - '0';
      correct %= m;
    }
    if(!correct) solution.pb(f);
    return;
  }
  for(int i = 0; i < dad[y].size(); ++i) {
    int x = dad[y][i].F;
    int t = dad[y][i].S.F;
    int v = dad[y][i].S.S;
    if(t == 0) {
      ant.pb(v + '0');
      generateAll(x, ant, pos);
      ant.pop_back();
    }
    else {
      pos.pb(v + '0');
      generateAll(x, ant, pos);
      pos.pop_back();
    }
  }
  return;
}

int main() {
  dis = vi(N, LINF);
  scanf("%lld %lld", &n, &m);
  p[0] = 1;
  for(int i = 1; i < N; ++i) p[i] = (p[i - 1] * 10) % m;
  dis[n % m] = qd(n);
  pq< ii > q; q.push(ii(-qd(n), n % m));
  while(!q.empty()) {
    ii foo = q.top(); q.pop();
    ll w = -foo.F;
    ll x = foo.S;
    if(dis[x] != w) continue;
    for(int i = 0; i < 9; ++i) {
      ll y = (x + (p[w] * i)) % m;
      if(dis[y] > dis[x] + 1) {
        dis[y] = dis[x] + 1;
        q.push(ii(-dis[y], y));
      }
    }
    for(int i = 0; i < 9; ++i) {
      ll y = (x * 10LL + i) % m;
      if(dis[y] > dis[x] + 1) {
        dis[y] = dis[x] + 1;
        q.push(ii(-dis[y], y));
      }
    }
    for(int i = 0; i < 9; ++i) {
      ll y = (x + (p[w] * i)) % m;
      if(dis[y] == dis[x] + 1) {
        dad[y].pb(mp(x, mp(0, i)));
      }
    }
    for(int i = 0; i < 9; ++i) {
      ll y = (x * 10LL + i) % m;
      if(dis[y] == dis[x] + 1) {
        dad[y].pb(mp(x, mp(1, i)));
      }
    }
  }
  string a = "", b = "";
  generateAll(0, a, b);
  sort(solution.begin(), solution.end());
  if(solution[0].size() == 0)  {
    puts("NOOOOOOOOOOOOOO");
    return 0;
  }
  printf("%s\n", solution[0].c_str());
  ll correct = 0;
  for(int i = 0; i < solution[0].size(); ++i) {
    correct *= 10LL;
    correct += solution[0][i] - '0';
    correct %= m;
  }
  assert(correct == 0);
  return 0;
}