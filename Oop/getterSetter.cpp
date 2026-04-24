#include <bits/stdc++.h>
using namespace std;

class Chai{
    private:
        string teaName;
        int servings;
        vector<string> ingredients;

    public:

    Chai(){
        teaName = "Unknow tea";
        servings = 1;
        ingredients ={ "Water", "tea leaves"};
    }

    Chai(string name, int serve, vector<string> ingr){
        teaName = name;
        servings = serve;
        ingredients = ingr;
    }

    //getter
    string getTeaName(){
        return teaName;
    }

    //setter
    void setTeaName(string name){
        //logic
        teaName = name;
    }

    //getter for servings
    int getServings(){
        return servings;
    }

    //setter for servings
    void setServings(int serve){
        servings = serve;
    }

    //getter for ingredients
    vector<string> getIngredients(){
        return ingredients;
    }

    //setter for ingre

    void setIngredients(vector<string> ingr ){
        ingredients = ingr;
    }
};

int main(){
    Chai chai;
    chai.setTeaName("Lemon Tea");
    chai.setServings(2);
    chai.setIngredients({"Water", "Lemon", "Honey"});

    cout << chai.getTeaName() << endl;
    cout << chai.getServings() << endl;
    chai.getIngredients();

   
    
    return 0;

}