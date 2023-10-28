#include<iostream>
using namespace std;
int main(){

    double g, e;

    cin >> g >> e;

    if( e <= (0.73 * g)){
        cout << "ETANOL" << endl;
    }
    else{
        cout << "GASOLINA" << endl;
    }



return 0;
}