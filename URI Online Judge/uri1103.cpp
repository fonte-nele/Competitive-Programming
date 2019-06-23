#include <iostream>
using namespace std;

int main () 
{
	int h1, m1;
    int h2, m2;
    while(cin >> h1 >> m1 >> h2 >> m2) 
    {        
	    if (h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0) 
	    	break;
	    if (m1 > m2)
	    {
	    	m2 += 60, h2 -= 1;
	    }
	    if (h1 > h2)
	    {
	    	h2 += 24;
	    }

	    int mr = m2 - m1;
	    int hr = h2 - h1;

	    cout << mr + hr*60 << endl;
    }
    return 0;
}