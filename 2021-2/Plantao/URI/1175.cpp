#include <bits/stdc++.h>

using namespace std;

int main(){
    int N[25], M[25], i;
    for (i = 0; i < 20; i++){
        cin >> N[i];
    }
    for(i = 0; i < 20; i++){
        M[19-i] = N[i];
    }
    for(i = 0; i < 20; i++){
        cout << "N[" << i << "] = " << M[i] << endl;
    }
}
