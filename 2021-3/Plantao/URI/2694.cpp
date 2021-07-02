#include <bits/stdc++.h>

using namespace std;

int main(){
    int qtd;
    cin >> qtd;
    for(int i = 0; i < qtd; i++){
        string str;
        cin >> str;
        string num1, num2, num3;
        num1 = str.substr(2,2);
        num2 = str.substr(5,3);
        num3 = str.substr(11,2);
        int n1 = stoi(num1);
        int n2 = stoi(num2);
        int n3 = stoi(num3);
        cout << n1+n2+n3 << endl;
    }
}
