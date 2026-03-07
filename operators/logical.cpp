#include <bits/stdc++.h>

using namespace std;

 int main(){
    int cups;
    bool isStudent;

    cout << "Are you a student (1 for Yes and 0 for No) : ";
    cin >> isStudent;

    cout << "Numbers of cups : ";
    cin >> cups;

    if (isStudent || cups > 15){
        cout << "You are eligible for schlorship";
    }
    else {
         cout << "You are not eligible for schlorship";
    }

    return 0;
 }

 // For bit use website : bitwiseCmd (https://bitwisecmd.com/)