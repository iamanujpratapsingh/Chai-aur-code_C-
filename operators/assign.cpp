#include <bits/stdc++.h>

using namespace std;

 int main(){
    int teaBags;
    cout << "Nubmers of tea bags : " ;
    cin >> teaBags;
    if(teaBags < 10){
        teaBags += 5;
    }
    cout <<"total Numbers of teabags : " << teaBags<<endl;
    
    return 0;
 }