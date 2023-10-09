#include <bits/stdc++.h>
using namespace std;

typedef struct {
    string palavra;
    int tamanho, ordemEntrada;
} Palavra;

void limpa(){
    setbuf(stdin, NULL);
}

vector<string> quebraString(string linha){
    string tempString = "";
    vector<string> linhaQuebrada;

    for(int i = 0; i < linha.size()-1; i++){
        if ((linha[i] == ' ')){
            linhaQuebrada.push_back(tempString);
            tempString = "";
            i++;
        }
        tempString += linha[i];
    }
    tempString += linha[linha.size() - 1];
    linhaQuebrada.push_back(tempString);
    tempString = "";
    return linhaQuebrada;
}

int comparaStructs(Palavra p1, Palavra p2){
    if(p1.tamanho != p2.tamanho){
        return p1.tamanho > p2.tamanho;
    }
    
    if(p1.ordemEntrada != p2.ordemEntrada){
        return p1.ordemEntrada < p2.ordemEntrada;
    }

    return p1.palavra < p2.palavra;
}

int main(){
    int qtd;
    cin >> qtd;
    for(int x = 0; x < qtd; x++){
        string linha;
        limpa();
        getline(cin, linha);

        //split string
        string tempString;
        vector<string> listaTempString;
        vector<Palavra> palavras;

        listaTempString = quebraString(linha);
        for (int i = 0; i < listaTempString.size(); i++){
            Palavra tempPalavra;
            tempPalavra.palavra = listaTempString[i];
            tempPalavra.tamanho = listaTempString[i].size();
            tempPalavra.ordemEntrada = i;
            palavras.push_back(tempPalavra);
        }

        sort(palavras.begin(), palavras.end(), comparaStructs);

        for (auto it: palavras){
            cout << it.palavra << " ";
        }
        cout << endl;
    }
}