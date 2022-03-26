#include <bits/stdc++.h>

using namespace std;

typedef struct{
    string nome;
    int idade;
} Pessoa;

int main(){
    Pessoa p[10];
    for(int i = 0; i < 10; i++){
        cin >> p[i].nome;
        cin >> p[i].idade;
    }
    for(int i = 0; i < 10; i++){
        cout << endl << "Pessoa " << i << endl;
        cout << "O nome da pessoa eh: " << p[i].nome << endl;
        cout << "A idade eh: " << p[i].idade << endl;
    }
}

