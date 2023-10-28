#include <bits/stdc++.h>
using namespace std;
 
int main(){
    string telefone;
    cin >> telefone;

    for(int i = 0; i < telefone.size(); i++){
        if(telefone.at(i) >= 'A' && telefone.at(i) <= 'Z'){ ///eh caractere maiusculo
            if(telefone.at(i) >= 'A' && telefone.at(i) <= 'C'){
                cout << "2";
            }else if(telefone.at(i) >= 'D' && telefone.at(i) <= 'F'){
                cout << "3";
            }else if(telefone.at(i) >= 'G' && telefone.at(i) <= 'I'){
                cout << "4";
            }else if(telefone.at(i) >= 'J' && telefone.at(i) <= 'L'){
                cout << "5";
            }else if(telefone.at(i) >= 'M' && telefone.at(i) <= 'O'){
                cout << "6";
            }else if(telefone.at(i) >= 'P' && telefone.at(i) <= 'S'){
                cout << "7";
            }else if(telefone.at(i) >= 'T' && telefone.at(i) <= 'V'){
                cout << "8";
            }else if(telefone.at(i) >= 'W' && telefone.at(i) <= 'Z'){
                cout << "9";
            }
        }else{
            cout << telefone.at(i);
        }
    }
    cout << endl;
}