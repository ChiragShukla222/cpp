#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"enter the number ";
    cin>>n ;
    int r = 0 ;
    int t = n ;
    while(n>0){
        r = r*10+n%10;
        n = n/10;
    }
    if(r==t){
        cout<<"palindrome"<<r;
    }
    else{
        cout<<"not an palindrome";
    }


}
