#include<iostream>
using namespace std ;
int main(){
    int n , a , b, c, d ;
    cout<<"enter any number \t";
    cin>>n;
    a = n / 100 ;
    b = n%100 ;
    c = b / 10 ;
    d = b % 10;
    cout<<d <<c<<a;

}
