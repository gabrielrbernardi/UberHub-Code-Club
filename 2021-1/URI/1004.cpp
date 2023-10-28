#include <bits/stdc++.h>
using namespace std;

int produto(int val1, int val2){
    int resultadoProduto = val1 * val2;
    return resultadoProduto;
}

int main(){
    int x, y;
    cin >> x >> y;
    int resultado = produto(x, y);
    cout << "PROD = " << resultado << endl;
}