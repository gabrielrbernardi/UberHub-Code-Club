#include<bits/stdc++.h>

using namespace std;

void imprimeVetor(vector<string> vet){
    cout << endl << endl;
    for(int i = 0; i < vet.size(); i++) {
        cout << vet.at(i) << endl;
    }
}

vector<string> quebraString(vector<string> vet, string str){
    string str1;
    
    int pos;
    while((pos = str.find(" ")) != string::npos){
        str1 = str.substr(0, pos);
        vet.push_back(str1);
        str.erase(0, pos+1);
    }
    cout << "alou" << endl;
    imprimeVetor(vet);
    return vet;
}

int main(){
    int qtdInstancias;
    cin >> qtdInstancias;
    for(int x = 0; x < qtdInstancias; x++){
        int qtdPalavras, qtdLinhasMusica;
        cin >> qtdPalavras >> qtdLinhasMusica;
        map<string, string> dicionario;
        dicionario.insert({"o", "o"});
        string portugues, japones;
        for(int i = 0; i < qtdPalavras; i++){
            getline(cin, japones);
            getline(cin, portugues);
            dicionario.insert({japones, portugues});
        }
        string fraseTraducao;
        vector<string> palavrasTraducao;
        for(int i = 0; i < qtdLinhasMusica; i++) {
            palavrasTraducao.clear();
            getline(cin, fraseTraducao);
            palavrasTraducao = quebraString(palavrasTraducao, fraseTraducao);
            imprimeVetor(palavrasTraducao);
            for(int j = 0; j < palavrasTraducao.size(); j++) {
                cout << dicionario[palavrasTraducao.at(i)] << " ";
            }
        }
    }
}