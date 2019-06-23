/*input
4
99^99
100!
57^199
874!
123^488
123!
7601^5684
7449!
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

/*
    Link para as fórmulas usadas:
        https://math.stackexchange.com/a/1357967
*/

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int quant, base, exp, fat, lucas = 0, pos = 0;
    char aux;
    cin >> quant;
    vector<char> rodadas(quant+1);

    f(0, quant)
    {
        cin >> base >> aux >> exp;
        cin >> fat >> aux;
        //cout << "Base " << base << " Expoente: " << exp << endl;
        //cout << "Fat " << fat << endl;
        double calc1 = log(base) * exp;
        double calc2 = 0.0;
        fr(1, fat+1)
            calc2 += log(j); 
        if (calc1 > calc2)
        {
            lucas++;
            rodadas[pos] = 'l';
        }
        else{
            rodadas[pos] = 'p';
        }
        pos++;
    }
    if(lucas > quant-lucas)
        cout << "Campeao: Lucas!" << endl;
    else if(lucas == quant - lucas)
        cout << "A competicao terminou empatada!" << endl;
    else
        cout << "Campeao: Pedro!" << endl;

    f(1, quant+1)
    {
        string resp = (rodadas[i-1] == 'l') ? "Lucas" : "Pedro";
        cout << "Rodada #" << i << ": " << resp << " foi o vencedor" << endl;
    }

    return 0;
}