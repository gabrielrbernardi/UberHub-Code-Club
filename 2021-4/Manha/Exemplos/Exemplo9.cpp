#include <bits/stdc++.h>
using namespace std;

void soma1(int val1, int val2){
    cout << val1+val2 << endl;
}

int soma2(int val1, int val2){
    return val1+val2;
}

void operacao(){
    int val1, val2;
    cin >> val1 >> val2;
    int resultado = val1 + val2;
    cout << resultado << endl;
}

int le1Valor(){
    int x;
    cin >> x;
    return x;
}

int main() {
    int a, b;
    cin >> a >> b;
    soma1(a, b);

    cout << soma2(a,b) << endl;

    operacao();

    int val1 = le1Valor();
    int val2 = le1Valor();
    cout << soma2(val1, val2) << endl;
}
