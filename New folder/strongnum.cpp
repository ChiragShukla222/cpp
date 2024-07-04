#include<iostream>
using namespace std ;
 int main(){
    int n ;
    cout<<"enter any three digit number";
    cin>>n;
    int a , b , c ,d;
    a = n /100;
    b = n %100;
    c= b/10;
    d=b%10;
    cout<<"seprated are";
    cout<<a<<"\t"<<c<<"\t"<<d<<"\t"<<"\n";
    for(int i = a-1 ; i>1 ; i--){
        a=a*i;
    }
    cout<<"fac for a is"<<a<<"\n";
    for(int i = d-1 ; i > 1 ; i--){
        d = d*i;
    }
    cout<<"fac for d is"<<d<<"\n";
    for(int i = c-1 ; i >1 ; i--){
        c = c*i;
    }
    cout<<"fac for c is"<<c<<"\n";
    int sum = a+d+c;
    cout<<sum;
    if(sum==n){
        cout<<"strong number found";
    }
    else{
        cout<<"not and strong number";
    }
 }
