#include <iostream>
#include <string.h>
using namespace std;

int mini(int a, int b) 
{
    return (a <= b) ? a : b;
}

int main () 
{
    int n;
    while(cin >> n) 
    {
        int i, res = 0;
        int estoque[70][2];
        memset(estoque, 0, sizeof(estoque));
        for(i = 0; i < n; i++) 
        {
            int num;
            char pe;
            cin >> num >> pe;
            if(pe == 'E') 
                estoque[num][0]++;
            if(pe == 'D') 
                estoque[num][1]++;
        }
        for(i = 0; i < 65; i++) 
        {
            res += mini(estoque[i][0], estoque[i][1]);
        }
        cout << res << endl;
    }
    return 0;
}