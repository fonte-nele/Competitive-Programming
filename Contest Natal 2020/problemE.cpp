#include <bits/stdc++.h>
#define MAX 101
using namespace std;

vector <int> lista[MAX];
vector <int>::iterator it;
stack <int> pilha;
bool marc[MAX];

int main(){
 int n,m,u,v,i,a,b,cont;
 
  cin >> n >> m; 
  for(i=1;i<=n;i++){ 
    marc[i]=false;
    lista[i].clear();
  }
  for(i=1;i<=m;i++){
   cin >> a >> b;
   lista[a].push_back(b);
   lista[b].push_back(a);
  }
  marc[1] = true;
  pilha.push(1);
  cont = 0;
  while(!pilha.empty()){
   u = pilha.top();
   pilha.pop();
   cont++;
   for(it = lista[u].begin(); it!=lista[u].end(); it++){
    if(!marc[*it]){
     marc[*it]=true;
     pilha.push(*it);
    }
   } 
  }
  
  if(cont==n)
   cout << "COMPLETO" << endl;
  else
   cout << "INCOMPLETO" << endl;
}