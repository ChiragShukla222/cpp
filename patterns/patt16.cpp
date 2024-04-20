#include<iostream>
using namespace std ;
int main() {
    int n  = 3 ;
    for(int r = n ; r >=1 ; r--){
        for(int s =n ; s>r ; s-- ){
            cout<<" " ;
        }
        for(int c  = 1;  c<=r ; c++){
            cout<<"*";
        }
        cout<<"\n";
    }

}
