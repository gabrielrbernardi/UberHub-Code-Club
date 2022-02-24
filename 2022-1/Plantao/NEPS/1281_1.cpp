#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int val;
    vector<int> pares, impares;

    for(int i = 0; i < n; i++){
        cin >> val;
        if(val % 2 == 0){
            pares.push_back(val);
        }else{
            impares.push_back(val);
        }
    }
    cout << "Numeros pares: " << pares.size() << endl;
    cout << "Numeros impares: " << impares.size() << endl;
}