#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int val, qtdPares = 0, qtdImpares = 0;

    for(int i = 0; i < n; i++){
        cin >> val;
        if(val % 2 == 0){
            qtdPares++;
        }else{
            qtdImpares++;
        }
    }
    cout << "Numeros pares: " << qtdPares << endl;
    cout << "Numeros impares: " << qtdImpares << endl;
}