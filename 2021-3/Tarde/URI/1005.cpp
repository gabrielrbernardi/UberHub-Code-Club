#include <bits/stdc++.h>
using namespace std;

double media(double x, double y){
    return ((x * 3.5) + (y * 7.5)) / 11;
}

int main(){
    double a, b;
    cin >> a >> b;
    printf("MEDIA = %.5lf\n", media(a, b));
}
