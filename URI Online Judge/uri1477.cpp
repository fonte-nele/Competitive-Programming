/*input
10 7
C 1 10
M 5 6
C 5 6
M 6 7
C 4 8
M 1 10
C 1 10
5 6
M 1 5
M 2 4
M 1 2
M 4 5
C 1 5
C 3 4
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

struct contagem {
    int cnt[3];
    void shift(int n){
        n %= 3;
        int tmp[3];
        for(int i = 0; i < 3; i++) tmp[i] = cnt[i];
        for(int i = 0; i < 3; i++) 
            cnt[i] = tmp[(i - n + 3) % 3];
    }
 };

 contagem operator + (const contagem a, const contagem b){
    contagem res;
    for(int i = 0; i < 3; i++) res.cnt[i] = a.cnt[i] + b.cnt[i];
    return res;
 }


class SegmentTree {
private:
    vector<contagem> st;
    vector<int> lazy;
    int size;

#define left(p) (p << 1)
#define right(p) ((p << 1) + 1)
    void build(int p, int l, int r){
        if(l == r){
            st[p].cnt[0] = 1;
        }else {
            build(left(p), l, (l+r)/2);
            build(right(p), (l+r)/2+1, r);
            st[p] = st[left(p)] + st[right(p)];
        }
    }
    void push(int p, int l, int r){
        st[p].shift(lazy[p]);
        if(l != r){
            lazy[left(p)] += lazy[p];
            lazy[right(p)] += lazy[p];
        }
        lazy[p] = 0;
    }
    contagem query(int p, int l, int r, int a, int b){
        push(p, l, r);
        if(a > r || b < l) return contagem();
        if(l >= a && r <= b) return st[p];
        contagem p1 = query(left(p), l, (l+r)/2, a, b);
        contagem p2 = query(right(p), (l+r)/2+1, r, a, b);
        return p1 + p2;
    }
    void update(int p, int l, int r, int a, int b, int v){
        push(p, l, r);
        if(a > r || b < l) return;
        else if(l >= a && r <= b){
            lazy[p] += v;
            push(p, l, r);
        }else{
            update(left(p), l, (l+r)/2, a, b, v);
            update(right(p), (l+r)/2+1, r, a, b, v);
            st[p] = st[left(p)] + st[right(p)];
        }
    }
public:
    SegmentTree(int N){
        size = N;
        st.assign(4*size, contagem());
        lazy.assign(4*size, 0LL); 
        build(1, 0, size-1);
    }   
    contagem query(int a, int b) { return query(1, 0, size-1, a, b); }
    void update(int a, int b, int v) { update(1, 0, size-1, a, b, v); }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    
    while(cin >> n >> m)
    {
        SegmentTree st(n);

        while(m--)
        {
            char op; 
            int p, q;
            cin >> op >> p >> q;
            if(op == 'M'){ 
                st.update(p-1, q-1, 1);
                //updateRange(BITree1,BITree2,n,0,p-1,q-1); 
            }
            else if(op == 'C')
            {
                contagem qr = st.query(p-1, q-1);
                cout << qr.cnt[0] << " " << qr.cnt[1] << " " << qr.cnt[2] << endl;
            }
        }
        cout << endl;
    }

    return 0;
}