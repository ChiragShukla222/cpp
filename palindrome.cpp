#include<iostream>
using namespace std;
int main(){
    int n ;
    int r = 0 ;
    int t ;
    cout<<"enter any number ";
    cin>>n;
    t =n;
    while(n>0){
        r=r*10+n%10;
        n=n/10;
    }
    if(r==t){
        cout<<"palindrome";

    }
    else{
        cout<<"not palindrome";
    }

}
