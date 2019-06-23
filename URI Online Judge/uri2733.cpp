/*input
10
1
45
23
73
56
23
23
1
45
89
*/
#include <bits/stdc++.h>
using namespace std;

#define f(inicio, fim) for(int i = inicio; i < fim; i++)
#define fr(inicio, fim) for(int j = inicio; j < fim; j++)
#define all(x) x.begin (), x.end ()
//#define sz(x) (int) x.size ()
#define pb push_back
#define mk make_pair
#define fi first
#define se second
#define eps 1e-9
#define mem(x, val) memset ((x), (val), sizeof (x))
#define LSONE(s) ((s)&(-s))
#define INF 0x3f3f3f3f3f3f3f3fLL
typedef long long ll;
typedef unsigned long long int ull;
typedef string st;
typedef vector <string> vs;
typedef pair <int, int> ii;
typedef pair <int, pair <int, int> > iii;
typedef vector <int> vi;
typedef vector <ii> vii;
typedef map <int, int> mii;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int quant, num, cont = 0, ler = 0, livrosArmario[10000];
    

    while(cin >> quant)
    {
        cont = ler = 0;

        for(int i=0;i<quant;i++) 
        {
            cin >> num;
            
            if(i == 0) 
            {
                cont++;
                livrosArmario[3] = num;
            }
            else 
            {
                ler = 0;
                for(int j=0;j<5;j++) 
                {
                    if(livrosArmario[j] == num) 
                    {
                        ler = 1;
                        break;
                    }
                }
                
                for(int j=1;j<4;j++) 
                { 
                    if(ler == 0)
                    {
                        livrosArmario[j-1] = livrosArmario[j];
                    }   
                }
                
                if(ler == 0)
                {
                    livrosArmario[3] = num;
                    cont++;
                }
            }   
        }
        cout << cont << endl;

    }
    
    return 0;
}