#include <bits/stdc++.h>

using namespace std;

int main(){
    int qtdPes;
    cin >> qtdPes;

    for(int i = 1; i <= qtdPes; i++){
        if(i % 2 != 0 && i % 3 == 0){
            cout << i << endl;
        }
    }
}