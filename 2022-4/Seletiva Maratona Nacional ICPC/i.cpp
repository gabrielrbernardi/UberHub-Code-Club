#include <bits/stdc++.h>
using namespace std;

int main(){
    int val;
    bool flag = false;
    for(int i = 0; i < 8; i++){
        cin >> val;
        if(val == 9){
            flag = true;
        }
    }
    if(flag == true){
        cout << "F" << endl;
    }else{
        cout << "S" << endl;
    }
}