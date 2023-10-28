#include <bits/stdc++.h>

using namespace std;

int main(){
    string operacao;
    cin >> operacao;
    double a, b;
    cin >> a >> b;

    if(operacao == "M"){
        printf("%.2lf\n", a * b);
        // cout << fixed;
        // cout << setprecision(2) << a * b << endl;
    }else{
        printf("%.2lf\n", a / b);
        // cout << fixed;
        // cout << setprecision(2) << a / b << endl;
    }
}