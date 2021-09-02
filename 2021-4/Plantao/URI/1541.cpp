#include <bits/stdc++.h>
using namespace std;

int main() {
    int b, h, tamMax = 100, valLegislacao, areaIdeal, ladoIdeal;

    while(1){
        cin >> b;
        if(b == 0){
            break;
        }
        cin >> h >> valLegislacao;
        areaIdeal = ((b * h * tamMax) / valLegislacao);
        ladoIdeal = (int) sqrt(areaIdeal);
        cout << ladoIdeal << endl;
    }
}
