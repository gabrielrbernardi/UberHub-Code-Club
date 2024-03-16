#include <bits/stdc++.h>
using namespace std;

int main(){
    string temp = "";
    string text;
    vector<string> vet_string;

    getline(cin, text);

    for(int i = 0; i < text.size(); i++){
        if(text.at(i) == ' ' || i == text.size()-1){
            vet_string.push_back(temp);
            temp = "";
        }else{
            temp.push_back(text.at(i));
        }
    }

    for(int i = 0; i < vet_string.size(); i++){
        cout << vet_string.at(i) << endl;
    }
}