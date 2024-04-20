#include<iostream>
using namespace std ;
int main() {
    int n = 5  ;
    int a = 5 ;
    for(int i =  1; i <= n ; i++){
        for(int spc = n ; spc > i ; spc--){
            cout<<" ";
        }
        for(int j =  i ; j >= 1 ; j--  ){
            cout<<i;

        }
        cout<<"\n";
    }



}
