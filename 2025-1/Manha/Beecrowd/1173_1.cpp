#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int vet[10];
    cin >> vet[0];
    for(int i = 1; i < 10; i++){
        vet[i] = vet[i-1] * 2;
    }
    for(int i = 0; i < 10; i++){
        cout << "N[" << i << "] = " << vet[i] << endl;
    }
}
