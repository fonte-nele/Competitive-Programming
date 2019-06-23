#include <iostream>
#include <vector>
using namespace std;

int main () 
{
    int i, j, quant, n, qt, qtM, m, aux;
    vector<int> arr;

    cin >> quant;
    for(j = 0; j < quant; j++)
    {
        m = qt = qtM = 0;
        cin >> n;
        arr.clear();
        for(i = 0; i < n; i++) 
        {
            cin >> aux;
            arr.push_back(aux);

            if (arr[i] >= m) 
            {
                m = arr[i];
            }
        }
        for(i = 0; i < n; i++) 
        {

            if (arr[i] == m) qt++;
            else qt = 0;

            if(qtM < qt) qtM = qt;
        }

        cout << "Caso #" << j+1 << ": " << qtM << endl;
    }
    return 0;
}