/*input
12
3
2
5
2
10
4
4
7
12
2
8
10
*/

// A - Imperial 
#include <bits/stdc++.h>
using namespace std;

#define f(inicio, fim) for(int i = inicio; i < fim; i++)
#define fr(inicio, fim) for(int j = inicio; j < fim; j++)
#define all(x) x.begin (), x.end ()
#define sz(x) (int) x.size ()
#define pb push_back
#define mk make_pair
#define fi first
#define se second
#define eps 1e-9
#define mem(x, val) memset ((x), (val), sizeof (x))
#define LSONE(s) ((s)&(-s))
#define INF 0x3f3f3f3f
#define pi 3.1415926535897
#define MAX 305
typedef long long int ll;
typedef unsigned long long int ull;
typedef string st;
typedef vector <string> vs;
typedef pair <int, int> ii;
typedef pair <double, ii > iii;
typedef vector <int> vi;
typedef vector <ii> vii;
typedef map <int, int> mii;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, sum = 1;

    cin >> n;
    vector<int> v(n);
    vector<vector<int>> pos;

    pos.resize(n);

    f(0, n){
    	cin >> v[i];

    	pos[v[i]-1].push_back(i);
    }

    /*f(0, n){
    	int tam = pos[i].size();
    	cout << i << " = ";
    	fr(0, tam){
    		cout << pos[i][j] << " ";
    	}
    	cout << endl;
    }
    cout << endl;*/
    
    
    f(0, n){
    	fr(i+1, n){
    		int tam1 = pos[i].size();
    		int tam2 = pos[j].size();
    		vector<int> aux;
    		int k, l, begin, last = 0, controle;

    		/*cout << "Begin i = " << i << " j = " << j << endl;
    		for(int k = 0; k < tam1; k++){
    			cout << pos[i][k] << " ";
    		}
    		cout << endl;
    		for(int k = 0; k < tam2; k++){
    			cout << pos[j][k] << " ";
    		}
    		cout << endl;*/
	    	for(k = 0, l = 0; k < tam1 && l < tam2; k++, l++){

	    		if(aux.empty()){
	    			if(pos[i][k] < pos[j][l]){
	    				aux.push_back(pos[i][k]);
	    				aux.push_back(pos[j][l]);
	    				begin = 0;
	    				last = pos[j][l];
	    				controle = 0;
	    			}else{
	    				aux.push_back(pos[j][l]);
	    				aux.push_back(pos[i][k]);
	    				begin = 1;
	    				last = pos[i][k];
	    				controle = 1;
	    			}
	    		}else if(begin == 0){
	    			while(pos[i][k] < last){
	    				k++;
	    			}
	    			if(k >= tam1)
	    				break;
	    			aux.push_back(pos[i][k]);
	    			controle = 1;
	    			last = pos[i][k];
	    			while(pos[j][l] < last){
	    				l++;
	    			}
	    			if(l >= tam2)
	    				break;
	    			aux.push_back(pos[j][l]);
	    			controle = 0;
	    			last = pos[j][l];
	    		}else{
	    			while(pos[j][l] < last){
	    				l++;
	    			}
	    			if(l >= tam2)
	    				break;
    				aux.push_back(pos[j][l]);
    				controle = 0;
    				last = pos[j][l];
    				while(pos[i][k] < last){
	    				k++;
	    			}
	    			if(k >= tam1)
	    				break;
    				aux.push_back(pos[i][k]);
    				controle = 1;
    				last = pos[i][k];
    			}
	    	}
	    	if(controle == 0 && k < tam1){
	    		while(pos[i][k] < last){
	    			k++;
	    		}
	    		if(k < tam1)
	    			aux.push_back(pos[i][k]);
	    	}else if(controle == 1 && l < tam2){
	    		while(pos[j][l] < last){
	    			l++;
	    		}
	    		if(l < tam2)
	    			aux.push_back(pos[j][l]);
	    	}

	    	if(aux.empty() && (tam1 !=0 || tam2 != 0)){
	    		if(tam1 != 0)
	    			aux.push_back(pos[i][0]);
	    		else if(tam2 != 0)
	    			aux.push_back(pos[j][0]);
	    	}

	    	/*for(int k = 0; k < (int)aux.size(); k++){
	    		cout << aux[k] << " ";
	    	}
	    	cout << endl;*/
	    	
		    if(sum < (int)aux.size())
		    	sum = (int)aux.size();
    	}
    }
    cout << sum << endl;

    return 0;
}