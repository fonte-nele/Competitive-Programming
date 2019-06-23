#include <bits/stdc++.h>
using namespace std;

bool tudo(bool *bolas, int size) 
{
  for(int i=0; i<=size; i++)
  {
    if(!bolas[i])
    {
      return false;
    }
  }
  return true;
}

int main() 
{
  int n, b;

  while(cin >> n >> b && (n + b))
  {
    bool bolas[n + 1];
    int remaind[b];
    memset(bolas, 0, n + 1);
    bolas[0] = true;

    for(int i=0; i<b; i++)
    {
      cin >> remaind[i];
    }

    for(int i=0; i<b; i++)
    {
      for(int j=i+1; j<b; j++)
      {
        bolas[abs(remaind[i] - remaind[j])] = 1;
      }
    }

    if(tudo(bolas, n))
    {
      cout << 'Y' << endl;
    }
    else
    {
      cout << 'N' << endl;    
    }
  }
  return 0;
}