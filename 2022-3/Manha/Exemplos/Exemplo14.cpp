#include<bits/stdc++.h>
using namespace std;

int main(){
    for(int j = 0; j < 10; j++){
        for(int i = 0; i < 10; i++){
            if(i == 5){
                continue;
            }
            if(i >= 7){
                return 0;
            }
            cout << i << endl;
        }
    }
    cout << "fim do programa" << endl;
}