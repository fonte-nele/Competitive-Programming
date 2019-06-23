#include <bits/stdc++.h>
#define f(inicio, fim) for(int i = inicio; i < fim; i++)
 
using namespace std;
 
vector< vector<int> > grafo;
vector< list<int> > invertido;
vector< set<int> > tamanho;
 
int main() {
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    vector<int> res;
 
    int n, m ;
    cin >> n >> m;
    grafo.resize(n);
    invertido.resize(n);
    tamanho.resize(50001);
 
 
    f(0, m){
        int a, b;
        cin >> a >> b;
        grafo[a].push_back(b);
        invertido[b].push_back(a);
    }
 
    f(0, invertido.size())
        tamanho[invertido[i].size()].insert(i);
 
    int quant = 0;
    bool ciclo = false;
 
    while(quant < n){
        if(tamanho[0].size() == 0){
            ciclo = true;
            break;
        }
 
        int vert = *tamanho[0].begin();
        res.push_back(vert);
        tamanho[0].erase(vert);
 
        f(0, grafo[vert].size()){
            int size = invertido[grafo[vert][i]].size();
 
            invertido[grafo[vert][i]].remove(vert);
            tamanho[size].erase(grafo[vert][i]);
            tamanho[size - 1].insert(grafo[vert][i]);
        }
 
        quant++;
    }
 
    if(ciclo)
        cout << "*\n";
    else{
        f(0, res.size())
            cout << res[i] << "\n";
    }
    return 0;
}