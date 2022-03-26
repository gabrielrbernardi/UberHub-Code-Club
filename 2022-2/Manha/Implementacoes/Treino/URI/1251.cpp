#include<bits/stdc++.h>

using namespace std;

typedef struct{
    char letra;
    int ocorrencia, representacaoAscii;
} Estrutura;

int buscaIndice(vector<Estrutura> vet, char c){

    for(int i = 0; i < vet.size(); i++){
        if(vet.at(i).letra == c){
            return i;
        }
    }
    return -1;
}

bool compare(Estrutura e1, Estrutura e2){
    if(e1.ocorrencia != e2.ocorrencia){
        return e1.ocorrencia < e2.ocorrencia;
    }
    return e1.representacaoAscii > e2.representacaoAscii;
}

int main(){
    vector<Estrutura> vetEst;
    Estrutura e;
    string str;
    int c;
    bool flag = false;
    while(getline(cin, str)){
        if(flag){
            cout << endl;
        }
        flag = true;
        vetEst.clear();
        for(int i = 0; i < str.size(); i++) {

            int indice = buscaIndice(vetEst, str[i]);

            if(indice == -1){
                e.letra = str[i];
                e.ocorrencia = 1;
                e.representacaoAscii = str[i];
                vetEst.push_back(e);
            }else{
                vetEst[indice].ocorrencia++;
            }
        }
        sort(vetEst.begin(), vetEst.end(), compare);
        for(int i = 0; i < vetEst.size(); i++) {
            cout << vetEst.at(i).representacaoAscii << " " << vetEst.at(i).ocorrencia << endl;
        }
    }
}