#include <bits/stdc++.h>
#define f(inicio, fim) for(int i = inicio; i < fim; i++)
#define fr(inicio, fim) for(int j = inicio; j < fim; j++)
using namespace std;

struct Aresta {
    int destino, peso;

    Aresta(int d, int p) :
        destino(d), peso(p) {
    }

    bool operator <(const Aresta &outra) const {
        return peso > outra.peso;
    }
};

vector<Aresta> grafo[1001];

int dijkstra(int fonte, int destino) 
{
	vector<int> dist(1001);
    int i, valor = INT_MAX;
    f(0, 1001)
    	dist[i] = INT_MAX;

    dist[fonte] = 0;
    priority_queue<Aresta> fila;
    fila.push(Aresta(fonte, 0));
 
    while (!fila.empty()) 
    {
        int dest = fila.top().destino;
        int peso = fila.top().peso;
        fila.pop();
 
        if (dist[dest] < peso) {
            continue;
        }else if (dest == destino) {
            return peso;
        }
 
        vector<Aresta> arestas = grafo[dest];
        int tam = arestas.size();
        for (i = 0; i < tam; i++) 
        {    
            if (peso + arestas[i].peso < dist[arestas[i].destino]) 
            {
                dist[arestas[i].destino] = peso + arestas[i].peso;
                fila.push(Aresta(arestas[i].destino,
                        dist[arestas[i].destino]));
            }
        }
    }
 
    return valor;
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, p, ilhaPing, minimo = INT_MAX, maximo = 0, valor;

    cin >> n >> m;

    f(0, m)
    {
    	int a, b;
    	cin >> a >> b >> p;
    	grafo[a].push_back(Aresta(b,p));	// Lista de adjacencia grafo!
    	grafo[b].push_back(Aresta(a,p));
    }
	cin >> ilhaPing;
	
	f(1, n+1)
	{
		if(i != ilhaPing)
		{
			valor = dijkstra(i, ilhaPing);

			if(valor < minimo)
				minimo = valor;
			if(valor > maximo)
				maximo = valor;

			//cout << i << " " << valor << endl;
 		}
	}
	cout << maximo - minimo << endl;
    return 0;
}