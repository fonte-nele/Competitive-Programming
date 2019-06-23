#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int num, soma = 0, resto;
    
    for(int i = 0; i < 9; i++){
    	cin >> num;
    	soma += num;
    }
    //cout << soma << endl;
    resto = soma % 9;
    //cout << resto << endl;
    switch(resto)
    {
    	case 0:
    		cout << "Rudolph" << endl;
    		break;
    	case 1:
    		cout << "Dasher" << endl;
    		break;
    	case 2:
    		cout << "Dancer" << endl;
    		break;
    	case 3:
    		cout << "Prancer" << endl;
    		break;
    	case 4:
    		cout << "Vixen" << endl;
    		break;
    	case 5:
    		cout << "Comet" << endl;
    		break;
    	case 6:
    		cout << "Cupid" << endl;
    		break;
    	case 7:
    		cout << "Donner" << endl;
    		break;
    	case 8:
    		cout << "Blitzen" << endl;
    		break;
    }
    
    return 0;
}