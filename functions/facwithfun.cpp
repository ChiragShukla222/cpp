#include<iostream>
using namespace std ;
    void fac(int a){
        int t = a ;
        for(int i = a -1 ; i > 1 ; i--){
            t = t * i;
        }
        cout<<t;
    }

int main() {
    int b ;
    cout<<"enter the number";
    cin>>b;
    fac(b);



}
