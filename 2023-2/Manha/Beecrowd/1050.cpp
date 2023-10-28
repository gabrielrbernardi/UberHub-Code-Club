#include <bits/stdc++.h>
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

    int valor;
    cin >> valor;
    if(ddd.find(valor) != ddd.end()){
        cout << ddd[valor] << endl;
    }else{
        cout << "DDD nao cadastrado" << endl;
    }
}