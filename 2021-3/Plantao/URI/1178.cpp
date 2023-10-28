#include <bits/stdc++.h>
using namespace std;

int main() {
    double vet[100];
    cin >> vet[0];
    for(int i = 1; i < 100; i++){
        vet[i] = vet[i-1] / 2.0;
    }
    for(int i = 0; i < 100; i++){
        printf("N[%d] = %.4lf\n", i, vet[i]);
    }
}
