#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    getline(cin, str);
    for(int i = 0; i < str.size(); i++){
        if(str.at(i) < 'A' || str.at(i) > 'Z' && str.at(i) < 'a' || str.at(i) > 'z'){
            cout << "ERRO" << endl;
            return 0;
        }
    }
}