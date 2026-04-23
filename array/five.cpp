#include <bits/stdc++.h>
using namespace std;

int main(){
    int chaiSales[3][7] = {
        {50, 60, 70, 80, 90, 45, 88}, //Shop 1 sales for 7 days
        {54, 65, 40, 65, 90, 36, 88}, //Shop 2 sales for 7 days
        {56, 40, 50, 87, 93, 10, 88}, //Shop 3 sales for 7 days
    };

    for(int i = 0; i < 3; ++i){
        cout <<"I am at shop " << i+1 << ": ";
        for(int j = 0; j < 7; ++j){
            cout << chaiSales[i][j]<< " cups" << " ";
        }
        cout << endl;
    }
    return 0;

}