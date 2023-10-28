#include <bits/stdc++.h>
using namespace std;
 
int main(){
    string str;
    getline(cin, str);

    str[0] = toupper(str.at(0));
    for(int i = 1; i < str.size(); i++){
        if(str.at(i-1) == ' '){
            str[i] = toupper(str.at(i));
        }else{
            str[i] = tolower(str.at(i));
        }
    }
    cout << str << endl;
}