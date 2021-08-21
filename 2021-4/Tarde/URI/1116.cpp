#include <bits/stdc++.h>

using namespace std;

int main(){
    int qtd, x, y;
    cin >> qtd;
    for(int i = 0; i < qtd; i++){
        cin >> x >> y;
        if(y == 0){
            cout << "divisao impossivel" << endl;
        }else{
            printf("%.1f\n", x / (float) y);
        }
    }
}
