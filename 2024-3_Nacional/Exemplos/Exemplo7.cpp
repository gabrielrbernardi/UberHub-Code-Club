#include <iostream>
using namespace std;

int main(){
    int x = 1;
    while(1){
        if(x >= 10){
            break;
        }

        x += 1;
        if(x == 5){
            continue;
        }

        cout << x << endl;
    }
}