#include <iostream>
using namespace std;

int mdc (int a, int b) 
{
    if (a % b == 0) 
        return b; 
    else 
        return mdc(b,a%b);
}

int main () 
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) 
    {
        int n1, n2;
        cin >> n1 >> n2;
        cout << mdc(n1, n2) << endl;
    }
    return 0;
}