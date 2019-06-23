#include <iostream>
using namespace std;

int main () 
{
    int a, b, c, ans;

    while(true) 
    {
        cin >> a >> b >> c;
        
        if(!a and !b and !c) 
        	break;
        
        for(ans = 0; ans*ans*ans <= a*b*c; ans++);
       	cout << ans-1 << endl;
    }
  
    return 0;
}