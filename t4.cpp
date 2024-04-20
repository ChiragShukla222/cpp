#include<iostream>
using namespace std;
int main(){
    int n ;
    int p ;
    int t ;
    cout<<"enter the number \t";
    cin>>n;
    cout<<"enter the power \t";
    cin>>p;
    t = n;
    while(p>1){
        t =t* n;
        p--;
    }
    cout<<t;
}
