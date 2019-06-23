#include <iostream>
#include <iomanip>
using namespace std;
 
int main()
{
    double nota1, nota2 ,media;
    cin >> nota1 >> nota2;
    media = (nota1*3.5 + nota2*7.5)/11;

    cout << "MEDIA = " << fixed << setprecision(5) << media << endl;
    return 0;
}