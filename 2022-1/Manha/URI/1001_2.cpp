#include <bits/stdc++.h>
using namespace std;

int soma(int x, int y){
    return x + y;
}

string retornaMensagem(){
    return "X = ";
}

int leInteiro(){
    int x;
    cin >> x;
    return x;
}

int main(){
    int a = leInteiro(), b = leInteiro();
    cout << retornaMensagem() << soma(a,b) << endl;
}