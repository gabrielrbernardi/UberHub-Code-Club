#include <bits/stdc++.h>
using namespace std;
//Faca a leitura de n nomes e mostrar esses nomes em ordem crescente
// gabriel carlos silvio amanda debora jose

void mostraVetor(vector<string> &vet){
    for(int i = 0; i < vet.size(); i++){
        cout << vet.at(i) << endl;
    }
}

int main(){
    int n;
    cin >> n;
    vector<string> vetStr;
    string str;
    for(int i = 0; i < n; i++){
        cin >> str;
        vetStr.push_back(str);
    }
    cout << "Os valores lidos foram: " << endl;
    mostraVetor(vetStr);
    sort(vetStr.begin(), vetStr.end());
    cout << endl << "Os valores em ordem alfabetica sao:" << endl;
    mostraVetor(vetStr);
    sort(vetStr.begin(), vetStr.end(), greater<>());
    cout << endl << "Os valores em ordem alfabetica inversa sao:" << endl;
    mostraVetor(vetStr);
}