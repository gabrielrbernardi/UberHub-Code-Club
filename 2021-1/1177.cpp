#include <bits/stdc++.h>

using namespace std;

int main(){
    int vet[10], n;
    cin >> n;
    for(int i = 0; i < 10; i++){
        vet[i] = i%n;
        cout << "N[" << i << "] = " << vet[i] << endl;
    }
}
