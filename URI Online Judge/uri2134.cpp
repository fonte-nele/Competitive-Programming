#include <bits/stdc++.h>
using namespace std;

typedef struct aluno
{
    string nome;
    int num;
}Aluno;


bool EhCoord(const Aluno& a1, const Aluno& a2)
{
    if(a1.num != a2.num)
        return a1.num < a2.num;
    else
        return a1.nome > a2.nome;
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int cont = 1, quant;

    while(cin >> quant)
    {
        vector<Aluno> v(quant);


        for (int i = 0; i < quant; i++)
        {
            cin >> v[i].nome >> v[i].num;
        }
        sort(v.begin(), v.end(), EhCoord);
        /*for (int i = 0; i < quant; i++)
        {
            cout <<  v[i].nome << v[i].num << endl;
        }*/
        cout << "Instancia " << cont << endl;
        cout << v[0].nome << endl << endl;
        cont++;
    }
    return 0;
}