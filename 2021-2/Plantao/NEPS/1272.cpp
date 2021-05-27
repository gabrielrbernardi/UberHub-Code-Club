#include <bits/stdc++.h>

using namespace std;

int main(){
    int qtdElem, tamStr, qtdEspacos = 0;
    char str[1000];
    cin >> qtdElem;
    setbuf(stdin, NULL);
    scanf("%[^\n]", str);

    tamStr = strlen(str);
    ///voce tem alguma folha de papel ai?
    for(int i = 0; i < tamStr; i++){
        if(str[i] == ' '){
            qtdEspacos++;
        }
    }
    tamStr -= qtdEspacos;
    if(qtdElem < tamStr){
        cout << "Mensagem ignorada" << endl;
    }else{
        cout << "Mensagem lida" << endl;
    }
}
