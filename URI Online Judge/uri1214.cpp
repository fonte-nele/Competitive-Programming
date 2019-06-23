#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;

vector <int> v;
float media; 

int main () 
{
	int i, j, quant, num, nota, cont;
	float soma;

	cin >> quant;
    for(i = 0; i < quant; i++) 
    {
        cin >> num;
        v.clear();
        soma = 0;
        for(j = 0; j < num; j++)
        {
        	cin >> nota;
        	v.push_back(nota);
        	soma += nota;
        }
        media = soma/num;

        cont = count_if(v.begin(), v.end(), [](int f){return f > media;});


        media = (float)(cont*100)/num;
        cout << fixed << setprecision(3) << media << '%' << endl;
    }
    return 0;
}