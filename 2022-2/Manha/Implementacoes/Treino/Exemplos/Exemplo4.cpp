#include<bits/stdc++.h>

using namespace std;

int main(){
    map<string, int> pessoa;

    pessoa.insert({"gabriel", 20});
    pessoa.insert(make_pair("paula", 30));
    pessoa.insert(pair<string, int>("pedro", 10));
    pessoa["maria"] = 15;

    if(pessoa.find("gabriel") != pessoa.end()){ //se for diferente do final, a chave existe
        cout << pessoa["gabriel"] << endl;
    }else{ //caso contrario, a chave nao esta presente no mapa
        cout << "Chave inexistente" << endl;
    }
    
    for(auto it: pessoa) {
        cout << it.first << " " << it.second << endl;
    }
}

