#include <bits/stdc++.h>
using namespace std;

int main(){
    int opcao;
    string str = "";
    cout << " 1 - push_back" << endl
         << " 2 - append" << endl
         << " 3 - append (nome)" << endl
         << " 4 - erase" << endl
         << " 5 - reverse" << endl
         << "Escolha: ";
    cin >> opcao;
    if(opcao == 1){
        char letra;
        while(1){
            cin >> letra;
            if(letra == '0'){
                cout << endl << "STRING RESULTANTE" << endl;
                cout << str << endl;
                break;
            }
            cout << "Adicionando \'" << letra << "\' ao final da string" << endl;
            str.push_back(letra);
        }
    }else if(opcao == 2){
        string strAux;
        while(1){
            cin >> strAux;
            if(strAux == "encerra"){
                cout << endl << "STRING RESULTANTE" << endl;
                cout << str << endl;
                break;
            }
            cout << "Adicionando \"" << strAux << "\" ao final da string" << endl;
            str.append(strAux);
        }
    }else if(opcao == 3){
        string nome;
        cin >> nome;
        str.append(nome);
        str.append(", bom dia");
        cout << str << endl;
    }else if(opcao == 4){
        int inicio, qtdChar;
        cin >> inicio >> qtdChar;
        cin >> str;
        cout << str << endl;
        str.erase(inicio, qtdChar);
        cout << str << endl;
    }else if(opcao == 5){
        cin >> str;
        cout << str << endl;
        reverse(str.begin(), str.end());
        cout << str << endl;
    }
}
