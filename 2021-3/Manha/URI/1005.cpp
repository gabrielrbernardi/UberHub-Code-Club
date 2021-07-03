#include <bits/stdc++.h>

using namespace std;

double media(double a, double b){
    double media = ( (a * 3.5) + (b * 7.5) ) / 11;
    return media;
}

int main(){
    double a, b;
    cin >> a >> b;
    printf("MEDIA = %.5lf\n", media(a, b));
}
