#include<bits/stdc++.h>

using namespace std;

int main(){
    map<string, string> dicionario;
    dicionario.insert({"dog", "cachorro"});
    dicionario.insert({"table", "mesa"});
    dicionario.insert({"window", "janela"});

    while(1){
        int opcao;
        cin >> opcao;
        if(opcao == 1){
            string str;
            cin >> str;

            if(dicionario.find(str) != dicionario.end()){
                cout << "A traducao de " << str << " eh: " << dicionario[str] << endl;
            }else{
                cout << "Nao tem a traducao de " << str << endl;
            }
        }else if(opcao == 2){
            string str1, str2;
            cin >> str1 >> str2;
            dicionario.insert({str1, str2});
        }else if(opcao == 3){
            for(auto it: dicionario) {
                cout << it.first << " " << it.second << endl;
            }
        }else if(opcao == 4){
            string str;
            cin >> str;
            if(dicionario.find(str) != dicionario.end()){
                dicionario.erase(str);
            }else{
                cout << "nao existe " << str << " no dicionario" << endl;
            }
        }else if(opcao == 5){
            string str;
            cin >> str;
            if(dicionario.find(str) != dicionario.end()){
                string str1;
                cin >> str1;
                dicionario[str] = str1;
            }else{
                cout << "nao existe " << str << " no dicionario" << endl;
            }
        }
    }
    

}