#include<bits/stdc++.h>

using namespace std;

int main(){
    map<int, double> preco;
    preco.insert(make_pair(1, 4.00));
    preco.insert(make_pair(2, 4.50));
    preco.insert(make_pair(3, 5.00));
    preco.insert(make_pair(4, 2.00));
    preco.insert(make_pair(5, 1.50));

    int codProduto, quantidade;
    cin >> codProduto >> quantidade;

    double precoProduto = preco[codProduto];
    double total = precoProduto * quantidade;
    printf("Total: R$ %.2lf\n", total);
}