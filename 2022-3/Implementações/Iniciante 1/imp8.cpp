#include<bits/stdc++.h>
using namespace std;

int main(){
    int A, B, C;
    cin >> A >> B >> C;
    int fatorial01 = 0, fatorial02 = 0, fatorial03 = 0;
    for(int i = 1; i <= A; i++){fatorial01 *= i;}
    for(int i = 1; i <= B; i++){fatorial02 *= i;}
    for(int i = 1; i <= C; i++){fatorial03 *= i;}

    cout << fatorial01 << " " << fatorial02 << " " << fatorial03 << endl;
}


