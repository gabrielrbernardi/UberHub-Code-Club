#include <bits/stdc++.h>
using namespace std;

int main(){
    double vet[100];

    for(int i = 0; i < 100; i++){
        cin >> vet[i];
    }

    for(int i = 0; i < 100; i++){
        if(vet[i] <= 10.0){
            cout << fixed;
            cout << "A[" << i << "] = " << setprecision(1) << vet[i] << endl;
//            printf("A[%d] = %.1lf\n", i, vet[i]);
        }
    }

}