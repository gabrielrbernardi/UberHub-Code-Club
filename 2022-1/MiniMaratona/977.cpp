#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    getline(cin, str);
    int qtdTriste = 0, qtdFeliz = 0;
    
    for(int i = 0; i < str.size(); i++){
        if(str.at(i) == ':'){
            if(str.at(i+1) == '-' && str.at(i+2) == ')'){
                qtdFeliz++;
                i+=2;
            }else if(str.at(i+1) == '-' && str.at(i+2) == '('){
                qtdTriste++;
                i+=2;
            }
        }
    }
    if(qtdFeliz == qtdTriste){
        cout << "neutro" << endl;
    }else if(qtdFeliz > qtdTriste){
        cout << "divertido" << endl;
    }else{
        cout << "chateado" << endl;
    }
}