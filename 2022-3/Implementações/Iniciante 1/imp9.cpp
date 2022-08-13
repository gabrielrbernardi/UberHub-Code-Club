#include<bits/stdc++.h>
using namespace std;

int fatorial(int x){
    int resposta = 1;
    for(int i = 1; i <= x; i++){
        resposta *= i;
    }
    return resposta;
}

int main(){
    int A, B, C;
    cin >> A >> B >> C;
    cout << fatorial(A) << " " << fatorial(B) << " " << fatorial(C) << endl;
}


