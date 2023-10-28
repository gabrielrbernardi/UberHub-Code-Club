#include <bits/stdc++.h>
using namespace std;

int main(){
    int val, maior, pos, i;
    cin >> val;
    maior = val;
    pos = 0;
    for(i = 1; i < 100; i++){
        cin >> val;
        if(val > maior){
            maior = val;
            pos = i;
        }
    }
    cout << maior << endl;
    cout << pos << endl;
}
