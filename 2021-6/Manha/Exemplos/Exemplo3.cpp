#include <bits/stdc++.h>
using namespace std;

int main(){
    int vet[5];

    int j = 0;
    while(j < 5){
        cin >> vet[j];
        j++;
    }
    j = 0;
    while(j < 5){
        cout << vet[j] << endl;
        j++;
    }
        
        
    for(int i = 0; i < 5; i++){
        cin >> vet[i];
    }

    for(int i = 0; i < 5; i++){
        cout << vet[i] << endl;
    }
}
