#include <bits/stdc++.h>

using namespace std;

int main(){
    int vet[1000], n;
    cin >> n;
    for(int i = 0; i < 1000; i++){
        vet[i] = i%n;
        cout << "N[" << i << "] = " << vet[i] << endl;
    }
}
