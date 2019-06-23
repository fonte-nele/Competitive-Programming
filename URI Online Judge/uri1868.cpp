#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

void imprimir(vector< vector<bool> > &mat);

int main() 
{
    int N;

    while(cin >> N, N != 0) 
    {
        int i = N / 2,
            j = N / 2;
            
        vector< vector<bool> > mat(N, vector<bool>(N, false));

        mat[i][j] = true;
        imprimir(mat);

        for(int step = 1; step < N; step += 2) 
        {
            //direita;
            mat[i][j] = false;
            mat[i][++j] = true;
            imprimir(mat);
            
            //cima
            for(int u = 0; u < step; u++) 
            {
                mat[i][j] = false;
                mat[--i][j] = true;                
                imprimir(mat);
            }

            //esquerda
            for(int l = 0; l <= step; l++) 
            {
                mat[i][j] = false;
                mat[i][--j] = true;                
                imprimir(mat);
            }

            //baixo
            for(int d = 0; d <= step; d++) 
            {
                mat[i][j] = false;
                mat[++i][j] = true;
                imprimir(mat);
            }

            //direita
            for(int r = 0; r <= step; r++) 
            {
                mat[i][j] = false;
                mat[i][++j] = true;
                imprimir(mat);
            }
        }
    }

    return 0;
}

void imprimir(vector< vector<bool> > &mat) 
{
    for (size_t i = 0; i < mat.size(); i++) 
    {
        for (size_t j = 0; j < mat[i].size(); j++) 
        {
            cout << (mat[i][j] ? 'X' : 'O');
        }
        cout << endl;
    }
    cout << '@' << endl;
}