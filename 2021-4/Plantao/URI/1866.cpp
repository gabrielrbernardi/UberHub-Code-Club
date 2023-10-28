#include <bits/stdc++.h>
using namespace std;

int main() {
    int qtd;
    cin >> qtd;
    for(int i = 0; i < qtd; i++){
        string str;
        cin >> str;

        string texto;
        for(int i = 0; i < str.size(); i++){
            if(str.at(i) >= 'a' && str.at(i) <= 'z'){
                texto.push_back(str.at(i));
            }
        }
        reverse(texto.begin(), texto.end());
        cout << texto << endl;
    }
}
