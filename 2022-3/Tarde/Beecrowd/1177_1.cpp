#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    int cont = 0;
    for(int i = 0; i < 1000; i+=T){
        for(int f = 0; f < T; f++){
            cout << "N[" << cont << "] = " << f << endl;
            if(cont >= 999){
                break;
            }
            cont++;
        }
    }
}