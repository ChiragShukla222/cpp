#include<iostream>
using namespace std ;
int main(){
    int n = 123;
    int flag=0 ;
    int f ;
    while(n>0){
        f = n%10;
        n = n/10;
        flag++;
    }
    cout<<"number :"<<flag;


}
