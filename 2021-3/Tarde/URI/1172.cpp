#include <bits/stdc++.h>

using namespace std;

int main(){
    int vetor[10];
    for(int i = 0; i < 10; i++){
        cin >> vetor[i];
    }
    for(int i = 0; i < 10; i++){
        if(vetor[i] <= 0){
            vetor[i] = 1;
        }
    }
    for(int i = 0; i < 10; i++){
        cout << "X[" << i << "] = " << vetor[i] << endl;
    }
}
