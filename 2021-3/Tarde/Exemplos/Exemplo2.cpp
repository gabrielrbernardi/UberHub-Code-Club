#include <bits/stdc++.h>

using namespace std;

int main(){
    float notas[5];

    for(int i = 0; i < 5; i++){  ///Repeticao para ler e armazenar no vetor
        cin >> notas[i];
    }
    for(int i = 0; i < 5; i++){  ///Repeticao para substituir um determinado valor
        if(notas[i] == 0.0){
            notas[i] = 1.0;
        }
    }
    for(int i = 0; i < 5; i++){  ///Repeticao para mostrar os valores
        cout << notas[i] << endl;
    }
}
