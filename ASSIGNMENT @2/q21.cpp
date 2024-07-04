#include<iostream>
using namespace std ;
int main(){
    int n ,m;
    cout<<"enter the base";
    cin>>n;
    cout<<"enter the power";
    cin>>m;
    int t = n ;
    while(m>1){
        t=t*n;
        m--;
    }
    cout<<t;


}
