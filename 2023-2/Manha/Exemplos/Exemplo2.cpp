#include <bits/stdc++.h>
using namespace std;

int main(){
    map<string, double> temperatura_cidade;

    for(int i = 0; i < 5; i++){ //le e insere os valores no mapa
        string cidade;
        double temperatura;
        cin >> cidade >> temperatura;
        temperatura_cidade[cidade] = temperatura;
    }

    for(auto it: temperatura_cidade) {
        cout << it.first << " " << it.second << endl;
    }
}