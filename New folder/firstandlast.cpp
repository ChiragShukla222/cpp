#include<iostream>
using namespace std ;
int main(){
    int n,last ,first;
    cout<<"enter the number";
    cin>>n;
    last = n%10;
    while(n>0){
        first = n%10;
        n=n/10;
    }
    cout<<first+last;

}
