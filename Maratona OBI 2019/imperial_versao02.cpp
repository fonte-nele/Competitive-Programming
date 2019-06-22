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

bool compare(const pair<int, int> a, const pair<int, int> b){
	return a.second > b.second;
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, sum = 1;

    cin >> n;
    vector<int> v(n);
    vector<pair<int, int>> freq(n, {0,0});
    vector<vector<int>> pos;

    pos.resize(n);
    /*f(0, n){
    	cout << freq[i].first << " second = " << freq[i].second << endl;
    }*/

    f(0, n){
    	cin >> v[i];
    	freq[i].first = i;
    	freq[v[i]-1].second++;

    	pos[v[i]-1].push_back(i);
    }

    sort(freq.begin(), freq.end(), compare);

    /*f(0, n){
    	cout << freq[i].first << " second = " << freq[i].second << endl;
    }
    cout << endl;
    f(0, n){
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
	    	if(freq[i].second + freq[j].second <= sum)
	    		break;

	    	int pos1 = freq[i].first, tam1 = freq[i].second;
	    	int pos2 = freq[j].first, tam2 = freq[j].second;
	    	vector<int> aux;
	    	int k, l, begin, last = 0, controle;

	    	for(k = 0, l = 0; k < tam1 && l < tam2; k++, l++){

    			if(aux.empty()){
	    			if(pos[pos1][k] < pos[pos2][l]){
	    				aux.push_back(pos[pos1][k]);
	    				aux.push_back(pos[pos2][l]);
	    				begin = 0;
	    				last = pos[pos2][l];
	    				controle = 0;
	    			}else{
	    				aux.push_back(pos[pos2][l]);
	    				aux.push_back(pos[pos1][k]);
	    				begin = 1;
	    				last = pos[pos1][k];
	    				controle = 1;
	    			}
	    		}else if(begin == 0){
	    			while(pos[pos1][k] < last){
	    				k++;
	    			}
	    			if(k >= tam1)
	    				break;
	    			aux.push_back(pos[pos1][k]);
	    			controle = 1;
	    			last = pos[pos1][k];
	    			while(pos[pos2][l] < last){
	    				l++;
	    			}
	    			if(l >= tam2)
	    				break;
	    			aux.push_back(pos[pos2][l]);
	    			controle = 0;
	    			last = pos[pos2][l];
	    		}else{
	    			while(pos[pos2][l] < last){
	    				l++;
	    			}
	    			if(l >= tam2)
	    				break;
    				aux.push_back(pos[pos2][l]);
    				controle = 0;
    				last = pos[pos2][l];
    				while(pos[pos1][k] < last){
	    				k++;
	    			}
	    			if(k >= tam1)
	    				break;
    				aux.push_back(pos[pos1][k]);
    				controle = 1;
    				last = pos[pos1][k];
    			}
	    	}

	    	if(controle == 0 && k < tam1){
	    		while(pos[pos1][k] < last){
	    			k++;
	    		}
	    		if(k < tam1)
	    			aux.push_back(pos[pos1][k]);
	    	}else if(controle == 1 && l < tam2){
	    		while(pos[pos2][l] < last){
	    			l++;
	    		}
	    		if(l < tam2)
	    			aux.push_back(pos[pos2][l]);
	    	}

	    	if(aux.empty() && (tam1 !=0 || tam2 != 0)){
	    		if(tam1 != 0)
	    			aux.push_back(pos[pos1][0]);
	    		else if(tam2 != 0)
	    			aux.push_back(pos[pos2][0]);
	    	}

	    	/*for(int k = 0; k < (int)aux.size(); k++){
	    		cout << aux[k] << " ";
	    	}
	    	cout << endl;*/

	    	if(sum < (int)aux.size())
	    		sum = aux.size();
    	}
    }

    cout << sum << endl;

    return 0;
}