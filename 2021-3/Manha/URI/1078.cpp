#include <bits/stdc++.h>

using namespace std;

//void tabuada(int x){
//    for(int i = 1; i <= 10; i++){
//        cout << i << " x " << x << " = " << x*i << endl;
//    }
//}
//
//int main(){
//    int x;
//    cin >> x;
//    tabuada(x);
//}

int multiplica(int x, int y){
    return x*y;
}

int main(){
    int x;
    cin >> x;
    for(int i = 1; i <= 10; i++){
        cout << i << " x " << x << " = " << multiplica(x, i) << endl;
    }
}
