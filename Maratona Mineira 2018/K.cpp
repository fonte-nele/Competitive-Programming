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

int m, n;
string s;
vector< string > v;
vector< int > id, memo;
vector< string > dp;
string sol;

string solve(int x) {
  if(memo[x] == 1) {
    puts("-1");
    exit(0);
  }
  if(memo[x] == 2) return dp[x];
  memo[x] = 1;
  string ret = "";
  if(id[x] == -1) {
    ret.pb(x);
    memo[x] = 2;
    return dp[x] = ret;
  }
  for(int i = 0; i < v[id[x]].size(); ++i) {
    int y = v[id[x]][i];
    string foo = solve(y);
    for(int j = 0; j < foo.size(); ++j) ret.pb(foo[j]);
  }
  memo[x] = 2;
  return dp[x] = ret;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  id = vector< int >(1024, -1);
  memo = vector< int >(1024, 0);
  dp = vector< string >(1024, "");
  cin >> m;
  for(int i = 0; i < m; ++i) {
    char c; cin >> c >> s;
    id[c] = i;
    v.pb((string)s);
  }
  cin >> n >> s;
  for(int i = 0; i < n; ++i) {
    string foo = solve(s[i]);
    for(int j = 0; j < foo.size(); ++j) sol.pb(foo[j]);
  }
  cout << sol << endl;
  return 0;
}