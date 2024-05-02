#include<iostream>
using namespace std ;
int main(){
    int n = 5 ;
    for(int i = 1 ; i <= n ; i++){
        for(int spc = n ; spc > i ; spc--){
            cout<<" ";
        }
        for(int j = 1 ; j <= i  ; j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
    for(int i = 4 ; i >= 1 ; i--){
        for(int spc = 4 ; spc > i ; spc--){
            cout<<" ";
        }
        for(int j = 1 ; j <= i  ; j++){
            cout<<" *";
        }
        cout<<"\n";
    }








}
