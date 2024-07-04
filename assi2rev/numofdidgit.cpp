#include<iostream>
using namespace std ;
int main(){
    int a ,flag ;
     int n ;
     cout<<"enter the number";
     cin>>n;
     while(n>0){
        a=n%10;
        n=n/10;
        flag++;
     }

     cout<<"number of digit is : "<<flag;
}
