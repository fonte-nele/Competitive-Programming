#include <bits/stdc++.h>
#define fr(inicio, fim) for(int i = inicio; i < fim; i++)
using namespace std;

struct Aresta {
    int destino, peso;
    Aresta() {
    }

    Aresta(int d, int p) :
        destino(d), peso(p) {
    }

    bool operator <(const Aresta &outra) const {
        return peso > outra.peso;
    }
};

vector<Aresta> grafo[501];
vector<int> predecessores[501];
int INF = INT_MAX;
bool proibida[501][501];// arestas proibidas
bool visitado[501];     // bfs
int dist[501];          // dijkstra

void getPredecessoresMenorCaminho(int fonte, int destino, int n) {
    int i;
    for (i = 0; i < n; i++) {
        dist[i] = INF;
    }
    dist[fonte] = 0;

    priority_queue<Aresta> fila;
    fila.push(Aresta(fonte, 0));
    while (!fila.empty()) {
        int dest = fila.top().destino;
        int peso = fila.top().peso;
        fila.pop();
        if (dist[dest] < peso) {
            continue;
        }
        vector<Aresta> arestas = grafo[dest];
        int tam = arestas.size();
        for (i = 0; i < tam; i++) {
            if (peso + arestas[i].peso < dist[arestas[i].destino]) {
                predecessores[arestas[i].destino].clear();          // ignora o q tinha antes
                predecessores[arestas[i].destino].push_back(dest);  // novo predecessor
                dist[arestas[i].destino] = peso + arestas[i].peso;
                fila.push(Aresta(arestas[i].destino, dist[arestas[i].destino]));
            } else if (peso + arestas[i].peso == dist[arestas[i].destino]) {    // pode ter mais de um menor caminho
                
                predecessores[arestas[i].destino].push_back(dest);
            }
        }
    }
}

int dijkstra(int fonte, int destino, int n) {
    int i;
    for (i = 0; i < n; i++) {
        dist[i] = INF;
    }
    dist[fonte] = 0;
    priority_queue<Aresta> fila;
    fila.push(Aresta(fonte, 0));

    while (!fila.empty()) {
        int dest = fila.top().destino;
        int peso = fila.top().peso;
        fila.pop();

        if (dist[dest] < peso) {
            continue;
        } else if (dest == destino) {
            return peso;
        }

        vector<Aresta> arestas = grafo[dest];
        int tam = arestas.size();
        for (i = 0; i < tam; i++) {
            if (!proibida[dest][arestas[i].destino]) {
                if (peso + arestas[i].peso < dist[arestas[i].destino]) {
                    dist[arestas[i].destino] = peso + arestas[i].peso;
                    fila.push(Aresta(arestas[i].destino,
                            dist[arestas[i].destino]));
                }
            }
        }
    }

    return INF;
}

void bfs(int destino, int n) {
    int i;
    memset(visitado, 0, n);
    queue<int> fila;
    visitado[destino] = true;
    fila.push(destino);
    while (!fila.empty()) {
        int prox = fila.front();
        fila.pop();
        vector<int> pred = predecessores[prox];
        int tam = pred.size();
        for (i = 0; i < tam; i++) {
            proibida[pred[i]][prox] = true;
            if (!visitado[pred[i]]) {
                visitado[pred[i]] = true;
                fila.push(pred[i]);
            }
        }
    }
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, inicio, destino, x, y, d;
    
    while(cin >> n >> m && (n || m)){
        
        cin >> inicio >> destino;

        fr(0, n) {
            grafo[i].clear();
            predecessores[i].clear();
        }
        memset(proibida, 0, sizeof(proibida));

        fr(0, m) {
            cin >> x >> y >> d;
            grafo[x].push_back(Aresta(y, d));
        }

        getPredecessoresMenorCaminho(inicio, destino, n);
        bfs(destino, n);
        int quaseMenorCaminho = dijkstra(inicio, destino, n);

        (quaseMenorCaminho == INF) ? cout << -1  << endl : cout << quaseMenorCaminho << endl;
    }

    return 0;
}