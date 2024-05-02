#include<iostream>
using namespace std ;
int main() {
    int n  = 5 ;
    for(int r = 1 ; r <=n ; r++){
            for(int spc = n ; spc > r ; spc--){
                cout<<" ";
            }
            for(int c  = 1; c<= r ; c++ ){
                cout<<c;
            }
            cout<<"\n";
    }


}
