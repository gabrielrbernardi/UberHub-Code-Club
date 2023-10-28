#include <bits/stdc++.h>
using namespace std;

int main(){
    map<int, double> tabela_precos;

    tabela_precos.insert({1, 4.00});
    tabela_precos.insert({2, 4.50});
    tabela_precos.insert({3, 5.00});
    tabela_precos.insert({4, 2.00});
    tabela_precos.insert({5, 1.50});

    int codigo, quantidade;
    cin >> codigo >> quantidade;

    double preco_final = tabela_precos[codigo] * quantidade;

    cout << fixed;
    cout << "Total: R$ " << setprecision(2) << preco_final << endl;

    printf("Total: R$ %.2lf\n", preco_final);
}