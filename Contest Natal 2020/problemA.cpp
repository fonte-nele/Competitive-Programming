#include <bits/stdc++.h>
using namespace std;

int main()
{
  int b, g;
  cin >> b >> g;

  int total = g/2 - b;

  if(total > 0)
    cout << "Faltam " << total << " bolinha(s)" << endl;
  else
    cout << "Amelia tem todas bolinhas!" << endl;

  return 0;
}