#include <iostream>
#include <iomanip>
#include <cmath>
#define PI 3.14159
using namespace std;
 
int main()
{
    int raio;
    double volume;

    cin >> raio;
    
    volume = (4/3.0)*PI*pow(raio,3);
    
    cout << "VOLUME = " << fixed << setprecision(3) << volume << endl;
    
    return 0;
}