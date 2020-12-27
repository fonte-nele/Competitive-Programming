#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, valor, atual, ant, ans = 1, total = 1;
  cin >> n;
  vector<int> v(n);

  for (int i = 0; i < n; i++){
  	cin >> valor;

  	v[i] = valor;
  }

  sort(v.begin(), v.end());
  ant = v[0];
  for (int i = 1; i < n; i++){
  
  	atual = v[i];

  	if(atual != ant){
  		ans ++;
  		total += ans;
  	}
  	else{
  		total += ans;
  	}
  	ant = atual;
  }

  cout << total << endl;

  return 0;
}