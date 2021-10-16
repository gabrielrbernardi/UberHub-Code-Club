#include <bits/stdc++.h>

using namespace std;

int main(){
    string str;
    cin >> str;
    string vogais, consoantes;

    for(int i = 0; i < str.size(); i++){
        if(str.at(i) == 'a' || str.at(i) == 'e' || str.at(i) == 'i' || str.at(i) == 'o' || str.at(i) == 'u'){
            vogais.push_back(str.at(i));
        }else{
            consoantes.push_back(str.at(i));
        }
    }
    cout << "Vogais: " << vogais << endl;
    cout << "Consoantes: " << consoantes << endl;
}

