#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
    int n;
    string a;
    cin >> n;
    set<string>ar;
    
    while(n--)
    {
        cin >> a;
        ar.insert(a);
    }

    cout << "Falta(m) " << 151-ar.size() << " pomekon(s)." << endl;
    ar.clear();
    return 0 ;
}