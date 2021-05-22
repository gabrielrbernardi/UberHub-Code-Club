#include <bits/stdc++.h>
using namespace std;

double area(double raio){
    double pi = 3.14159;
    return pi * (raio * raio);
}

int main(){
    double raio;
    cin >> raio;
    printf("A=%.4lf\n", area(raio));
}
