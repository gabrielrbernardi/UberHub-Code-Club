#include <bits/stdc++.h>
using namespace std;

void imprime(){
    cout << "Hello World!" << endl;
}

string imprime2(){
    return "Hello World!";
}

string imprime3(string msg){
    return msg;
}

int main(){
    cout << "Hello World!" << endl;
    imprime();
    cout << imprime2() << endl;
    cout << imprime3("Hello World!") << endl;
}
