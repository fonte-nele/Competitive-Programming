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
    while (index>0) 
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
  
int *constructBITree(int arr[], int n) 
{ 
    int *BITree = new int[n+1]; 
    for (int i=1; i<=n; i++) 
        BITree[i] = 0; 
  
    for (int i=0; i<n; i++) 
        updateBIT(BITree, n, i, arr[i]); 
  
    return BITree; 
} 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, aux;
    cin >> n;
    int freq[n];
    f(0, n)
        cin >> freq[i];

    char op;
    int b;
    int *BITree = constructBITree(freq, n);
    while(cin >> op >> b)
    {
        if(op == '?')
        {
            cout << getSum(BITree, b-2) << endl;
        }
        else
        {
            aux = freq[b-1];
            freq[b-1] = 0;
            updateBIT(BITree, n, b-1, -aux);
        }
    }

    /*int freq[] = {2, 1, 1, 3, 2, 3, 4, 5, 6, 7, 8, 9}; 
    int n = sizeof(freq)/sizeof(freq[0]); 
    int *BITree = constructBITree(freq, n); 
    cout << "Sum of elements in arr[0..5] is "
        << getSum(BITree, 5); 
  
    // Let use test the update operation 
    freq[3] += 6; 
    updateBIT(BITree, n, 3, 6); //Update BIT for above change in arr[] 
  
    cout << "\nSum of elements in arr[0..5] after update is "
        << getSum(BITree, 5);
    */
    return 0;
}