//write a program to keep a track of tea orders . Each time a cut of tea is made, decrease the number of cups reamaing. The loops should run until the all cups are served.

#include <bits/stdc++.h>
using namespace std;

int main(){

    int teaCups;
    cout << "Enter the number of cups to be served: ";
    cin >> teaCups;

    while( teaCups > 0){
        cout<<"The cup is served and " << "Remaining cups are: " << teaCups << endl;
        teaCups--;
    }

    cout<< "All cups are served" ;

    return 0;
    
}