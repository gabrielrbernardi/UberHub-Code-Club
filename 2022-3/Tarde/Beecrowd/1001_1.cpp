#include<bits/stdc++.h>
using namespace std;

int leInteiro(){
    int a;
    cin >> a;
    return a;
}

int soma(int x, int y){
    return x + y;
}

string mostraMsg(){
    return "X = ";
}

void executa(){
    int a = leInteiro(), b = leInteiro();
    cout << mostraMsg() << soma(a, b) << endl;
}

int main(){
    executa();
}