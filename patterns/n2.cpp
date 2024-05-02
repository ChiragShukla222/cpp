#include<iostream>
using namespace std;
int main(){
    int n  = 3 ;
    for(int i = 1 ; i<=n ; i++){
        for(int spc = n ; spc> i ; spc-- ){
            cout<<" ";
        }
        for(int c = 1 ; c<=i ;c++){
            cout<<"*";
        }
        cout<<"\n";

    }



}

