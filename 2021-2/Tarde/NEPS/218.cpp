#include <bits/stdc++.h>

using namespace std;

int main(){
    char operacao[2];
    double num1, num2;
    scanf("%s", operacao);
    cin >> num1 >> num2;
    if(strcmp(operacao, "M") == 0){
        printf("%.2lf\n", num1*num2);
    }else{
        printf("%.2lf\n", num1/num2);
    }
}