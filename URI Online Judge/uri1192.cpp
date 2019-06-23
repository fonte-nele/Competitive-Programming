#include <iostream>
#include <stdio.h>
using namespace std;

int main () 
{
    int i, n;
    char chr;

    cin >> n;
    
    for(i = 0; i < n; i++) 
    {
        int a, b;
        //scanf("%d%c%d", &a, &chr, &b);
        cin >> a >> chr >> b;
        if(a == b) 
        {
            cout << a*b << endl;
            continue;
        }
        if(chr > 95) 
        {
            cout << a+b << endl;
            continue;
        } 
        else
        {
            cout << b-a << endl;
        }
    }
    return 0;
}