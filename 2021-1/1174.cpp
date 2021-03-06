#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    float A[100];
    for (int i = 0; i < 100; i++){
        cin >> A[i];
    }
    for(int i = 0; i < 100; i++){
        if(A[i] <= 10){
            printf("A[%d] = %.1f\n", i, A[i]);
        }
    }
}