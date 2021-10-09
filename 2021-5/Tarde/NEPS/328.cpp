#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vet;
    int aux, qtd;

    cin >> qtd;
    for(int i = 0; i < qtd; i++){
        cin >> aux;
        vet.push_back(aux);
    }
    int soma = 0;
    for(int i = 0; i < vet.size(); i++){
        soma = soma + vet.at(i);
    }
    double media = soma / (double) vet.size();
//    cout << fixed;
//    cout << setprecision(2) << media << endl;
    printf("%.2lf\n", media);
}
