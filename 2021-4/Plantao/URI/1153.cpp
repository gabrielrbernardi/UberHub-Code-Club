#include <bits/stdc++.h>
using namespace std;
 
int fatorial(int num){
    if(num == 1){
        return 1;
    }else{
        return num * fatorial(num-1);
    }
}
 
int main() {
    int num, res;
    cin >> num;
    res = fatorial(num);
    cout << res << endl;
}