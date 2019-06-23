/*input
4
100 150 90 170
3
2 1 3
1 2 50
2 2 4
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

ii comp(ii i, ii j){
    return ii(max(i.first, j.first), min(i.second, j.second));
}

class SegmentTree {
private:
    vi A;
    vector<ii> st;
    int size;

#define left(p) (p << 1)
#define right(p) ((p << 1) + 1)
    void build(int p, int l, int r){
        if(l == r){
            st[p] = ii(A[l], A[l]);
        }else {
            build(left(p), l, (l+r)/2);
            build(right(p), (l+r)/2+1, r);
            st[p] = comp(st[left(p)], st[right(p)]);
        }
    }
    ii query(int p, int l, int r, int i, int j){
        if(i > r || j < l) return ii(-INF, INF);
        if(l >= i && r <= j) return st[p];
        ii p1 = query(left(p), l, (l+r)/2, i, j);
        ii p2 = query(right(p), (l+r)/2+1, r, i, j);
        return comp(p1, p2);
    }
    void update(int p, int l, int r, int k, int v){
        if(k > r || k < l) return;
        if(l == k && r == k){
            A[k] = v;
            st[p] = ii(A[l], A[l]);
        }else{
            update(left(p), l, (l+r)/2, k, v);
            update(right(p), (l+r)/2+1, r, k, v);
            st[p] = comp(st[left(p)], st[right(p)]);
        }
    }
public:
    SegmentTree(vector<int> &_A){
        A = _A;
        size = (int)A.size();
        st.assign(4*size, ii());
        build(1, 0, size-1);
    }   
    ii query(int a, int b) { return query(1, 0, size-1, a, b); }
    void update(int k, int v) { update(1, 0, size-1, k, v); }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    
    while(cin >> n)
    {
        vector<int> A(n);
        f(0, n){
            cin >> A[i];
        }
        SegmentTree st(A);
        cin >> m;
        while(m--)
        {
            int op;
            int p, q;
            cin >> op >> p >> q;
            if(op == 1){ 
                st.update(p-1, q);
            }
            else if(op == 2)
            {
                ii query = st.query(p-1, q-1);
                cout << query.first - query.second << endl;
            }
        }
    }

    return 0;
}