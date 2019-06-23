#include <iostream>
#include <vector>
using namespace std;

int main () 
{
    int i, j, quant, pessoas, salto;

    cin >> quant;
    for(i = 0; i < quant; i++)
    {
        cin >> pessoas >> salto;
        vector<int> v;
        
        for(j = 1; j <= pessoas; j++)
        {
            v.push_back(j);
        }
        int pos = -1;
        int vivos = pessoas;

        while(vivos > 1)
        {
            for(j = 0; j < salto; j++)
            {
                do{
                    pos++;
                    if(pos == pessoas)
                        pos = 0;
                }while(v[pos] < 0);
            }
            v[pos] = -1;
            vivos--;
        }
        for(j = 0; j < pessoas; j++)
        {
            if(v[j] > 0)
                cout << "Case " << i+1 << ": " << v[j] << endl;
        }
    }
    return 0;
}