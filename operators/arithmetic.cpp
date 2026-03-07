#include <bits/stdc++.h>

using namespace std;

int main(){
    int cups;
    double pricePerCup, totalPrice, discountPrice;
     cout << "Enter the number of cups : ";
     cin >> cups;
     cout << "Enter the price per cup : ";
     cin >> pricePerCup;

     totalPrice = cups * pricePerCup;

     //apply 5% discount

     if(totalPrice > 100){ 
     discountPrice = totalPrice - ( 0.05 * totalPrice);
     cout << "Discounted price is : "<< discountPrice << endl;
     }
     else { 
        cout << "Total price is : "<< totalPrice << endl;
     }
     
    return 0;
}
