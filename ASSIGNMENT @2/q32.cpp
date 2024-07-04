#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout<<"enter n up to which series is to be generated :";
    cin>>n;
    int m = 0 ;
    int o = 1 ;
    int k;
    cout<<m<<"\t"<<o<<"\t";
    for(int i = 2; i <= n ; i++){
        k = m+o;
        m = o ;
        o = k;
        cout<<k<<"\t";
    }

}
