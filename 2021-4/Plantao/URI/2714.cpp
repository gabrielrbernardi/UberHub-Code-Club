#include <bits/stdc++.h>
using namespace std;

int main() {
    int qtd;
    cin >> qtd;
    for(int i = 0; i < qtd; i++){
        string str;
        string registro, numeroString;

        cin >> str;

        registro = str.substr(0, 2);
        if(registro == "RA"){
            if(str.size() - 2 == 18){
                numeroString = str.substr(2, 18);
                long long int numero = stoll(numeroString);
                cout << numero << endl;
            }else{
                cout << "INVALID DATA" << endl;
            }
        }else{
            cout << "INVALID DATA" << endl;
        }
    }
}
