#include<bits/stdc++.h>
using namespace std;

int main(){
    string s, vogais;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(s.at(i) == 'a' || s.at(i) == 'e' || s.at(i) == 'i' || s.at(i) == 'o' || s.at(i) == 'u'){
            vogais.push_back(s.at(i));
        }
    }
    string vogaisCopia;
    vogaisCopia = vogais;
    reverse(vogaisCopia.begin(), vogaisCopia.end());
    if(vogal == vogaisCopia){
        cout << "S" << endl;
    }else{
        cout << "N" << endl;
    }
}