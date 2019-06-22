#include <bits/stdc++.h>
using namespace std;

int main(){
  string senha;
  int tam;

  while(getline(cin, senha)){
    string s;
    int cnt, cnt2, cnt3;
    cnt = cnt2 = cnt3 = 0;
    tam = senha.size();
    for(int i = 0; i < tam; i++){
      if(isdigit(senha[i]) || islower(senha[i]) || isupper(senha[i]))
        s.push_back(senha[i]);
      if(islower(senha[i])) 
        cnt++;
      if(isupper(senha[i]))
        cnt2++;
      if(isdigit(senha[i])) 
        cnt3++; 
    }
    if(tam == s.size() && tam >= 6 && tam <= 32 && cnt > 0 && cnt2 > 0 && cnt3 > 0)
      cout << "Senha valida." << endl;
    else
      cout << "Senha invalida." << endl;
  }

  return 0;
}
