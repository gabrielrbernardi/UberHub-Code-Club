#include <bits/stdc++.h>
using namespace std;

int main(){
    string opcao;
    cin >> opcao;
    double val1, val2;
    cin >> val1 >> val2;
    if(opcao == "M"){ ///Faz multiplicacao
        printf("%.2lf\n", val1*val2);
    }else{            ///Faz divisao
        printf("%.2lf\n", val1/val2);
    }
}
