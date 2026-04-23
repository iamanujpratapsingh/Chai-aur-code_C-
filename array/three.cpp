#include <bits/stdc++.h>
using namespace std;

int TotalChaiServed(int chai[], int size){
    int total = 0;
    for(int i = 0; i < size ; ++i ){
        total += chai[i];
    }
    return total;
}

int main(){
    int chaiServed[7]= {40,45,78,34,75,35,74};

    int total = TotalChaiServed(chaiServed,7);

    return 0;

}