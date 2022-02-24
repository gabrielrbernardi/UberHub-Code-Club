#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int val, pares[n], impares[n], qtdValoresPares = 0, qtdValoresImpares = 0;

    for(int i = 0; i < n; i++){
        cin >> val;
        if(val % 2 == 0){
            pares[qtdValoresPares] = val;
            qtdValoresPares++;
        }else{
            impares[qtdValoresImpares] = val;
            qtdValoresImpares++;
        }
    }
    cout << "Numeros pares: " << qtdValoresPares << endl;
    cout << "Numeros impares: " << qtdValoresImpares << endl;
}