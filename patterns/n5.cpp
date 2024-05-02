#include<iostream>
using namespace std ;
int main(){
    int a ;
    cout<<"enter the base nubmer";
    cin>>a;
    int b ;
    cout<<"enter the power number";
    cin>>b;
    int t ;
    t = a ;
    while(b>1){
        t=t*a ;
        b--;

    }
    cout<<t;



}
