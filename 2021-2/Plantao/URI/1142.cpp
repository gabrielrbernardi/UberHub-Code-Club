#include <bits/stdc++.h>
using namespace std;

int main(){
    int linhas;
    cin >> linhas;
    for(int i = 1; i <= linhas * 4; i++){
        if(i % 4 == 0){
            cout << "PUM" << endl;
        }else{
            cout << i << " ";
        }
    }
}
