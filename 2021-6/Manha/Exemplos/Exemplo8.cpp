#include <bits/stdc++.h>
using namespace std;
/*
    xReceba e retorne o triplo de um valor inteiro
    xReceba e retorne a 20a parte de um valor
    xReceba e retorne a juncao entre duas strings, com um espaco no meio. ex: "joao" "gabriel" -> "joao gabriel"
    xRetorne o valor de pi
    xMostre na tela uma saudacao, com o seu nome
    xCalcule o dobro de 3
    xMostre na tela uma saudacao
*/
int triplo(int val){
    return 3 * val;
}

double vigesimaParte(int x){
    return x / 20.0;
}

string juntaString(string str1, string str2){
    string resultado = str1 + " " + str2;
    return resultado;
}

double retornaPi(){
    return 3.1415;
}

void saudacaoComNome(string nome){
    cout << "Bom dia, " << nome << "!" << endl;
}

void dobro3(){
    int resultado = 2 * 3;
}

void saudacaoSemNome(){
    cout << "Bom dia!" << endl;
}

int main(){
    int resultado = triplo(4);
    cout << "O triplo de 4 eh: " << resultado << endl;
    cout << "A vigesima parte do valor 16727 eh: " << vigesimaParte(16727) << endl;
    cout << "A juncao entre 'Joao' e 'Gabriel' eh: " << juntaString("Joao", "Gabriel") << endl;
    cout << "O valor aproximado de pi eh: " << retornaPi() << endl;
    saudacaoComNome("Gabriel");
    dobro3();
    saudacaoSemNome();
    
    return 0;
}

