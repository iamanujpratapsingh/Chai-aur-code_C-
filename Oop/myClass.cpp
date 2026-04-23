#include <bits/stdc++.h>
using namespace std;

class Chai{
        public: //these are access modifiers
        
        //data members (attributes)
            string teaName; // Name of the tes
            int servings; // Number of servings
            vector<string> ingredients; // List of ingredients for the tea

            //Member function 

            void displayChaiDetails(){
                cout << "teaName: " << teaName <<endl;
                cout << "Servings: " << servings <<endl;
                cout << "Ingredients: ";
                //Specialized loop for  array
                for(string ingredient : ingredients){
                    cout << ingredient << " ";
                }
                cout << endl;  
            }
};

int main(){
    Chai chaiOne;
    chaiOne.teaName = "lemon tea";
    chaiOne.servings = 2;
    chaiOne.ingredients = {"water","lemon","Honey","tea"};

    chaiOne.displayChaiDetails();

    Chai chaiTwo;
    chaiTwo.teaName ="tea masala";
     chaiTwo.servings = 3;
     chaiTwo.ingredients ={"water","milk","ginger","tea","masala"};

    chaiTwo.displayChaiDetails();
    return 0;
}