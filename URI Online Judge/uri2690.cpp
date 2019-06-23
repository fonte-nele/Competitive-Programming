#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string frase;
    int num, cont = 0;
    cin >> num;
    getline(cin, frase);
    while (num--)
    {
        getline(cin,frase);
        for(int i = 0; i < (int)frase.size(); i++)
        {
            if(frase[i] == 'G' || frase[i] == 'Q' || frase[i] == 'a' || frase[i] == 'k' || frase[i] == 'u')
            {
                cout << 0;
                cont ++;
            }
            else if(frase[i] == 'I' || frase[i] == 'S' || frase[i] == 'b' || frase[i] == 'l' || frase[i] == 'v')
            {
                cout << 1;
                cont ++;
            }
            else if(frase[i] == 'E' || frase[i] == 'O' || frase[i] == 'Y' || frase[i] == 'c' || frase[i] == 'm' || frase[i] == 'w')
            {
                cout << 2;
                cont ++;
            }
            else if(frase[i] == 'F' || frase[i] == 'P' || frase[i] == 'Z' || frase[i] == 'd' || frase[i] == 'n' || frase[i] == 'x')
            {
                cout << 3;
                cont ++;
            }
            else if(frase[i] == 'J' || frase[i] == 'T' || frase[i] == 'e' || frase[i] == 'o' || frase[i] == 'y')
            {
                cout << 4;
                cont ++;
            }
            else if(frase[i] == 'D' || frase[i] == 'N' || frase[i] == 'X' || frase[i] == 'f' || frase[i] == 'p' || frase[i] == 'z')
            {
                cout << 5;
                cont ++;
            }
            else if(frase[i] == 'A' || frase[i] == 'K' || frase[i] == 'U' || frase[i] == 'g' || frase[i] == 'q')
            {
                cout << 6;
                cont ++;
            }
            else if(frase[i] == 'C' || frase[i] == 'M' || frase[i] == 'W' || frase[i] == 'h' || frase[i] == 'r')
            {
                cout << 7;
                cont ++;
            }
            else if(frase[i] == 'B' || frase[i] == 'L' || frase[i] == 'V' || frase[i] == 'i' || frase[i] == 's')
            {
                cout << 8;
                cont ++;
            }
            else if(frase[i] == 'H' || frase[i] == 'R' || frase[i] == 'j' || frase[i] == 't')
            {
                cout << 9;
                cont ++;
            }

            //cont++;
            if(cont == 12)
                break;
        }
        cont = 0;
        cout << endl;
    }
    return 0;
}