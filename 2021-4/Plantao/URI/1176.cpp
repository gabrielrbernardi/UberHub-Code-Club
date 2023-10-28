#include <bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long int fib[61]; /// 0->60 => 61 valores
    fib[0] = 0;
    fib[1] = 1;
    int qtdTestes, enesimoTermo;
    cin >> qtdTestes;

    for(int i = 2; i < 61; i++){
        fib[i] = fib[i-1] + fib[i-2];
    }

    for(int i = 0; i < qtdTestes; i++){
        cin >> enesimoTermo;
        cout << "Fib(" << enesimoTermo << ") = " << fib[enesimoTermo] << endl;
    }
}
