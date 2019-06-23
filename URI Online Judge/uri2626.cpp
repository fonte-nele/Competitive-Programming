#include <bits/stdc++.h>
using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string dodo, leo , pes;
    while(cin >> dodo >> leo >> pes)
    {
        if(dodo == "papel")
        {
            if(leo == "papel")
            {
                if(pes == "papel")
                    cout << "Putz vei, o Leo ta demorando muito pra jogar..." << endl;
                else if(pes == "pedra")
                    cout << "Putz vei, o Leo ta demorando muito pra jogar..." << endl;
                else if(pes == "tesoura")
                    cout << "Urano perdeu algo muito precioso..." << endl;
            }
            else if(leo == "pedra")
            {
                if(pes == "papel")
                    cout << "Putz vei, o Leo ta demorando muito pra jogar..." << endl;
                else if(pes == "pedra")
                    cout << "Os atributos dos monstros vao ser inteligencia, sabedoria..." << endl;
                else if(pes == "tesoura")
                    cout << "Putz vei, o Leo ta demorando muito pra jogar..." << endl;
            }
            else if(leo == "tesoura")
            {
                if(pes == "papel")
                    cout << "Iron Maiden's gonna get you, no matter how far!" << endl;
                else if(pes == "pedra")
                    cout << "Putz vei, o Leo ta demorando muito pra jogar..." << endl;
                else if(pes == "tesoura")
                    cout << "Putz vei, o Leo ta demorando muito pra jogar..." << endl;
            }
        }
        else if(dodo == "tesoura")
        {
            if(leo == "papel")
            {
                if(pes == "papel")
                    cout << "Os atributos dos monstros vao ser inteligencia, sabedoria..." << endl;
                else if(pes == "tesoura")
                    cout << "Putz vei, o Leo ta demorando muito pra jogar..." << endl;
                else if(pes == "pedra")
                    cout << "Putz vei, o Leo ta demorando muito pra jogar..." << endl;
            }
            else if(leo == "tesoura")
            {
                if(pes == "papel")
                    cout << "Putz vei, o Leo ta demorando muito pra jogar..." << endl;
                else if(pes == "tesoura")
                    cout << "Putz vei, o Leo ta demorando muito pra jogar..." << endl;
                else if(pes == "pedra")
                    cout << "Urano perdeu algo muito precioso..." << endl;
            }
            else if(leo == "pedra")
            {
                if(pes == "papel")
                    cout << "Putz vei, o Leo ta demorando muito pra jogar..." << endl;
                else if(pes == "tesoura")
                    cout << "Iron Maiden's gonna get you, no matter how far!" << endl;
                else if(pes == "pedra")
                    cout << "Putz vei, o Leo ta demorando muito pra jogar..." << endl;
            }
        }
        else if(dodo == "pedra")
        {
            if(leo == "papel")
            {
                if(pes == "papel")
                    cout << "Putz vei, o Leo ta demorando muito pra jogar..." << endl;
                else if(pes == "pedra")
                    cout << "Iron Maiden's gonna get you, no matter how far!" << endl;
                else if(pes == "tesoura")
                    cout << "Putz vei, o Leo ta demorando muito pra jogar..." << endl;
            }
            else if(leo == "pedra")
            {
                if(pes == "papel")
                    cout << "Urano perdeu algo muito precioso..." << endl;
                else if(pes == "pedra")
                    cout << "Putz vei, o Leo ta demorando muito pra jogar..." << endl;
                else if(pes == "tesoura")
                    cout << "Putz vei, o Leo ta demorando muito pra jogar..." << endl;
            }
            else if(leo == "tesoura")
            {
                if(pes == "papel")
                    cout << "Putz vei, o Leo ta demorando muito pra jogar..." << endl;
                else if(pes == "tesoura")
                    cout << "Os atributos dos monstros vao ser inteligencia, sabedoria..." << endl;
                else if(pes == "pedra")
                    cout << "Putz vei, o Leo ta demorando muito pra jogar..." << endl;
            }
        }
    }

    return 0;
}