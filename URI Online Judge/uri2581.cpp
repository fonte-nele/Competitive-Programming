#include <iostream>
#include <string>
using namespace std;

int main () 
{
    int quant;
    string nome;

    cin >> quant;
    for(int i = 0; i < quant; i++)
    {
        getline(cin, nome);
        cout << "I am Toorg!" << endl;
    }

    return 0;
}