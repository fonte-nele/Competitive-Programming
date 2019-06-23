#include <bits/stdc++.h>
#define f(inicio, fim) for(int i = inicio; i < fim; i++)
#define fr(inicio, fim) for(int j = inicio; j < fim; j++)
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int i, quant;
    string nome, aux[26]= {".", "..", "...", ". .", ".. ..", "... ...", ". . .", ".. .. ..", "... ... ...", ". . . .",".. .. .. ..", "... ... ... ...", ". . . . .",
                            ".. .. .. .. ..", "... ... ... ... ...", ". . . . . .", ".. .. .. .. .. ..", "... ... ... ... ... ...", ". . . . . . .", ".. .. .. .. .. .. ..",
                            "... ... ... ... ... ... ...", ". . . . . . . .", ".. .. .. .. .. .. .. ..", "... ... ... ... ... ... ... ...", ". . . . . . . . .",
                            ".. .. .. .. .. .. .. .. .."};
    
    while(cin >> quant)
    {
        getline(cin, nome);

        for(i = 0; i < quant; i++)
        {
            getline(cin, nome);
            
            for(int j = 0; j < 26; j++)
            {
                if(nome == aux[j])
                {
                    cout << (char)(j + 97) << endl;
                    break;
                }
            }
        }
    }
    
    return 0;
}