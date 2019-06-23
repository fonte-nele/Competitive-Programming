/*input
10
1 2 3 4 5 4 3 2 1 2
a 9
? 10
a 2
a 5
? 6
a 6
? 10
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

int getSum(int BITree[], int index) 
{ 
    int sum = 0; // Iniialize result 
  
    index = index + 1; 
    while (index > 0) 
    { 
        sum += BITree[index]; 
  
        index -= index & (-index); 
    } 
    return sum; 
} 
  
void updateBIT(int BITree[], int n, int index, int val) 
{ 
    index = index + 1; 
    while (index <= n) 
    { 
        BITree[index] += val; 
  
        index += index & (-index); 
    } 
} 

int sum(int x, int BITTree1[], int BITTree2[]) 
{ 
    return (getSum(BITTree1, x) * x) - getSum(BITTree2, x); 
}

void updateRange(int BITTree1[], int BITTree2[], int n, 
                 int val, int l, int r) 
{ 
    updateBIT(BITTree1,n,l,val); 
    updateBIT(BITTree1,n,r+1,-val); 
  
    updateBIT(BITTree2,n,l,val*(l-1)); 
    updateBIT(BITTree2,n,r+1,-val*r); 
} 
  
int rangeSum(int l, int r, int BITTree1[], int BITTree2[]) 
{ 
    return sum(r, BITTree1, BITTree2) - 
           sum(l-1, BITTree1, BITTree2); 
} 
  
int *constructBITree(int n) 
{ 
    int *BITree = new int[n+1]; 
    for (int i=1; i<=n; i++) 
        BITree[i] = 0;  
  
    return BITree; 
} 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;

    int op, x, y, a, b, c, d;
    int *BITree1, *BITree2;
    BITree1 = constructBITree(n);
    BITree2 = constructBITree(n);
    f(0, m)
    {
        cin >> op;
        if(op == 1)
        {
            cin >> x >> y;
            updateRange(BITree1,BITree2,n,y,x-1,x-1); 
        }
        else
        {
            cin >> a >> b >> c >> d;

            if((c >= a && c <=b) && d > b){
                c = b+1;
                cout << rangeSum(a-1,b-1,BITree1,BITree2) + rangeSum(c-1,d-1,BITree1,BITree2) << endl;
            }
            else if(c >= a && d <= b){
                cout << rangeSum(a-1,b-1,BITree1,BITree2) << endl;
            }
            else if(c < a && (d >= a && d <= b))
            {
                cout << rangeSum(c-1,b-1,BITree1,BITree2) << endl;
            }
            else if(c < a && d > b)
            {
                int aux = rangeSum(c-1,a-1,BITree1,BITree2);
                cout << aux + rangeSum(a,b-1,BITree1,BITree2) + rangeSum(b,d-1,BITree1,BITree2) << endl;
            }
            else{
                cout << rangeSum(a-1,b-1,BITree1,BITree2) + rangeSum(c-1,d-1,BITree1,BITree2) << endl;
            }
            //cout << "Soma ab= " << rangeSum(a-1,b-1,BITree1,BITree2) << endl;
            //cout << "Soma cd= " << rangeSum(c-1,d-1,BITree1,BITree2) << endl;
        }
    }

    return 0;
}