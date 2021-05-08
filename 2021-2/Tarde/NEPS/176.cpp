#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
    vector<int> vet;
    int temp, qtdElementos;
    cin >> qtdElementos;
    for(int i = 0; i < qtdElementos; i++){  //Repeticao para preenchimento do vetor
        cin >> temp;
        vet.push_back(temp);
    }
    sort(vet.begin(), vet.end());             //Comando para ordenacao dos valores
    for(int i = 0; i < qtdElementos-1; i++){  //Percorre vetor ate penultima posicao
        cout << vet.at(i) << " ";
    }
    cout << vet.at(qtdElementos-1) << endl;  //Imprime ultima posicao do vetor
}