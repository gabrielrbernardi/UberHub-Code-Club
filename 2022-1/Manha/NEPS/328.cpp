#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, aux;
    vector<int> vet;
    
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> aux;
        vet.push_back(aux);
    }

    int soma = 0;
    for(int i = 0; i < n; i++){
        soma = soma + vet.at(i);
    }

    double media = soma / (double) n; //aplicando o cast da variavel (type cast c/c++)

    printf("%.2lf\n", media);
}