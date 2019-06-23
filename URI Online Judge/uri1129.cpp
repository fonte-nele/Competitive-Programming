#include <iostream>
using namespace std;

int main () 
{
	int n;
    while(cin >> n) 
    {
        if(n == 0) 
        	break;

        for(int j = 0; j < n; j++) 
        {
            int x, r = -1, null = 0;
            for (int i = 0; i < 5; i++)
            {
                cin >> x;
                if (x <= 127) 
                {
                    if (r >= 0) 
                    	null = 1;
                    r = i;
                }
            }
            if(null || r == -1) 
            	cout << '*' << endl;
            else if (r == 0) 
            	cout << 'A' << endl;
            else if (r == 1) 
            	cout << 'B' << endl;
            else if (r == 2) 
            	cout << 'C' << endl;
            else if (r == 3) 
            	cout << 'D' << endl;
            else if (r == 4) 
            	cout << 'E' << endl;
        }
    }
    return 0;
}