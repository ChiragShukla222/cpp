/*
        * * * *







*/
#include<iostream>
using namespace std ;
int main() {
    int n = 4 ;
    for(int r = n ; r >= 1 ; r--){
        for(int sp = r ; sp < n ;sp ++){
            cout<<" " ;
        }
        for(int c  = r ; c >= 1 ; c-- ){
            cout<<"* " ;
        }
        cout<<"\n";
    }

}
