#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int v[3], quant[3], soma = 0;
    for(int i = 0; i < 3; i++)
    	cin >> v[i];
    for(int i = 0; i < 3; i++)
    	cin >> quant[i];
    for(int i = 0; i < 3; i++){
    	if(quant[i] > v[i])
    		soma += (quant[i] - v[i]);
    }
    cout << soma << endl;
    
    return 0;
}