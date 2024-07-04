#include<iostream>
using namespace std ;
void swapp(int &a , int &b){
    int c  ;
    c = a ;
    a = b ;
    b = c ;
}
int main(){
    int m , n ;
    cout<<"enter the vlaue you want to swap";
    cin>>m>>n;
    swapp(m,n);
    cout<<"after swaapping"<<m<<"\n";
    cout<<"after swaapping"<<n;
}
