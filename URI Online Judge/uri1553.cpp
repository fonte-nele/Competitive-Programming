#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

int main() 
{
  int N, K;

  while (cin >> N >> K, N != 0 || K != 0) 
  {
    vector<int> quantidades(N, 0);

    for (int i = 0; i < N; i++) 
    {
      int pergunta;
      cin >> pergunta;

      quantidades[pergunta - 1] += 1;
    }

    int total = 0;

    for (int i = 0; i < N; i++) 
    {
      if (quantidades[i] >= K) 
        total += 1;
    }

    cout << total << endl;
  }
  return 0;
}