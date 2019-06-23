#include <bits/stdc++.h>
using namespace std;

int main (int argc, const char * argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int pos;
    bool flag;
    string frase, frase1, comp = "cobol";
    vector<string> aux(5);

    while(cin >> frase)
    {
        int j = 0;
        pos = 0;
        for(int i = 0; i < (int)frase.size(); i++)
        {
            if(frase[i] == '-')
            {
                aux[j] = frase.substr(pos, i-pos);
                pos = i+1;
                j++;
            }
        }
        aux[j] = frase.substr(pos, (int)frase.size()-pos);
        
        j = 0;
        flag = true;
        for(int i = 0; i < 5 ; i++)
        {
            char first = tolower(aux[i][0]);
            char last = tolower(aux[i][aux[i].length() - 1]);
            if (comp[i] != first && comp[i] != last) 
            {
                flag = false;
                break;
            }
        }
        if(flag)
            cout << "GRACE HOPPER" << endl;
        else
            cout << "BUG" << endl;
        
    }

    return 0;
}
