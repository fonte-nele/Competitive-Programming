#include <bits/stdc++.h>

using namespace std;

int main()
{
    string lineOne, lineTwo;

    cin >> lineOne >> lineTwo;

    string digitOne = "", sumOne = "", sumTwo = "";
    int counter = 0;

    for( size_t i = 0; i < lineOne.size(); i++ ) {
        if( isdigit( lineOne[i] ) || lineOne[i] == '.' ) {
            if( counter++ < 11 ) {
                digitOne += lineOne[i];
            }
            else {
                sumOne += lineOne[i];
            }
        }
    }

    for( size_t i = 0; i < lineTwo.size(); i++ ) {
        if( isdigit( lineTwo[i] ) || lineTwo[i] == '.' ) {
            sumTwo += lineTwo[i];
        }
    }

    
    double one = stod( sumOne );
    double two = stod( sumTwo );
    
    cout << "cpf " << digitOne << "\n";
    cout << fixed << setprecision( 2 ) << trunc( one * 100 ) / 100 + trunc( two * 100 ) / 100 << "\n";

    return 0;
}