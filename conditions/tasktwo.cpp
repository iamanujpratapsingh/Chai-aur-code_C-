#include<bits/stdc++.h>
using namespace std;
int main(){
    int hour;

    cout<<"Enter the current hour (0-24): ";
    cin>>hour;

    if(hour >= 8 & hour <= 18){
        cout << "Tea Shop is Open!"<<endl;

    }
    else{
        cout<< "Tea Shop is closed!"<< endl;
    }
    return 0;
}
