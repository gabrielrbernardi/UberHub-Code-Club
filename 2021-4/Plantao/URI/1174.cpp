#include <bits/stdc++.h>
using namespace std;

int main(){
    float A[100], B;
    for(int i = 0; i < 100; i++){
        cin >> B;
        A[i] = B;
    }
    for(int i = 0; i < 100; i++){
        if(A[i] <= 10.0){
            printf("A[%d] = %.1f\n", i, A[i]);

///            cout << fixed;
///            cout << "A[" << i << "] = " << setprecision(1) << A[i] << endl;
        }
    }
}
