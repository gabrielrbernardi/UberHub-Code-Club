#include <bits/stdc++.h>

using namespace std;

int main(){
    string str;
    cin >> str;
    vector<char> vogais, consoantes;
    for(int i = 0; i < str.size(); i++){
        if(str.at(i) == 'a' || str.at(i) == 'e' || str.at(i) == 'i' || str.at(i) == 'o' || str.at(i) == 'u'){
            vogais.push_back(str.at(i));
        }else{
            consoantes.push_back(str.at(i));
        }
    }
    cout << "Vogais: ";
    for(int i = 0; i < vogais.size(); i++){
        cout << vogais.at(i);
    }
    cout << endl;
    cout << "Consoantes: ";
    for(int i = 0; i < consoantes.size(); i++){
        cout << consoantes.at(i);
    }
    cout << endl;
}
