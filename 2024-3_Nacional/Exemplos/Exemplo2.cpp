#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int x;
    cout << "Digite a sua idade: ";
    cin >> x;

    if(x >= 18){
        cout << "Você é maior de idade." << endl;
    }else if(x >= 12){
        cout << "Eh adolescente" << endl;
    }else if(x >= 3){
        cout << "Eh crianca" << endl;
    }else{
        cout << "Eh um bebe" << endl;
    }

}