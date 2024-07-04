#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout<<"enter the number :";
    cin>>n;
    int a , b ,c  ,d;
    a = n /100;
    b = n %100;
    c = b/10;
    d = b%10;
    cout<<a<<"\t"<<c<<"\t"<<d<<"\n";
    for(int i = a-1 ; i >=1 ;i--){
        a = a*i;
    }
    cout<<"fac of a is :"<<a<<"\n";
       for(int i = c-1 ; i >=1 ;i--){
        c = c*i;
    }
    cout<<"fac of c is :"<<c<<"\n";
       for(int i = d-1 ; i >=1 ;i--){
        d = d*i;
    }
    cout<<"fac of d is :"<<d<<"\n";
    int sum = a+d+c;
    if(sum==n){
        cout<<"strong number";
    }
    else{
        cout<<"not an strong number";
    }


}
