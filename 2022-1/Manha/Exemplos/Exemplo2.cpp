#include <bits/stdc++.h>

using namespace std;

int main(){
    int a;
    float b;
    char c;

    cin >> a;
    cout << "O valor de a eh: " << a << endl;

    if(a > 10){
        cout << "O valor eh maior que 10\n";
    }else{
        printf("O valor nao eh maior que 10\n");
    }

    for(int i  = 0; i < 10; i++){
        cout << "O valor de i eh " << i << endl;
    }

    double valor = 2.7565674;

    printf("O valor eh %.2lf\n", valor);
    cout << fixed;
    cout << setprecision(2) << "O valor eh " << valor << endl;
}