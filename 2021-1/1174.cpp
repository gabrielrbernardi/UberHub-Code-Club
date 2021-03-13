#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    float A[5];
    for (int i = 0; i < 5; i++){
        cin >> A[i];
    }
    for(int i = 0; i < 5; i++){
        if(A[i] <= 10){
            printf("A[%d] = %.1f\n", i, A[i]);
        }
    }
}