#include<bits/stdc++.h>
using namespace std;

int Rafael(int x, int y){
    return (3*x) * (3*x) + (y * y);
}

int Beto(int x, int y){
    return 2*(x * x) + ((5*y) * (5*y));
}

int Carlos(int x, int y){
    return ((-100) * x) + (y*y*y);
}

int main(){
    int qtd;
    cin >> qtd;
    for(int i = 0; i < qtd; i++){
        int a, b;
        cin >> a >> b;
        if(Rafael(a, b) > Beto(a, b) && Rafael(a, b) > Carlos(a, b)){
            cout << "Rafael ganhou" << endl;
        }
        if(Beto(a, b) > Rafael(a, b) && Beto(a, b) > Carlos(a, b)){
            cout << "Beto ganhou" << endl;
        }
        if(Carlos(a, b) > Rafael(a, b) && Carlos(a, b) > Beto(a, b)){
            cout << "Carlos ganhou" << endl;
        }
    }
}