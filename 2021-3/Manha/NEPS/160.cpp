#include <bits/stdc++.h>
using namespace std;

int main(){
    string res, gabarito;
    int qtdElem, qtdAcertos = 0;
    cin >> qtdElem;
    cin >> res;
    cin >> gabarito;
    for(int i = 0; i < res.size(); i++){
        if(res.at(i) == gabarito.at(i)){
            qtdAcertos++;
        }
    }
    cout << qtdAcertos << endl;
}
