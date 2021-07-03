#include <bits/stdc++.h>

using namespace std;

int verificaSenha(int senha){
    if(senha == 2002){
        return 0;
    }else{
        return 1;
    }
}

int main(){
    int senha;
    while(1){
        cin >> senha;
        if(verificaSenha(senha) == 0){
            cout << "Acesso Permitido" << endl;
            break;
        }else{
            cout << "Senha Invalida" << endl;
        }
    }
}
