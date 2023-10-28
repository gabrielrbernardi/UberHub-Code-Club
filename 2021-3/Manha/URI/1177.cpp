#include <bits/stdc++.h>
using namespace std;

/// 0 -> 0 => 0 % 3 = 0
/// 1 -> 1 => 1 % 3 = 1
/// 2 -> 2 => 2 % 3 = 2
/// 3 -> 0 => 3 % 3 = 0
/// 4 -> 1 => 4 % 3 = 1
/// 5 -> 2 => 5 % 3 = 2
/// 6 -> 0 => 6 % 3 = 0

int main(){
    int vet[1000];
    int x;
    cin >> x;
    for(int i = 0; i < 1000; i++){
        vet[i] = i % x;
    }
    for(int i = 0; i < 1000; i++){
        cout << "N[" << i << "] = " << vet[i] << endl;
    }
}
