#include<bits/stdc++.h>
using namespace std;

int main(){
    int cups;
    cout << "No. of cups: ";
    cin >> cups;

    if(cups >= 10 & cups <= 20){
        cups -= 0.1 * cups;
        cout << cups;
    }
    else if(cups > 20){
        cups -= 0.2 * cups;
        cout<< cups;            
    }
    else if(cups < 10){
        cout << cups;
    }
    return 0;
}