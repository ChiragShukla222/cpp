#include<iostream>
using namespace std;
int main(){
    int n = 5 ;
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <=i ; j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    for(int i = 4 ; i >= 1 ; i--){
        for(int j = 1 ; j<=i ; j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    for(int i = 1 ; i <= n ; i++){
        for(int spc = n ; spc > i ; spc--){
            cout<<" ";
        }
        for(int j = 1 ; j <= i ; j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    for(int r = n ; r >= 1 ; r--){
        for(int spc = n ; spc>r ;spc--){
            cout<<" ";
        }
        for(int c = 1 ; c<= r ; c++ ){
            cout<<"&";
        }
        cout<<"\n";
    }
    for(int r  = 1  ; r <= n ; r++){
        for(int spc  = n ; spc > r ; spc--){
            cout<<" ";

        }
        for(int c = 1 ; c<=r ; c++){
            cout<<"* ";
        }
        cout<<"\n";
    }


}
