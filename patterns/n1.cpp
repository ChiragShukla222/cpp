#include<iostream>
using namespace std ;
int main() {
    int n = 5 ;
    for(int i = 1  ; i <= n ; i++){
        for(int j = 1 ; j< i ; j++){
            cout<<"*"<<"\t";
        }
        cout<<"\n";
    }
    for(int i = 1 ; i<=3 ; i++){
        for(int j  = 3 ; j >=i; j--){
            cout<<"*"<<"\t";
        }
        cout<<"\n";
    }





}
