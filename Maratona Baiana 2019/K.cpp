/*input
alemanha brasil china coreia 
6 
brasil 7 alemanha 1 
coreia 2 china 1 
coreia 2 alemanha 2 
brasil 1 china 0 
brasil 1 coreia 1 
alemanha 3 china 2 
*/

// K - Copa do Mundo 
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
#define pi 3.1415926535897
#define MAX 305
typedef long long int ll;
typedef unsigned long long int ull;
typedef string st;
typedef vector <string> vs;
typedef pair <int, int> ii;
typedef pair <double, ii > iii;
typedef vector <int> vi;
typedef vector <ii> vii;
typedef map <int, int> mii;

typedef struct camp
{
    string nome;
    int pontos;
    int vit;
    int saldo;
}Camp;

bool compare(const Camp& t1, const Camp& t2){
    if(t1.pontos != t2.pontos){
        return t1.pontos > t2.pontos;
    }else if(t1.vit != t2.vit){
        return t1.vit > t2.vit;
    }else if(t1.saldo != t2.saldo){
        return t1.saldo > t2.saldo;
    }else{
        return t1.nome < t2.nome;
    }
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<Camp> tim(4);
    string t1, t2;
    int n, g1, g2, pos1, pos2;

    f(0, 4){
        cin >> tim[i].nome;
        tim[i].pontos = 0;
        tim[i].vit = 0;
        tim[i].saldo = 0;
    }

    cin >> n;
    f(0, n){
        cin >> t1 >> g1 >> t2 >> g2;

        fr(0, 4){
            if(tim[j].nome == t1)
                pos1 = j;
            if(tim[j].nome == t2)
                pos2 = j;
        }

        if(g1 > g2){
            tim[pos1].pontos += 3;
            tim[pos1].vit++;
            tim[pos1].saldo += (g1 - g2);
            tim[pos2].saldo += (g2 - g1);
        }else if(g1 < g2){
            tim[pos2].pontos += 3;
            tim[pos2].vit++;
            tim[pos2].saldo += (g2 - g1);
            tim[pos1].saldo += (g1 - g2);
        }else{
            tim[pos1].pontos++;
            tim[pos2].pontos++;
        }
    }
    sort(tim.begin(), tim.end(), compare);

    f(0, 2){
        cout << tim[i].nome << endl;
        //cout << tim[i].pontos << " vit = " << tim[i].vit << " saldo = " << tim[i].saldo << endl;
    }

    return 0;
}