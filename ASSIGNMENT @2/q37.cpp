#include<iostream>
using namespace std ;
int main(){
    int a;
    cout<<"enter the number";
    cin>>a;
    int b = 0 ;
    while(a!=0){
        if(a&1){
            b++;//
        }
        a=a>>1;
    }
    cout<<b;

}

