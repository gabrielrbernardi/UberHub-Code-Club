#include <bits/stdc++.h>

using namespace std;

//NAO ESTA COMPLETO

int main(){
    int tam;
    cin >> tam;
    int vet[tam], distancia[tam];

    for(int i = 0; i < tam; i++){
        cin >> vet[i];
        if(vet[i] == 0){
            distancia[i] = 0;
        }
    }

    for(int i = 0; i < tam; i++){
        if(vet[i] != 0){
            int cont1 = 0, cont2 = 0;
            for(int j = i; j < tam; j++){
                if(vet[j] != 0 && j != tam){
                    cont1++;
                }else{
                    // cout << "alou: " << j << endl;
                    break;
                }
                // cout << endl << "relatorio 01" << endl;
                // cout << j << endl;
                // cout << cont1 << endl;
                // cout << cont2 << endl;
            }
            for(int j = i; j >= 0; j--){
                if(vet[j] != 0 && j != 0){
                    cont2++;
                }else{
                    break;
                }
                // cout << endl << "relatorio 02" << endl;
                // cout << j << endl;
                // cout << cont1 << endl;
                // cout << cont2 << endl;
            }
            // cout << endl << i << endl;
            // cout << cont1 << endl;
            // cout << cont2 << endl;
            if(cont1 > cont2 && cont1 != 0 && cont2 != 0){
                distancia[i] = cont2;
            }else{
                distancia[i] = cont1;
            }
        }
    }
    for(int i = 0; i < tam; i++){
        cout << distancia[i] << " ";
    }
}