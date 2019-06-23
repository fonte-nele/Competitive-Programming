#include <iostream>
#include <string>
using namespace std;

typedef struct 
{
	int gol;
	string t;
}times;

int main() 
{
    int i, j, k, quant, gols;
    times aux, time[3];
    char time1, time2;

    cin >> quant;
	for(k = 0; k < quant; k++)
	{
		for(j = 0; j < 3; j++)
		{
			time[j].gol = 0;
		}
		time[0].t = "red", time[1].t = "green", time[2].t = "blue";
		cin >> gols;

		for(j = 0; j < gols; j++)
		{
			cin >> time1 >> time2;

			if(time1 == 'G')
			{
				if(time2 == 'B')
					time[1].gol += 2;
				else if(time2 == 'R')
					time[1].gol += 1;
			}
			else if(time1 == 'B')
			{
				if(time2 == 'R')
					time[2].gol += 2;
				else if(time2 == 'G')
					time[2].gol += 1;
			}
			else if(time1 == 'R')
			{
				if(time2 == 'G')
					time[0].gol += 2;
				else if(time2 == 'B')
					time[0].gol += 1;
			}
		}

		//Ordenação Insertion
	    for(i = 1; i < 3 ;i++)
		{
			aux = time[i];
			j = i-1;
			
			while(j>=0 && aux.gol > time[j].gol)
			{
				time[j+1] = time[j];
				j--;
			}
			time[j+1] = aux;
		}
		if(time[0].gol == time[1].gol && time[0].gol == time[2].gol)
		{
			cout << "trempate" << endl;
		}
		else if(time[0].gol > time[1].gol)
		{
			cout << time[0].t << endl;
		}
		else if(time[0].gol == time[1].gol)
		{
			cout << "empate" << endl;
		}
	}

    return 0;
}