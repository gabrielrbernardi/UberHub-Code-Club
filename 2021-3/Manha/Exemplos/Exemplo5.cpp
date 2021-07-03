#include <bits/stdc++.h>
using namespace std;
/*
    xMostrar o triplo de um valor inteiro
    xMostrar a quarta parte de um valor real
    xTransformar os caracteres minusculos de uma string para maiusculos
        bom dia -> BOM DIA
    Mostrar a mensagem "Volte sempre!"
*/

int triplo(int num){
    return 3*num;
}

double umQuarto(double y){
    return y/4.0;
}

string transforma(string str){
    for(int i = 0; i < str.size(); i++){
        if(str.at(i) >= 'a' && str.at(i) <= 'z'){
            str[i] -= 32;  ///Transformando minusculo para maiusculo
        }
    }
    return str;
}

void mostraMensagem(){
    cout << "Volte sempre!" << endl;
}

int main(){
    int x;
    cin >> x;
    cout << "O triplo de " << x << " eh: " << triplo(x) << endl;
    double y;
    cin >> y;
    cout << "A quarta parte de " << y << " eh: " << umQuarto(y) << endl;
    setbuf(stdin, NULL);  ///Limpar o buffer
    string str;
    getline(cin, str);
    cout << "A string " << str << " formatada ficou: " << transforma(str) << endl;

    mostraMensagem();
}
