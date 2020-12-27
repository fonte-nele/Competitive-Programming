#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, h, bon = 0, arq = 0, mus = 0, des = 0, ans = 0;
  string e, g;
  cin >> n;

  for (int i = 0; i < n; i++){
  	cin >> e >> g >> h;

  	if(g == "bonecos")
  		bon+=h;
  	else if(g == "arquitetos")
  		arq+=h;
  	else if(g == "musicos")
  		mus+=h;
  	else if(g == "desenhistas")
  		des+=h;

  }

  ans = bon/8 + arq /4 + mus/6 + des/12;
  cout << ans << endl;

  return 0;
}