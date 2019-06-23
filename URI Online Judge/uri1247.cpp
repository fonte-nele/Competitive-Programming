#include <bits/stdc++.h>
using namespace std;

int d, vf, vg;
long double acs, atn;

int main () 
{
    while(cin >> d >> vf >> vg) 
	{
        acs = acos((long double) vf/vg);
        atn = atan((long double) d/12);
        cout << ((acs >= atn) ? "S" : "N") << endl;
    }
    return 0;
}