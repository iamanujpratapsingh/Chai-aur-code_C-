#include <bits/stdc++.h>
#include <string>

using namespace std;

int main(){
    string userTea;
    int teaQuantity;

    cout << "what would you like to order in tea \t";
    getline(cin, userTea);

    //ask for quantity
    cout<< "how many cups of " << userTea << " would you like to have ? ";
    cin >> teaQuantity;

    cout<< userTea << endl;
    cout<< teaQuantity;

    return 0;
}