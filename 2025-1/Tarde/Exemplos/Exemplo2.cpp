#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int vet[10];
    for (int i = 0; i < 10; i++){
        cin >> vet[i];
    }

    for(int i = 0; i < 10; i++){
        cout << vet[i] << " ";
    }
    cout << endl;
}