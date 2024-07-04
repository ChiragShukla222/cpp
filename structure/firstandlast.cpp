#include<iostream>
using namespace std ;
 int main(){
    int fi , last , n ;
    cout<<"enter the number";
    cin>>n;

    last =  n %10;
    while(n>0){
        fi = n%10;
        n=n/10;
    }
    cout<<fi<<"\n";
    cout<<last;


 }
