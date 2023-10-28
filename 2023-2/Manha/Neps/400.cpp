#include <bits/stdc++.h>
using namespace std;

void mostraVetor(vector<int> vet){
    for(auto it: vet){
        cout << it << " ";
    }
    cout << endl;
}

int main(){
    vector<int> valores;
    int aux;
    for(int i = 0; i < 10; i++){
        cin >> aux;
        valores.push_back(aux);
    }
    sort(valores.begin(), valores.end()); //ordenando por ordem crescente
    mostraVetor(valores);
    sort(valores.begin(), valores.end(), greater<int>()); //ordenando por ordem decrescente
    mostraVetor(valores);

}