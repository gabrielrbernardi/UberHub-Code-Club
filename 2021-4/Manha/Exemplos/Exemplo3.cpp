#include <bits/stdc++.h>
using namespace std;

int main(){
    int notas[5];

    for(int i = 0; i < 5; i++){
        cin >> notas[i];
    }
    for(int i = 0; i < 5; i++){
        cout << "Nota " << i << ": " << notas[i] << endl;
    }
}