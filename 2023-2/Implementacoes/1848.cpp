#include <bits/stdc++.h>
using namespace std;

int main(){
    int qtdFlag = 0;
    string stringValor, stringValorTemp;
    int valorDecimal = 0;
    while(1){
        stringValorTemp = "";
        getline(cin,stringValor); //pega valor na linha inteira
        if(stringValor.compare("caw caw") == 0){ //verifica condicao de parada parcial
            cout << valorDecimal << endl;
            qtdFlag += 1;
            valorDecimal = 0;
        }
        if(qtdFlag == 3){ //verifica condicao de parada geral
            return 0;
        }
        // vector<int> valorNumerico;
        for(int i = 0; i < stringValor.size(); i++){ //converte valor digitado para numerais, em string
            if (stringValor[i] == '*'){
                stringValorTemp += '1';
            }else{
                stringValorTemp += '0';
            }
        }
        bitset<32> binario(stringValorTemp); //conversao da string para valor binario
        valorDecimal += binario.to_ulong(); //converte valor binario para decimal e adiciona ao valor anterior
    }
}