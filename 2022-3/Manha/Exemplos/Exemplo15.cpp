#include<bits/stdc++.h>
using namespace std;

int lerInt(){
    int x;
    cin >> x;
    return x;
}

void mostraInt(int x, int y, int z){
    cout << y << endl;
    cout << x << endl;
    cout << z << endl;
}

int main(){
    int x = lerInt(), y = lerInt(), z = lerInt();
    mostraInt(x, y, z);
}