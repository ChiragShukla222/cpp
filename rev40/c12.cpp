#include<iostream>
using namespace std ;
int main(){
    int n = 562;//6
    int last =n%10;
    int f ,m ;
    int flag = 0 ;

    int k ;
    while(n>0){
        f = n%10;
        n = n/10;
         m=n/10;

        flag++;
    }
    cout<<flag<<"\n";
    cout<<last+k+f;
}
