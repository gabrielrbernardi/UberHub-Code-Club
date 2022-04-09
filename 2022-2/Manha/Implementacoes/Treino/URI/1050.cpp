#include<bits/stdc++.h>

using namespace std;

int main(){
    map<int, string> ddd;

    ddd.insert({61, "Brasilia"});
    ddd.insert({71, "Salvador"});
    ddd.insert({11, "Sao Paulo"});
    ddd.insert({21, "Rio de Janeiro"});
    ddd.insert({32, "Juiz de Fora"});
    ddd.insert({19, "Campinas"});
    ddd.insert({27, "Vitoria"});
    ddd.insert({31, "Belo Horizonte"});

    int busca;
    cin >> busca;

    if(ddd.find(busca) != ddd.end()){
        cout << ddd[busca] << endl;
    }else{
        cout << "DDD nao cadastrado" << endl;
    }
}