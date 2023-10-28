#include <bits/stdc++.h>
using namespace std;

int soma(int x, int y){
    return x + y;
}

string retornaMensagem(){
    return "X = ";
}

int main(){
    int a, b;
    cin >> a >> b;
    cout << retornaMensagem() << soma(a,b) << endl;
}