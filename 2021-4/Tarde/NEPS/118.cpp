#include<bits/stdc++.h>
using namespace std;

int main (){
    string str, vogais, vogais2;
    cin >> str;
    for(int i = 0; i < str.size(); i++){
        if(str.at(i) == 'a' || str.at(i) == 'e' || str.at(i) == 'i' || str.at(i) == 'o' || str.at(i) == 'u'){
            vogais.push_back(str.at(i));
        }
    }
    vogais2 = vogais;
    reverse(vogais2.begin(), vogais2.end());
    if(vogais == vogais2){
        cout << "S" << endl;
    }else{
        cout << "N" << endl;
    }
}
