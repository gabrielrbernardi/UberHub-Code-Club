#include <bits/stdc++.h>
using namespace std;

/*
    xLer uma string sem espacos
    xContar a quantidade de vezes que a letra 'e' aparece na string (fazer de duas formas)
    xVerificar se a string eh palindromo
    xLer outra string e anexar o conteudo na primeira string
*/

int main(){
    string str;

    cin >> str;

    int qtd1 = count(str.begin(), str.end(), 'e');

    int qtd2 = 0;
    for(int i = 0; i < str.size(); i++){
        if(str.at(i) == 'e'){
            qtd2++;
        }
    }

    cout << "qtd1: " << qtd1 << endl;
    cout << "qtd2: " << qtd2 << endl;
    //==============================================
    ///Verificando se str eh palindromo
    string copia;
    copia = str;

    reverse(copia.begin(), copia.end());
    if(copia == str){
        cout << "eh palindromo" << endl;
    }else{
        cout << "nao eh palindromo" << endl;
    }

    string str2;
    cin >> str2;

    cout << "str antes: " << str << endl;
    str.append(str2);
//    str += str2; //str = str + str2;
    cout << "str depois: " << str << endl;
}
