#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
    vector<int> teste;
    int temp;
    for(int i = 0; i < 10; i++){
        cin >> temp;
        teste.push_back(temp);
    }
    cout << endl;
    sort(teste.rbegin(), teste.rend());
    for(int i = 0; i < 10; i++){
        cout << teste.at(i) << endl;
    }
}