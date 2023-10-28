#include<bits/stdc++.h>
using namespace std;

int soma(int x, int y){
    return x + y;
}

void mostraInt(int a){
    cout << a << endl;
}

string retornaMsg(){
    return "Hello World";
}

void mostraMsg(){
    cout << "Ola" << endl;
}

int main(){
    cout << soma(2, 5) << endl;
    mostraInt(3);
    cout << retornaMsg() << endl;
    mostraMsg();
}