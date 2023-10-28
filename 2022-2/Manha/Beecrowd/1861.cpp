#include<bits/stdc++.h>

using namespace std;

int main(){
    map<string, int> map1, map2;
    string str1, str2;

    while((cin >> str1 >> str2)){
    // for(int i = 0; i < 6; i++) {
    //     cin >> str1 >> str2;
        map1[str1]++;
        map2[str2]++;
    }

    cout << "HALL OF MURDERERS" << endl;
    for(auto it: map1) {
        if(map2.find(it.first) == map2.end()){
            cout << it.first << " " << it.second << endl;
        }
    }
}