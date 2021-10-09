#include<bits/stdc++.h>
using namespace std;

int main(){
    int vet[10];
    for(int i = 0; i < 10; i++){
        scanf("%d", vet[i]);
//        cin >> vet[i];
    }

    for(int i = 0; i < 10; i++){
        if(vet[i] <= 5){
            vet[i] = -10;
        }
    }

    for(int i = 0; i < 10; i++){
        printf("X[%d] = %d", i, vet[i]);
//        cout << "X[" << i << "] = " << vet[i] << endl;
    }
}
