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


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n1, n2;
    cin >> n1 >> n2;

    if(n2 < n1)
        cout << "Eu odeio a professora!" << endl;
    else if(n2-n1 >= 3)
        cout << "Muito bem! Apresenta antes do Natal!" << endl;
    else{
        cout << "Parece o trabalho do meu filho!" << endl;
        if(n1+2 < 24)
            cout << "TCC Apresentado!" << endl;
        else
            cout << "Fail! Entao eh nataaaaal!" << endl;
    }

    return 0;
}