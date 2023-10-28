#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;
    string vogais, consoantes;
    for(int i = 0; i < str.size(); i++){
        //verifica as posicoes e procura por uma vogal
        //se for vogal, coloca na string de vogais
        //senao, coloca na string de consoantes
        if(str.at(i) == 'a' || str.at(i) == 'e' || str.at(i) == 'i' || str.at(i) == 'o' || str.at(i) == 'u'){
            vogais.push_back(str.at(i));
        }else{
            consoantes.push_back(str.at(i));
        }
    }

    cout << "Vogais: " << vogais << endl;
    cout << "Consoantes: " << consoantes << endl;
}