#include <bits/stdc++.h>
using namespace std;

int main(){
    float notas[5];
    for(int i = 0; i < 5; i++){  ///Leitura dos valores do vetor
        cin >> notas[i];
    }
    for(int i = 0; i < 5; i++){  ///Verifica se numero eh igual a 0 e substitui
        if(notas[i] == 0.0){
            notas[i] = 10.0;
        }
    }
    int i = 0;
    while(i < 5){               ///Imprime todos os valores do vetor
        cout << notas[i] << endl;
        i++;
    }
    cout << "digite um valor" << endl; ///Imprime uma posicao especifica do vetor
    int x;
    cin >> x;
    cout << notas[x] << endl;
}
