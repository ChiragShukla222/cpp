#include<iostream>
using namespace std ;
int main (){
    int n ;
    cout<<"enter the number";
    cin>>n;
    int a,b,c,d;
    a = n/100;
    b = n%100;
    c = b/10;
    d = b%10;
    cout<<d<<c<<a;
    int multi ;
    multi = a*c*d;
    cout<<"multiplication is : "<<multi;
}
