/*input
003.656930
0.5000
.001
0.0001
1.99999999
0.9999
135
0.6531
135.
0.6531
1356.13671
0.1367
0.00010001
0.0001
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
    
    long int valor;
    bool flag;
    string num, cutoff;
    while(cin >> num >> cutoff)
    {
        flag = false;
        string p1, p2;
        int tam = num.size();
        f(0, tam)
        {
            if(num[i] == '.')
            {
                flag = true;
                if(i == 0)
                    p1 = "0";
                else
                    p1 = num.substr(0, i);
                if(i == tam-1)
                    p2 = "0";
                else
                    p2 = num.substr(i+1, tam-1);
                break;
            }
        }
        if(!flag)
        {
            p1 = num;
            p2 = "0";
        }
        string aux = cutoff.substr(2, 5);
        valor = atol(p1.c_str());
        /*cout << p1 << endl;
        cout << p2 << endl;
        cout << aux << endl;
        cout << valor << endl;*/
        if(p2 > aux)
        {
            //cout << "p2" << endl;
            valor++;
        }
        cout << valor << endl;
    }

    return 0;
}