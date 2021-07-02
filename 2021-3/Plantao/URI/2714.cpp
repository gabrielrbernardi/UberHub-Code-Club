#include <bits/stdc++.h>
using namespace std;

int main(){
    int qtd;
    cin >> qtd;
    for(int i = 0; i < qtd; i++){
        string str;
        cin >> str;
        string str1, num;
        str1 = str.substr(0,2);
        if(str1 == "RA"){
            string str2 = str.substr(2,str.size()-2);
            if(str2.size() < 18){
                cout << "INVALID DATA" << endl;
            }else{
                unsigned long long n1 = stoull(str2); ///funcao stoull converte string para inteiro muito grande
                cout << n1 << endl;
            }
        }else{
            cout << "INVALID DATA" << endl;
        }
    }
}
