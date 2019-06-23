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

ll comp(ll a, ll b){
    return a+b;
}

class SegmentTree {
private:
    vector<ll> st, lazy;
    int size;
#define left(p) (p << 1)
#define right(p) ((p << 1) + 1)
    void push(int p, int l, int r){
        if(l != r){
            lazy[right(p)] += lazy[p];
            lazy[left(p)] += lazy[p];
        }
        st[p] += (r - l + 1) * lazy[p];
        lazy[p] = 0;
    }
    // void build(int p, int l, int r){
    //     if(l == r) st[p] = A[l];
    //     else {
    //         build(left(p), l, (l+r)/2);
    //         build(right(p), (l+r)/2+1, r);
    //         st[p] = comp(st[left(p)], st[right(p)]);
    //     }
    // }
    long long query(int p, int l, int r, int a, int b){
        push(p, l, r);
        if(a > r || b < l) return 0;
        if(l >= a && r <= b) return st[p];
        ll p1 = query(left(p), l, (l+r)/2, a, b);
        ll p2 = query(right(p), (l+r)/2+1, r, a, b);
        return comp(p1, p2);
    }
    void update(int p, int l, int r, int a, int b, long long v){
        push(p, l, r);
        if(a > r || b < l) 
            return;
        else if(l >= a && r <= b){
            lazy[p] = v;
            push(p, l, r);
            //st[p] = A[l];
        }else {
            update(left(p), l, (l+r)/2, a, b, v);
            update(right(p), (l+r)/2+1, r, a, b, v);
            st[p] = comp(st[left(p)], st[right(p)]);
        }
    }
public:
    SegmentTree(int n){
        //A = _A;
        size = n;
        st.assign(4*size, 0);
        lazy.assign(4*size, 0);
        //build(1, 0, size-1);
    }
    long long query(int a, int b){  return query(1, 0, size-1, a, b); }
    void update(int a, int b, long long v) { update(1, 0, size-1, a, b, v); }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, c, t;
    cin >> t;
    
    while(t--)
    {
        cin >> n >> c;
        // vector<int> a(n, 0);
        // f(0, n)
        //     a[i] = 0;
        SegmentTree st(n);
        while(c--)
        {
            int op; 
            int p, q;
            long long v;
            cin >> op >> p >> q;
            if(op == 0){ 
                cin >> v; 
                st.update(p-1, q-1, v);
            }
            else if(op == 1)
            {
                cout << st.query(p-1, q-1) << endl;
            }
        }
    }

    return 0;
}