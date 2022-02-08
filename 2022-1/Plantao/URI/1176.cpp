#include <bits/stdc++.h>

using namespace std;

int main(){
    unsigned long long int fib[61];

    fib[0] = 0;
    fib[1] = 1;

    for(int i = 2; i <= 61; i++){
        fib[i] = fib[i-2] + fib[i-1];
    }

    int t, n;
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n;
        cout << "Fib(" << n << ") = " << fib[n] << endl;
    }
}
