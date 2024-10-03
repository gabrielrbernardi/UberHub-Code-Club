#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    double x = 0;
    for(double i = 0.0; i <= 2.0; i+=0.2){
        double j = 1 + x;   
        cout << "I=" << i << " J=" << j << endl;
        cout << "I=" << i << " J=" << j + 1.0 << endl;
        cout << "I=" << i << " J=" << j + 2.0 << endl;
        x += 0.2;
    }
}