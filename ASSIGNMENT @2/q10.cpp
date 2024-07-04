//Write a  program to count number of digits in a number.
#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout<<"enter the number ";
    cin>>n;
    int flag =0 ;
    int last ;
    int first;
    while(n>0){

            first = n%10;
            n=n/10;
            flag++;
    }
    cout<<"number of digits is : "<<flag;
}

