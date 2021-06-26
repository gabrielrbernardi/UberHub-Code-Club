#include <bits/stdc++.h>
using namespace std;

int main(){
    string str, gabarito;
    int qtdElem, qtdAcerto = 0;
    cin >> qtdElem;
    cin >> str;
    cin >> gabarito;
    for(int i = 0; i < str.size(); i++){
        if(str.at(i) == gabarito.at(i)){
            qtdAcerto++;
        }
    }
    cout << qtdAcerto << endl;
}
