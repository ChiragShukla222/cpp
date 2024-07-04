#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout<<"enter the number  :  ";
    cin>>n;
    int last,first ;
    last = n%10;
    while(n>0){
            first = n%10;
    n=n/10;

    }
    cout<<"first is :"<<first<<"\n"<<"last is :"<<last;



}
