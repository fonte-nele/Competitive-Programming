#include <iostream>
using namespace std;

int main (int argc, const char * argv[])
{
    int  i, j, k, n, min, cont = 1;

    while(cin >> n && n != 0)
    {
        string input_word;
        char pal[n][n];
        int parts[n];

        cin >> input_word;
        
        // pre-computa palindromes
        for (i = 0; i < n; i++)
            pal[i][i] = 1;
        for (i = 0; i < n - 1; i++)
            pal[i][i+1] = (input_word[i] == input_word[i+1]);
        
        for (k = 2; k < n+1; k++) 
        {
            for (i = 0; i < n-k; i++) 
            {
                j = i + k;
                pal[i][j] = pal[i+1][j-1] & (input_word[i]==input_word[j]);
            }
        }
      
        // agora resolve
        for (i = 0; i < n; i++) 
        {
            if (pal[0][i]) 
            {
                parts[i] = 1;
                continue;
            }
            min = 0;
            for (j = 0; j < i; j++) 
            {
                if (pal[j+1][i] && (!min || parts[j] < min))
                    min = parts[j];
                parts[i] = min + 1;
            }
        }
        cout << "Teste " << cont << endl;
        cout << parts[n-1] << endl << endl;
        cont ++;
    }
    return 0;
}