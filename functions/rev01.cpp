#include<iostream>
using namespace std ;
int fun(int &a, int &b){
    int c ;
    c = a+b;
    return c;
}
int main(){
    int m , n ;
    cout<<"m & n";
    cin>>m>>n;
    int k = fun(m,n);
    cout<<k;
}
