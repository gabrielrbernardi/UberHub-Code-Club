#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    string respostaCandidato, gabarito;
    cin >> respostaCandidato;
    cin >> gabarito;

    int qtdAcertos = 0;
    for(int i = 0; i < n; i++){
        if(respostaCandidato.at(i) == gabarito.at(i)){
            qtdAcertos++;
        }
    }
    cout << qtdAcertos << endl;
}