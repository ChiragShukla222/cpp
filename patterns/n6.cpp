#include<iostream>
using namespace std ;
int main(){
    int a ;
    cout<<"enter the number :";
    cin>>a;

    for(int i = a-1 ; i>1 ; i--){
         a= a*i;
    }
       cout<<a;



}
