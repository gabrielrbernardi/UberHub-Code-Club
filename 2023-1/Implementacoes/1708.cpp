#include <bits/stdc++.h>
using namespace std;

int main(){
    int qtd;
    //Criacao do map para inserir as palavras que serao traduzidas
    map<string, string> dicionario; //Formato portugues: ingles
    string str1, str2, fraseATraduzir;
    string tempString;
    vector<string> stringsQuebradas;
    
    //quantidade de iteracoes
    cin >> qtd;

    //leitura dos valores e insercao no dicionario
    for(int i = 0; i < qtd; i++){
        cin >> str1 >> str2;
        dicionario[str1] = str2;
    }
    
    //leitura da frase a ser traduzida
    cin >> fraseATraduzir;

    //separando a frase a ser traduzida, de acordo com o separador definido
    for (int i = 0; i < fraseATraduzir.size(); i++){
        //se caractere atual for o separador, a string acabou e adiciona-a no vector
        if (fraseATraduzir[i] == '_'){
            stringsQuebradas.push_back(tempString);
            //limpeza da string, para poder colocar mais valores
            tempString = "";
        }else{
            //senao, insere os caracteres dentro de uma string temporaria
            tempString += fraseATraduzir[i];
        }
    }
    
    stringsQuebradas.push_back(tempString);

    for(int i = 0; i < stringsQuebradas.size(); i++){
        if(i == stringsQuebradas.size() - 1){
            cout << dicionario[stringsQuebradas.at(i)] << endl;
        }else{
            cout << dicionario[stringsQuebradas.at(i)] << " ";
        }
    }
}