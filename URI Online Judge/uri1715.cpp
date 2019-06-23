#include <iostream>
using namespace std;

int main () 
{
    int i, j, n, m, sum = 0;

    cin >> n >> m;
    
    for(i = 0; i < n; i++) 
    {
        int gols = 0;
        for(j = 0; j < m; j++) 
        {
            int gol;
            cin >> gol;
            if (gol > 0) 
            	gols++;
        }
        if (gols >= m) sum++;
    }
    cout << sum << endl;
  
    return 0;
}