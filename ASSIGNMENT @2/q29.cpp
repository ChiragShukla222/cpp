#include<iostream>
using namespace std ;
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    int a , b, c ,d ;
    a = n / 100;
    b = n %100;
    c = b /10;
    d = b %10;
    cout<<"seprate"<<"\n"<<d<<"\n"<<c<<"\n"<<a<<"\n";
    int m = a*a*a;
    int p = d*d*d;
    int o = c*c*c;
    int sum = m+p+o;
    if(sum==n){
        cout<<"arm strong";
    }
    else{
        cout<<"not an armstrong";
    }
}
