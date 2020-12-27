#include <bits/stdc++.h>
using namespace std;

typedef struct
{
	string nome;
	int idade;
}Duende;

bool comp(Duende a, Duende b){

	if(a.idade != b.idade)
		return a.idade > b.idade;
	else
		return a.nome < b.nome;
}

int main()
{
  int n, id;
  string name;
  cin >> n;
  vector<Duende> v(n);

  for (int i = 0; i < n; i++){
  	cin >> name >> id;

  	v[i].nome = name;
  	v[i].idade = id;  	
  }

  sort(v.begin(), v.end(), comp);
 	
  // for (int i = 0; i < n; i++){
  // 	cout << v[i].nome << v[i].idade << endl;  	
  // }
  int quant = n/3;
  for (int i = 0; i < quant; i++)
  {
  	cout << "Time " << i+1 << endl;
  	for (int j = i; j < n; j += (quant))
  	{
  		cout << v[j].nome << " " << v[j].idade << endl;
  	}
  	cout << endl;
  }


  return 0;
}