#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout<<"enter the number ";
    cin>>n;
   // int flag = 0;
    int last , first;
    last = n%10;
    while(n>0){
        first = n%10;
        n=n/10;

    }
    cout<<"sum is :"<<first+last;

}
