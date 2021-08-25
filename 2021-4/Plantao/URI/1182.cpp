#include <bits/stdc++.h>
using namespace std;

int main(){
    double M[12][12], aux = 0;
    int numero, i, j;
    char T;
    
    cin >> numero;
    cin >> T;

    for(i=0; i<=11 ;i++){
        for(j=0; j<=11; j++){
            cin >> M[i][j];
            if(j == numero){
                aux += M[i][j];
            }
        }
    }
    if(T =='S'){
        printf("%.1lf\n",aux);
    }else if(T == 'M'){
        aux = aux / 12.0;
        printf("%.1lf\n",aux);
    }
    return 0;
}