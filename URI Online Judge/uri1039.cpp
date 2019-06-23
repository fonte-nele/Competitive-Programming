#include <iostream>
using namespace std;

int main () 
{
    int r1, x1, y1, r2, x2, y2;
    while(cin >> r1 >> x1 >> y1 >> r2 >> x2 >> y2) 
    {
        int dist = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
        if(dist <= (r1-r2)*(r1-r2) && r1 >= r2)
        {
        	cout << "RICO" << endl;
        }
        else
        { 
        	cout << "MORTO" << endl;
        }
    }
    return 0;
}