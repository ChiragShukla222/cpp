#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout<<"enter the base :";
    cin>>n;
    int m ;
    cout<<"enter the power : ";
    cin>>m;
    int t = n;
    while(m>1){
        t= n *t;
        m--;
    }
    cout<<t;
}
