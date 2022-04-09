#include<bits/stdc++.h>

using namespace std;

int main(){
    map<int, double> precos;

    precos.insert({1, 4.00});
    precos.insert({2, 4.50});
    precos.insert({3, 5.00});
    precos.insert({4, 2.00});
    precos.insert({5, 1.50});

    int codProduto, quantidade;
    cin >> codProduto >> quantidade;

    double precoProduto = precos[codProduto];
    double resultado = precoProduto * quantidade;
    printf("Total: R$ %.2lf\n", resultado);
}