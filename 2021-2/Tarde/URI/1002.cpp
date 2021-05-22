#include <bits/stdc++.h>
using namespace std;

void area(double raio){
    printf("A=%.4lf\n", 3.14159*(raio*raio));
}

int main(){
    double raio;
    cin >> raio;
    area(raio);
}
