#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> vet = {1,2,3,4,5,6,7,8,9,10};
    int q;
    cin >> q;
    for(int j = 0; j < q; j++) {
        int l, r;
        cin >> l >> r;
        int resultado = 0;
        for(int i = l; i <= r; i++) {
            resultado += vet.at(i);
        }
        cout << resultado << endl;
    }
}

