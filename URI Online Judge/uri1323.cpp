#include <iostream>
using namespace std;

int main () 
{
    int i, n, cont;
    while(cin >> n && n != 0) 
    {
    	cont = 1;
        for(i = 2; i <= n; i++)
        {
        	cont += (i*i);
        }
        cout << cont << endl;
    }
    return 0;
}