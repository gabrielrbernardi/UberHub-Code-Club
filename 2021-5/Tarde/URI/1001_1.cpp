#include <bits/stdc++.h>
using namespace std;

int soma(int a, int b){
    return a+b;
}

void imprimeMensagem(){
    int a, b;
    cin >> a >> b;
    cout << "X = " << soma(a, b) << endl;
}

int main(){
    imprimeMensagem();
}
