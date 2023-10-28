#include <bits/stdc++.h>
using namespace std;
/*
    xCalcular o triplo de um valor inteiro
    xCalcule a terca parte de um valor real (double)
    xVerificar se a palavra digitada é "uberhub"
        Se for igual, mostre: "eh igual"
        Se for diferente, mostre: "nao eh igual"
    Mostre a mensagem "Boa tarde!"
*/

int triplo(int num){
    return 3*num;
}

double terca(double y){
    return y/3.0;
}

string verificaPalavra(string str){
    if(str == "uberhub"){
        return "igual";
    }else{
        return "diferente";
    }
}

void imprimeMensagem(string str){
    cout << str << endl;
}

int main(){
    int x;
    cin >> x;
    cout << "O triplo de " << x << " eh " << triplo(x) << endl;
    double y;
    cin >> y;
    cout << "A terca parte de " << y << " eh " << terca(y) << endl;
    string str;
    cin >> str;
    if(verificaPalavra(str) == "igual"){
        cout << "eh igual" << endl;
    }else{
        cout << "nao eh igual" << endl;
    }

    imprimeMensagem("Boa tarde!");
}
