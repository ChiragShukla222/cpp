#include<iostream>
using namespace std ;
int main(){
    int n = 4 ;
    for(int i = n ; i>=1 ; i--){
        for(int spc = n ; spc > i ;spc--){
            cout<<" ";
        }
        for(int c = 1 ; c<= i ; c++){
            cout<<"*";
        }
        cout<<"\n";

    }




}




