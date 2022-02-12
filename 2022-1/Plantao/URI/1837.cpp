#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    int quociente, resto;
    quociente = a / b;
    resto = a % b;

    cout << quociente << " " << resto << endl;
}