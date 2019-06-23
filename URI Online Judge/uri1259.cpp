#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector <int> par;
vector <int> impar;

int main () 
{
	int i, quant, num;

	cin >> quant;
    for(i = 0; i < quant; i++) 
    {
        cin >> num;

        if(num % 2 == 0)
        	par.push_back(num);
        else
        	impar.push_back(num);
    }
    sort(par.begin(), par.end());
    sort(impar.begin(), impar.end());

    for(i = 0; i < par.size(); i++)
    {
    	cout << par[i] << endl;
    }

    for(i = impar.size()-1; i >= 0; i--)
    {
    	cout << impar[i] << endl;
    }
    par.clear();
    impar.clear();
    return 0;
}