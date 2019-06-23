#include <iostream>
using namespace std;

int main () 
{
    int n;
    while(cin >> n) 
    {
        if(n == 0)
        {
        	break;
        }

        int xd, yd;
        cin >> xd >> yd;
        for(int i = 0; i < n; i++) 
        {
            int x, y;
            cin >> x >> y;
            
            if(x-xd == 0 || y-yd == 0) 
            {
                cout << "divisa" << endl;
                continue;
            }
            if(x-xd > 0 && y-yd > 0) 
            {
                cout << "NE" << endl;
                continue;
            }
            if(x-xd < 0 && y-yd < 0)
            {
                cout << "SO" << endl;
                continue;
            }
            if(x-xd > 0 && y-yd < 0)
            {
                cout << "SE" << endl;
                continue;
            }
            if(x-xd < 0 && y-yd > 0)
            {
                cout << "NO" << endl;
                continue;
            }
        }
    }
    return 0;
}