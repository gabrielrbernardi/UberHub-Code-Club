#include <bits/stdc++.h>
using namespace std;

//ler uma frase
//retornar todas as posicoes onde a letra 'p' aparece na string

int main(){
    string str;
    vector<int> indices;
    getline(cin, str);
    cout << str << endl;
    for(int i = 0 ; i < str.size(); i++){
        if(str.at(i) == 'p'){
            indices.push_back(i);
        }
    }

    for(int i = 0; i < indices.size(); i++){
        cout << indices.at(i) << " ";
    }
    cout << endl;
}