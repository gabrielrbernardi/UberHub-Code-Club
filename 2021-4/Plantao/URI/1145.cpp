#include <bits/stdc++.h>
using namespace std;

int main(){
    int qtdLinha, qtdMax;
    cin >> qtdLinha >> qtdMax;

    for(int i = 1; i <= qtdMax; i++){
        if(i % qtdLinha == 0){
            cout << i << endl;
        }else{
            cout << i << " ";
        }
    }
}