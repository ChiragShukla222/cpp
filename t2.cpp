#include<iostream>
using namespace std ;
int main(){
    int n ;
    int t ;
    int p ;
    cout<<"enter any number";
    cin>>n;
    cout<<"enter the power";
    cin>>p;
    t = n ;
    while(p>1){
        t = t * n ;
        p--;
    }
    cout<<t;
}
