#include <bits/stdc++.h>

using namespace std;

int main(){
    string str;
    cin >> str;
    string strVogais, strConsoantes;

    for(int i = 0; i < str.size(); i++){
        if(str.at(i) == 'a' || str.at(i) == 'e' || str.at(i) == 'i' || str.at(i) == 'o' || str.at(i) == 'u'){ /// se for verdadeiro, o caractere da string eh vogal
            strVogais.push_back(str.at(i));
        }else{
            strConsoantes.push_back(str.at(i));
        }
    }
    cout << "Vogais: " << strVogais << endl;
    cout << "Consoantes: " << strConsoantes << endl;
}