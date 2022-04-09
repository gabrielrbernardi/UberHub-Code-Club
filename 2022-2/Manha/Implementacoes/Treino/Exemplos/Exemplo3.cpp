#include<bits/stdc++.h>

using namespace std;

int main(){
    map<string, int> pessoa; //variavel pessoa do tipo map

    pessoa.insert({"gabriel", 20}); //insere um pessoa chamado 'gabriel' e idade 20
    pessoa.insert(make_pair("paula", 30)); //insere uma pessoa chamada 'paula' e idade 30
    pessoa.insert(pair<string, int>("pedro", 10)); //insere um pessoa chamado 'pedro' e idade 10
    pessoa["maria"] = 15; //insere uma pessoa chamada 'maria' e idade 15
}