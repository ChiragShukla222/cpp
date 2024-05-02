#include<iostream>
using namespace std ;
int main(){
    int n  = 5 ;
    for(int i = 1 ; i <=n ; i++){
        for(int j = 1 ; j<= i ;j++){
            cout<<"*"<<"\t";
        }
        cout<<"\n";
    }
    for(int i = n ; i >=1 ; i--){
        for(int j = 1 ; j<=i ; j++){
            cout<<"*"<<"\t";
        }
        cout<<"\n";
    }
    for(int i = 1 ; i <= n ; i++){
        for(int spc = n ; spc > i ; spc--){
            cout<<" ";
        }
        for(int c = 1 ; c <= i ;c++){
            cout<<"*";
        }
        cout<<"\n";
    }
    for(int i = n ; i >= 1 ; i--){
        for(int spc = n ;spc > i ; spc--){
            cout<<" ";
        }
        for(int c = 1 ; c <= i ; c++){
            cout<<"*";
        }
        cout<<"\n";
    }


}
