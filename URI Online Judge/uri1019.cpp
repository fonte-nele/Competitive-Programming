#include <iostream> 
using namespace std;
 
int main() 
{
    int segundos, cont1=0, cont2=0;
    
    cin >> segundos;
    
    while(segundos >= 60)
    {
        if(segundos >= 3600)
        {
            segundos -= 3600;
            cont1++;
        }
        else
        {
            segundos -= 60;
            cont2++;
        }
    }
    cout << cont1 << ":" << cont2 << ":" << segundos << endl;
    return 0;
}