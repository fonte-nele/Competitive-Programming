/*input
4 6
-2 6 0 -1
C 1 10
P 1 4
C 3 7
P 2 2
C 4 -5
P 1 4
5 9
1 5 -2 4 3
P 1 2
P 1 5
C 4 -5
P 1 5
P 4 5
C 3 0
P 1 5
C 4 -5
C 4 -5
*/
#include <bits/stdc++.h>
using namespace std;

#define f(inicio, fim) for(int i = inicio; i < fim; i++)
#define fr(inicio, fim) for(int j = inicio; j < fim; j++)
#define all(x) x.begin (), x.end ()
#define sz(x) (int) x.size ()
#define pb push_back
#define mk make_pair
#define fi first
#define se second
#define eps 1e-9
#define mem(x, val) memset ((x), (val), sizeof (x))
#define LSONE(s) ((s)&(-s))
#define INF 0x3f3f3f3f
#define pi 3.14159265359
typedef long long ll;
typedef unsigned long long int ull;
typedef string st;
typedef vector <string> vs;
typedef pair <int, int> ii;
typedef pair <double, ii > iii;
typedef vector <int> vi;
typedef vector <ii> vii;
typedef map <int, int> mii;

int comp(int a, int b){
    int i = (a < 0 ? -1 : a == 0 ? 0 : 1);
    int j = (b < 0 ? -1 : b == 0 ? 0 : 1);
    return i*j;
}

class SegmentTree {
private:
    vector<int> st, A;
    int size;
#define left(p) (p << 1)
#define right(p) ((p << 1) + 1)
    void build(int p, int l, int r){
        if(l == r) st[p] = A[l];
        else {
            build(left(p), l, (l+r)/2);
            build(right(p), (l+r)/2+1, r);
            st[p] = comp(st[left(p)], st[right(p)]);
        }
    }
    int query(int p, int l, int r, int a, int b){
        if(a > r || b < l) return 1;
        if(l >= a && r <= b) return st[p];
        int p1 = query(left(p), l, (l+r)/2, a, b);
        int p2 = query(right(p), (l+r)/2+1, r, a, b);
        return comp(p1, p2);
    }
    void update(int p, int l, int r, int ind, int v){
        if(ind > r || ind < l) return;
        else if(l == ind && r == ind){
            A[ind] = v;
            st[p] = A[l];
        }else {
            update(left(p), l, (l+r)/2, ind, v);
            update(right(p), (l+r)/2+1, r, ind, v);
            st[p] = comp(st[left(p)], st[right(p)]);
        }
    }
public:
    SegmentTree(vector<int> &_A){
        A = _A;
        size = A.size();
        st.assign(4*size, 0);
        build(1, 0, size-1);
    }
    int query(int a, int b){  return query(1, 0, size-1, a, b); }
    void update(int ind, int v) { update(1, 0, size-1, ind, v); }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k, n;
    
    while(cin >> n >> k)
    {
        vector<int> a(n, 0);
        f(0, n)
            cin >> a[i];
        SegmentTree st(a);
        string ans = "";
        while(k--)
        {
            char c; 
            int i, j;
            cin >> c >> i >> j;
            if(c == 'C') 
                st.update(i-1, j);
            else if(c == 'P')
            {
                int qr = st.query(i-1, j-1);
                ans += (qr == 0 ? '0' : qr < 0 ? '-' : '+');
            }
        }
        cout << ans.c_str() << endl;
    }

    return 0;
}