#include<iostream>
using namespace std ;
int main() {
    int n = 5;
    for(int i = 0 ; i <= n ; i++ ){
        for(int spc = n ; spc > i ; spc--){
            cout<<" ";
        }
        for(int c = 0 ; c <= i ; c++){
            cout<<i+1<<" ";
        }
        cout<<"\n";
    }
   /* for(int i = 1 ; i <= n ; i++){
        for(int spc = n ; n > i ; spc--){
            cout<<" ";
        }
        for(int j = 1; j <= i ; j++){
            cout<<"* ";
        }
        cout<<"\n";

    }*/



}
