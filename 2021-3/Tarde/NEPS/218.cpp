#include <bits/stdc++.h>
using namespace std;

int main(){
    char opcao[2];
    double val1, val2, res;
    cin >> opcao;
    cin >> val1 >> val2;
    if(opcao[0] == 'D'){
        res = val1 / val2;
    }else{
        res = val1 * val2;
    }
    printf("%.2lf\n", res);
}
