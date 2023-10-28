#include <bits/stdc++.h>
using namespace std;

int main(){
    char operacao;
    double val1, val2;
    cin >> operacao;
    cin >> val1 >> val2;

    if(operacao == 'M'){
        double multiplicacao = val1 * val2;
        printf("%.2lf\n", multiplicacao);
    }else{
        printf("%.2lf\n", val1 / val2);
    }
}
