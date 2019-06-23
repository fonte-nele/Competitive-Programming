#include <iostream>
using namespace std;

int main()
{
    double L;
    cout.precision(6);

    while(cin >> L && L != 0)
    {
        cout << fixed << (L - 3)/L << endl;
    }

    return 0;
}