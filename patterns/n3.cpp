#include<iostream>
using namespace std ;
int main() {
    int n = 5 ;
    for(int i = n ; i >= 1 ; i--){
        for(int s = n  ; s > i ; s--){
            cout<<" ";
        }
        for(int c = 1 ; c <= i ; c++){
            cout<<"*";
        }
        cout<<"\n";
    }
    for(int i  =1  ; i <= n ; i++){
        for(int s = n ; s > i ; s--){
            cout<<" ";
        }
        for(int c = 1 ; c <= i ; c++){
            cout<<"*";
        }
        cout<<"\n";
    }


}

