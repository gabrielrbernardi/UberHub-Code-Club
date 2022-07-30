#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> vetInt;
    vector<long int> vetLInt;
    vector<long long int> vetLLInt;
    vector<float> vetFloat;
    vector<double> vetDouble;
    vector<char> vetChar;

    cout << "Qtd Maxima elementos Int: " << vetInt.max_size() << endl;
    cout << "Qtd Maxima elementos Long Int: " << vetLInt.max_size() << endl;
    cout << "Qtd Maxima elementos Long Long Int: " << vetLLInt.max_size() << endl;
    cout << "Qtd Maxima elementos Float: " << vetFloat.max_size() << endl;
    cout << "Qtd Maxima elementos Double: " << vetDouble.max_size() << endl;
    cout << "Qtd Maxima elementos Char: " << vetChar.max_size() << endl;
}