#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;
    cout << str << endl;

    for(int i = 0; i < str.size(); i++){
        str[i] = str[i] - 32; //convertendo para maiusculo
    }
    cout << str << endl;
}