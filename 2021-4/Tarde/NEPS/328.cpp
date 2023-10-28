#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vet;
    int aux, qtdElem;
    cin >> qtdElem;
    for(int i = 0; i < qtdElem; i++){
        cin >> aux;
        vet.push_back(aux);
    }
    int soma = 0;
    for(int i = 0; i < vet.size(); i++){
        soma = soma + vet.at(i);
    }
    double media = soma / (double) vet.size();
    printf("%.2lf\n", media);

//    cout << fixed << setprecision(2) << media << endl;
}
