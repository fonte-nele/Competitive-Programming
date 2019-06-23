/*input
3
4
1 1 2 1        
2 2 3 0
3 2 1 0
2 1 1 4
2
3 1 2 0    
1 1 3 1
0
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

struct Times
{
    int id;
    int pontuacao;
    int gols;
};

struct Primeiro {
    struct Times t;
};
 struct Vice {
    struct Times t;
};

/*bool Ehcomp(const Ttime& p1, const Ttime& p2)
{
    if(p1.pontos != p2.pontos)
        return p1.pontos > p2.pontos;
    else if(p1.gols != p2.gols)
        return p1.gols > p2.gols;
    else
        return p1.id < p2.id;
}*/

int p[1000001], v[1000001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, t1, t2, p1, p2;
    vector<Times> time;
    vector<Primeiro> primeiro;
    vector<Vice> vice;
    
    Primeiro aux = { 0, 0, 0 };
    primeiro.push_back(aux);
    Vice aux2 = { 0, 0, 0 };
    vice.push_back(aux2);
    cin >> n;
    for(int i = 1; i <= n; i++){
        Times temp = { i, 0, 0 };
        time.push_back(temp);
    } 

    while(cin >> m && m)
    {
        f(0, m)
        {
            cin >> t1 >> p1 >> t2 >> p2;
            if(p1 > p2){
                time[t1-1].pontuacao += 3;
                time[t1-1].gols += p1;
                time[t2-1].gols += p2;
            }
            else if(p1 < p2){
                time[t2-1].pontuacao += 3;
                time[t2-1].gols += p2;
                time[t1-1].gols += p1;
            }
            else{
                time[t1-1].pontuacao += 1;
                time[t2-1].pontuacao += 1;
                time[t1-1].gols += p1;
                time[t2-1].gols += p2;
            }
            time[t1-1].id = t1;
            time[t2-1].id = t2;
        }
        //sort(v.begin(), v.end(), Ehcomp);

        // f(0, n)
        // {
        //     cout << "Id = " << v[i].id << " Pontos = " << v[i].pontos << " Gols = " << v[i].gols << endl;
        // }
        // cout << endl;

        for(int i = 0; i < (int)time.size(); i++){
            if(time[i].pontuacao > primeiro[0].t.pontuacao){
                vice[0].t.id = primeiro[0].t.id;
                vice[0].t.pontuacao = primeiro[0].t.pontuacao;
                vice[0].t.gols = primeiro[0].t.gols;
                 primeiro[0].t.id = time[i].id;
                primeiro[0].t.pontuacao = time[i].pontuacao;
                primeiro[0].t.gols = time[i].gols;
            }else if(time[i].pontuacao == primeiro[0].t.pontuacao){
                if(time[i].gols > primeiro[0].t.gols){
                    vice[0].t.id = primeiro[0].t.id;
                    vice[0].t.gols = primeiro[0].t.gols;
                     primeiro[0].t.id = time[i].id;
                    primeiro[0].t.gols = time[i].gols;
                }else if(time[i].gols == primeiro[0].t.gols){
                    if(time[i].id < primeiro[0].t.id){
                        vice[0].t.id = primeiro[0].t.id;
                        primeiro[0].t.id = time[i].id;
                    }else{
                        vice[0].t.id = time[i].id;
                        vice[0].t.gols = time[i].gols;
                        vice[0].t.pontuacao = time[i].pontuacao;
                    }
                }else{
                    vice[0].t.id = time[i].id;
                    vice[0].t.gols = time[i].gols;
                    vice[0].t.pontuacao = time[i].pontuacao;
                }
            }else{
                if(time[i].pontuacao > vice[0].t.pontuacao){
                    vice[0].t.id = time[i].id;
                    vice[0].t.pontuacao = time[i].pontuacao;
                    vice[0].t.gols = time[i].gols;
                }else if(time[i].pontuacao == vice[0].t.pontuacao){
                    if(time[i].gols > vice[0].t.gols){
                        vice[0].t.id = time[i].id;
                        vice[0].t.gols = time[i].gols;
                    }else if(time[i].gols == vice[0].t.gols){
                        if(time[i].id < vice[0].t.id){
                            vice[0].t.id = time[i].id;
                        }
                    }else{
                        vice[0].t.id = time[i].id;
                        vice[0].t.gols = time[i].gols;
                        vice[0].t.pontuacao = time[i].pontuacao;
                    }
                }
            }
        }
        //cout << "PRIMEIRO: " << endl;
        //cout << "Nome: " << primeiro[0].t.id << " - Gols: " << primeiro[0].t.gols << " - Pontuacao: " << primeiro[0].t.pontuacao << endl;
        //cout << endl;
         //cout << "VICE: " << endl;
        //cout << "Nome: " << vice[0].t.id << " - Gols: " << vice[0].t.gols << " - Pontuacao: " << vice[0].t.pontuacao << endl;
        //cout << endl;
        p[primeiro[0].t.id - 1] += 1;
        v[vice[0].t.id - 1] += 1;
         //for(int i = 0; i < p.size(); i++){
        //    cout << p[i] << " ";
        //    cout << v[i] << endl;
        //}
        // LIMPA OS VECTORS
        time.clear();
        for(int i = 1; i <= n; i++){
            Times temp = { i, 0, 0 };
            time.push_back(temp);
        }
         primeiro.clear();
        Primeiro aux = { 0, 0, 0 };
        primeiro.push_back(aux);
        vice.clear();
        Vice aux2 = { 0, 0, 0 };
        vice.push_back(aux2);
    }
    int qntdPrimeiro = 0, qntdVice = 0, primeiroColocado, segundoColocado;
    for(int i = 0; i < n; i++){
        if(p[i] > qntdPrimeiro){
            qntdPrimeiro = p[i];
            primeiroColocado = i + 1;
        }
        if(v[i] > qntdVice){
            qntdVice = v[i];
            segundoColocado = i + 1;
        }
    }
    if(segundoColocado == 1){
        cout << "Y" << endl;
    }else{
        cout << "N" << endl;
    }

    return 0;
}