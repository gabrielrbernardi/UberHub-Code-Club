#include <bits/stdc++.h>
using namespace std;

int main() {
    int valor;
    cin >> valor;
    char str[50];

    itoa(valor, str, 16);

    for(int i = 0; i < strlen(str); i++){
        str[i] = toupper(str[i]);
    }
    cout << str << endl;
}
